'''
DESCRIPTION:
 
  Datacard template to be used for H+ -> tb analysis for full Run II data.
  Signal discriminant: parametrised mva output

USAGE:
./dcardGenerator_v4.py --analysisType HToTB --datacard datacards/<datacard>.py --dir <dir_with_pseudomulticrab_dirs> --barlowBeeston

EXAMPLES:
./dcardGenerator_v4.py --analysisType HToTB --datacard datacards/datacard_HToTBWithParametrisedDNN.py --dir limits2021/ --barlowBeeston --mass 200

LAST USED:
./dcardGenerator_v4.py --analysisType HToTB --datacard datacards/datacard_HToTBWithParametrisedDNN.py --dir limits2021/ --mass 200 --verbose --year 2017 --scan

HN Threads:
https://hypernews.cern.ch/HyperNews/CMS/get/HIG-18-015/11.html
'''
#================================================================================================  
# Imports
#================================================================================================  
import HiggsAnalysis.NtupleAnalysis.tools.systematics as systematics
import HiggsAnalysis.NtupleAnalysis.tools.aux as aux
import HiggsAnalysis.NtupleAnalysis.tools.ShellStyles as ShellStyles
from HiggsAnalysis.LimitCalc.InputClasses import ObservationInput
from HiggsAnalysis.LimitCalc.InputClasses import Nuisance
import sys
import re

#================================================================================================
# Shell Types
#================================================================================================
ss = ShellStyles.SuccessStyle()
ns = ShellStyles.NormalStyle()
ts = ShellStyles.NoteStyle()
hs = ShellStyles.HighlightAltStyle()
es = ShellStyles.ErrorStyle()

#================================================================================================
# Function Definition
#================================================================================================
def Print(msg, printHeader=False):
    fName = __file__.split("/")[-1]
    if printHeader==True:
        print("=== %s" % (fName))
        print("\t %s" % (msg))
    else:
        print("\t %s" % (msg))
    return

def GetNuisancesTable(Nuisances, DataGroupsforTrueMassHypothesis):
    align   = "{:<3} {:^30} {:^20} {:^10} {:^20} {:>10} {:^15} {:<40} {:^10}"
    hLine   = "="*170
    header  = align.format("#", "Nuisance ID", "SystVar", "Distrib.", "Function", "Value", "Scaling", "Label", "# Datasets")
    table   = []
    table.append(hLine)
    table.append(header)
    table.append(hLine)

    # For-loop: All nuisances
    for i, n in enumerate(Nuisances, 1):
        datasetList = []
        for j, mass in enumerate(DataGroupsforTrueMassHypothesis, 1):
            dgs = DataGroupsforTrueMassHypothesis[mass]
            for dg in dgs:
                if n.getId() in dg.getNuisances():
                    datasetList.append(dg.getLabel())
        if isinstance(n.getArg("value"), float):
            value = "%.3f" % n.getArg("value")
        elif "lumi_13TeV" in n.getId():
            value = n.getArg("value").getUncertaintyMax()
        else:
            value = "N/A"

        # Mark in red nuisances that are NOT used!
        nDsets = len(datasetList) 
        
        # Create the row
        row = align.format(i, n.getId(), n.getArg("systVariation"), n.getDistribution(), n.getFunction(), value, n.getArg("scaling"), n.getLabel(), nDsets )

        if nDsets:
            table.append(row)
        else:
            table.append(es + row + ns)

    table.append(hLine)
    table.append("")
    return table

def PrintNuisancesTable():
    table = GetNuisancesTable(Nuisances, DataGroupsforTrueMassHypothesis)
    # For-loop: All table rows
    for i,row in enumerate(table, 1):
        Print(row, i==1)
    return

#================================================================================================  
# Options
#================================================================================================  
OptionTest                             = False
OptionYear                             = "2018"  # options: "2016", "2017", "2018"
OptionCategory                         = "3B1T"  # options: "3B1T", "3B2T"
OptionFinalState                       = "HToTB" 
OptionChannelLabel                     = "HToTB"
OptionMassShape                        = "h3B1T_MVAOutput_M%s_AfterSelections"
OptionParametrised                     = True
OptionPlotNamePrefix                   = None
OptionDoControlPlots                   = True
OptionMoreHistos                       = False   
OptionPaper                            = True  # changes figure style to paper style)
OptionGenuineBBackgroundSource         = "MC"  # options: "MC"
OptionFakeBMeasurementSource           = "DataDriven" # options: "DataDriven", "MC"
OptionIncludeSystematics               = False  # [default: True]   (Shape systematics; Requires pseudo-multicrab produced with doSystematics=True) 
OptionShapeSystematics                 = True  # [default: True]   (Shape systematics; Requires pseudo-multicrab produced with doSystematics=True) 
OptionBr                               = 1.0   # [default: 1.0]    (The Br(t->bH+) used in figures and tables)
OptionSqrtS                            = 13    # [default: 13]     (The sqrt(s) used in figures and tables)
OptionBlindAnalysis                    = True  # [default: True]   (Change only if "green light" for unblinding)
OptionBlindThreshold                   = None  # [default: None,  was 0.10]   (If signal exceeds this fraction of expected events, data is blinded in a given bin)
OptionCombineSingleColumnUncertainties = False # [default: False]  (Merge nuisances with quadratic sum using the TableProducer.py Only applied to nuisances with one column)
OptionDisplayEventYieldSummary         = False # [default: False]  (Print "Event yield summary", using the TableProducer.py. A bit messy at the moment)
OptionDoWithoutSignal                  = True  # [default: False]  (Do the control plots without any signal present)
OptionLimitOnSigmaBr                   = True  # [default: True]   (Set to true for heavy H+)
OptionNumberOfDecimalsInSummaries      = 0     # [defaul: 1]
OptionCombineStatAndSystInSummaries    = False # [defaul: False]   (Add stat. and syst. error in quadrature?)
OptionConvertFromShapeToConstantList   = []    # [default: []]     (Convert these nuisances from shape to constant; Makes limits run faster & converge more easily)
OptionSeparateShapeAndNormFromSystList = []    # [default: []]     (Separate in the following shape nuisances the shape and normalization components)
OptionPrintNuisances                   = True  # [default: True]
Path                                   = "limits2021"
#===============================================================================================
# Definitions
#===============================================================================================
MassPoints                             = [200, 220, 250, 300, 350, 400, 500, 600, 700, 800, 1000, 1250, 1500, 1750, 2000, 2500, 3000]
PlotLegendHeader                       = "H^{#pm}#rightarrowtb"
SignalName                             = "ChargedHiggs_HplusTB_HplusToTB_M_%s"
DatacardName                           = "HToTB_UL%s_13TeV" % (OptionYear)
MinimumStatUncertainty                 = 0.5              # [default: 0.5]    (Minimum stat. uncert. to set to bins with zero events)
UseAutomaticMinimumStatUncertainty     = False            # [default: False]  (Do NOT use the MinimumStatUncertainty; determine value from lowest non-zero rate for each dataset   )
ToleranceForLuminosityDifference       = 0.05             # [default: 0.05]   (Tolerance for throwing error on luminosity difference; "0.01" means that a 1% is required) 
ToleranceForMinimumRate                = 0.0              # [default: 0.0]    (Tolerance for almost zero rate columns with smaller rate are suppressed) 

#================================================================================================  
# File-specific settings
#================================================================================================  

# Counter and histogram path definitions
histoPathInclusive  = "ForDataDrivenCtrlPlots"
histoPathGenuineB   = "ForDataDrivenCtrlPlots"
histoPathMC = ""
if OptionFakeBMeasurementSource == "MC":
    histoPathMC = histoPathInclusive
elif OptionFakeBMeasurementSource == "DataDriven":
    histoPathMC = histoPathGenuineB
else:
    raise Exception("This should never be reached")

# Observation definition (how to retrieve number of observed events)
Observation = None
ObservationforTrueMassHypothesis = {}
for mass in MassPoints:
    ObservationforTrueMassHypothesis[mass] = ObservationInput(datasetDefinition="Data", shapeHistoName="h%s_MVAOutput_M%s_AfterSelections" % (OptionCategory, str(mass)), histoPath=histoPathInclusive)

#================================================================================================  
# Nuisance Lists (Just the strings; The objects are defined later below)
#================================================================================================ 
myLumiSystematics       = ["lumi_13TeV_%s" % (OptionYear)]
#myLumiSystematics       = ["lumi_13TeV_%s" % (OptionYear), "lumi_13TeV_correlated"]
#if OptionYear in ["2017", "2018"]:
#    myLumiSystematics  += ["lumi_13TeV_2017_2018"]
myPileupSystematics     = ["CMS_pileup_%s" % (OptionYear)]
myTrgEffSystematics     = ["CMS_eff_trg_jets_%s" % (OptionYear)]
myEleVetoSystematics    = ["CMS_eff_e_veto_%s" % (OptionYear)]
myMuonVetoSystematics   = ["CMS_eff_m_veto_%s" % (OptionYear)]
myTauVetoSystematics    = ["CMS_eff_tau_veto_%s" % (OptionYear)]
myJetSystematics        = ["CMS_scale_j", "CMS_res_j_%s" % (OptionYear)]
myBtagSystematics       = ["CMS_eff_b_%s" % (OptionYear), "CMS_eff_b_mis_%s" % (OptionYear)]
myTopTagSystematics     = ["CMS_eff_top_%s" % (OptionYear), "CMS_eff_top_mis_%s" % (OptionYear)]

# Define systematics dictionary (easier access)
nuisanceDict = {}
nuisanceDict["MC"]  = myLumiSystematics + myPileupSystematics + myTrgEffSystematics + myEleVetoSystematics + myMuonVetoSystematics + myTauVetoSystematics 
nuisanceDict["MC"] += myJetSystematics + myBtagSystematics + myTopTagSystematics

nuisanceDict["Signal"] = nuisanceDict["MC"] + ["QCDscale_HToTB_ACCEPT", "pdf_HToTB_ACCEPT"] + ["alpha_s_HpToTB"]
nuisanceDict["TT"]     = nuisanceDict["MC"] + ["QCDscale_ttbar", "pdf_ttbar", "mass_top"] + ["QCDscale_top_ACCEPT", "pdf_top_ACCEPT"]
nuisanceDict["tEWttX"] = nuisanceDict["MC"] + ["QCDscale_top_ACCEPT", "pdf_top_ACCEPT"] + ["alpha_s_ttH"] + ["QCDscale_singleTop", "pdf_singleTop", "mass_top_singleTop"] + ["QCDscale_ew", "pdf_ew"]
#nuisanceDict["SingleTop"] = nuisanceDict["MC"] + ["QCDscale_singleTop", "pdf_singleTop", "mass_top_singleTop"]
#nuisanceDict["ttX"]       = nuisanceDict["MC"] + ["QCDscale_top_ACCEPT", "pdf_top_ACCEPT"] + ["alpha_s_ttH"] + ["QCDscale_singleTop", "pdf_singleTop", "mass_top_singleTop"]
#nuisanceDict["EW"]        = nuisanceDict["MC"] + ["QCDscale_ew", "pdf_ew"]

nFakeBBins = 35
extraNuisancesForFakeB = myPileupSystematics + myTrgEffSystematics + myJetSystematics + myBtagSystematics + myTopTagSystematics
#nuisanceDict["FakeB"] = ["CMS_fake_b_binning_%s" % (OptionYear)]+["CMS_fake_b_statistical_%d_%s" % (b, OptionYear) for b in range(0, nFakeBBins)] + ["CMS_fake_b_systematic_correlated_%s" % (OptionYear)]
nuisanceDict["FakeB"] = ["CMS_fake_b_binning_%s" % (OptionYear)]+["CMS_fake_b_statistical_%d_%s" % (b, OptionYear) for b in range(0, nFakeBBins)] + ["CMS_fake_b_topmass_%s" % (OptionYear)] + ["CMS_fake_b_invertedtop_%s" % (OptionYear)] + ["CMS_fake_b_fakebcomp_%s" % (OptionYear)] + ["CMS_fake_b_crdef_%s" % (OptionYear)]

if not OptionIncludeSystematics:
    msg = "Disabled systematics for all datasets (Stat. only datacards)"
    for nu in nuisanceDict:
        nuisanceDict[nu] = []
    
#================================================================================================  
# DataGroups (= columns in datacard) 
#================================================================================================ 
import HiggsAnalysis.LimitCalc.DataGroupsHToTB as dataGroups
DataGroups = None # Replaced by DataGroupsforTrueMassHypothesis
DataGroupsforTrueMassHypothesis = {}

SignalDataGroups=dataGroups.getSignalDataGroups(MassPoints, histoPathInclusive, OptionMassShape, nuisanceDict["Signal"], OptionParametrised, SignalName, "Hp%s")
BkgDataGroups   =dataGroups.getBackgroundDataGroups(MassPoints, histoPathInclusive, histoPathMC, OptionMassShape, nuisanceDict, OptionFakeBMeasurementSource, OptionParametrised)
for mass in MassPoints:
    DataGroupsforTrueMassHypothesis[mass] = []
    for sig in SignalDataGroups[mass]:
        DataGroupsforTrueMassHypothesis[mass].append(sig)
    for bkg in BkgDataGroups[mass]:
        DataGroupsforTrueMassHypothesis[mass].append(bkg)
    
#================================================================================================ 
# Nuisances:
# * Experimental (trigger efficiency, pileup, lepton identification efficiency, jet energy scale & 
#                 resolution, b-tagging efficiency, top-tagging efficiency, etc)
# * Theoretical  (cross section (scale & pdf), top-quark mass, RF scale acceptance, etc)
# * Background measurement
#================================================================================================ 
from HiggsAnalysis.LimitCalc.InputClasses import Nuisance
import HiggsAnalysis.LimitCalc.Nuisances as n
ReservedNuisances = []
Nuisances = []

# Luminosity related nuisances
Nuisances.append( n.getFlatNuisance("lumi13TeV-Uncorr-%s" % OptionYear) )
#Nuisances.append( n.getFlatNuisance("lumi13TeV-Corr-%s"   % OptionYear) )
#if OptionYear in ["2017", "2018"]:
#    Nuisances.append( n.getFlatNuisance("lumi13TeV-Corr1718-%s" % OptionYear) )

Nuisances.append( n.getFlatNuisance("HToTB-MuonVeto"    , postfix="_%s" % OptionYear) )
Nuisances.append( n.getFlatNuisance("HToTB-ElectronVeto", postfix="_%s" % OptionYear) )
Nuisances.append( n.getFlatNuisance("HToTB-TauVeto"     , postfix="_%s" % OptionYear) )

# Custom for HToTB 3B1T Category
HToTB_RFScale = Nuisance(id="QCDscale_HToTB_ACCEPT", label="Scale acceptance for signal"          , distr="lnN", function="Constant", value=0.044, upperValue=0.067)
TT_RFScale    = Nuisance(id="QCDscale_top_ACCEPT"  , label="Scale acceptance for top"             , distr="lnN", function="Constant", value=0.032)
HToTB_PDF     = Nuisance(id="pdf_HToTB_ACCEPT"     , label="PDF acceptance uncertainty for signal", distr="lnN", function="Constant", value=0.001) 
TT_PDF        = Nuisance(id="pdf_top_ACCEPT"       , label="PDF acceptance uncertainty for top"   , distr="lnN", function="Constant", value=0.001)

# Constant unc. for Fake-B binning selection
FakeB_BinningSystConst = Nuisance(id="CMS_fake_b_binning_%s" % (OptionYear), label="fake-b binning systematic", distr="lnN", function="Constant", value=0.02)
Nuisances.append(FakeB_BinningSystConst)

# Shape nuisances
if OptionShapeSystematics:
    Nuisances.append( n.getShapeNuisance("PUWeight"      , postfix="_%s" % OptionYear) )
    Nuisances.append( n.getShapeNuisance("JES"           , postfix="") )
    Nuisances.append( n.getShapeNuisance("JER"           , postfix="_%s" % OptionYear) )
    Nuisances.append( n.getShapeNuisance("JetTriggersSF" , postfix="_%s" % OptionYear) )
    Nuisances.append( n.getShapeNuisance("BTagSF"        , postfix="_%s" % OptionYear) )
    Nuisances.append( n.getShapeNuisance("BMistagSF"     , postfix="_%s" % OptionYear) ) 
    Nuisances.append( n.getShapeNuisance("TopTagSF"      , postfix="_%s" % OptionYear) )
    Nuisances.append( n.getShapeNuisance("TopMistagSF"   , postfix="_%s" % OptionYear) )
    # Fake-b statistical uncertainties (uncorrelated)
    for s in range(0, nFakeBBins):
        Nuisances.append(Nuisance(id="CMS_fake_b_statistical_%d_%s" % (s, OptionYear), label="fake-b transfer factor statistical for bin #%d" % (s), distr="shapeQ", function="QCDShapeVariation", systVariation="TransferFactor_%d" % (s)))

    # Fake-b systematics (each source is independent and correlated across bins)
    Nuisances.append(Nuisance(id="CMS_fake_b_topmass_%s" % (OptionYear), label="fake-b TF syst. (top-mass window)", distr="shapeQ", function="QCDShapeVariation", systVariation="TFTopMassWindow_0"))
    Nuisances.append(Nuisance(id="CMS_fake_b_invertedtop_%s" % (OptionYear), label="fake-b TF syst. (invert different top)", distr="shapeQ", function="QCDShapeVariation", systVariation="TFInvertedTop_0"))
    Nuisances.append(Nuisance(id="CMS_fake_b_fakebcomp_%s" % (OptionYear), label="fake-b TF syst. (fake-b composition)", distr="shapeQ", function="QCDShapeVariation", systVariation="TFFakeBComp_0"))
    Nuisances.append(Nuisance(id="CMS_fake_b_crdef_%s" % (OptionYear), label="fake-b TF syst. (CR definition)", distr="shapeQ", function="QCDShapeVariation", systVariation="TFCRDef_0"))
    
    # Fake-b systematic (including all sources and correlated in bins)
    #Nuisances.append(Nuisance(id="CMS_fake_b_systematic_correlated_%s" % (OptionYear), label="fake-b transfer factor systematic (correlated)", distr="shapeQ", function="QCDShapeVariation", systVariation="TFSystUncCorrelated_0"))
    
    # Fake-b systematic (including all sources and UNcorrelated bins)
    #for s in range(0, nFakeBBins):
    #    Nuisances.append(Nuisance(id="CMS_fake_b_systematic_%d_%s" % (s, OptionYear), label="fake-b transfer factor systematic for bin #%d" % (s), distr="shapeQ", function="QCDShapeVariation", systVariation="TFSystUnc_%d" % (s))) 

# Theoretical nuisances
Nuisances.append( n.getFlatNuisance("TT_scale" , postfix="") )
Nuisances.append( n.getFlatNuisance("TT_pdf"   , postfix="") )
Nuisances.append( n.getFlatNuisance("TT_mass"  , postfix="") )
Nuisances.append( n.getFlatNuisance("TTX_scale", postfix="") )
Nuisances.append( n.getFlatNuisance("TTX_pdf"  , postfix="") )
Nuisances.append( n.getFlatNuisance("TTX_mass" , postfix="") )
Nuisances.append( n.getFlatNuisance("EW_scale"       , postfix="") )
Nuisances.append( n.getFlatNuisance("EW_pdf"         , postfix="") )
Nuisances.append( n.getFlatNuisance("alpha_s_ttH"    , postfix="") )
Nuisances.append( n.getFlatNuisance("alpha_s_HpToTB"  , postfix="") )
Nuisances.append(HToTB_RFScale)
Nuisances.append(HToTB_PDF)
Nuisances.append(TT_RFScale)
Nuisances.append(TT_PDF)


#================================================================================================ 
# Merge nuisances to same row (first item specifies the name for the row)
# This is for correlated uncertainties. It forces 2 nuisances to be on SAME datacard row
# For example, ttbar XS scale and singleTop PDF should be varied togethed (up or down) but always
# in phase.
# WARNING: This solely applies for constants and not shape systematics!
# NOTE: When merging nuisances the resultant "merged" name will be the first element of the merging list
# MergeNuisances.append(["QCDscale_ttbar", "QCDscale_singleTop"]) #resultant name will be "QCDscale_ttbar"
#================================================================================================ 
MergeNuisances=[]
# MergeNuisances.append(["CMS_eff_b_%s" % (OptionYear), "CMS_eff_b_mis_%s" % (OptionYear)])
# MergeNuisances.append(["CMS_eff_b", "CMS_eff_b_forFakeTau"])
# MergeNuisances.append(["CMS_res_j", "CMS_res_j"])
    

#================================================================================================ 
# Convert shape systematics to constants if asked
#================================================================================================ 
from HiggsAnalysis.LimitCalc.InputClasses import convertFromSystVariationToConstant
nSysTotal     = len(Nuisances)
nSysToConvert = len(OptionConvertFromShapeToConstantList)
if nSysToConvert > 0:
    Print("Converting %s/%s shape systematics to constants if asked." % (nSysToConvert, nSysTotal), True)
    convertFromSystVariationToConstant(Nuisances, OptionConvertFromShapeToConstantList)

# Separate the shape nuisances and the shape and normalization components if asked
from HiggsAnalysis.LimitCalc.InputClasses import separateShapeAndNormalizationFromSystVariation
nSysShapeComponents = len(OptionSeparateShapeAndNormFromSystList)
if (nSysShapeComponents>0):
    Print("Separating %s/%s shape and normalization components" % (nSysShapeComponents, nSysTotal), True)
    separateShapeAndNormalizationFromSystVariation(Nuisances, OptionSeparateShapeAndNormFromSystList)

#================================================================================================ 
# Control plots (https://twiki.cern.ch/twiki/bin/view/CMS/Internal/PubGuidelines#Figures_and_tables)
# https://twiki.cern.ch/twiki/bin/view/CMS/Internal/PubGuidelines#Figures_and_tables
#================================================================================================ 
uPt     = "GeV"
uMass   = "GeV"
uEnergy = "GeV"

from HiggsAnalysis.LimitCalc.InputClasses import ControlPlotInput
ControlPlots= []

hNVertices = ControlPlotInput(
    title     = "NVertices_AfterSelections",
    histoName = "h%s_NVertices_AfterSelections" % (OptionCategory),
    details   = { "xlabel"             : "vertices",
                  "ylabel"             : "Events",
                  "divideByBinWidth"   : False,
                  "unit"               : "",
                  "log"                : True,
                  "legendPosition"     : "NE",
                  "ratioLegendPosition": "right",
                  "opts"               : {"ymin": 5e-1, "ymaxfactor": 10},
              },
    blindedRange = [0, 100],
)

hMVAOutputs = []
for mass in MassPoints:
    
    #if mass > 1000:
    #    ylabel = "Events"
    #    divideByBinWidth = False
    #else:
    ylabel = "< Events >"
    divideByBinWidth = True
    
    h = ControlPlotInput(
        title     = "MVAOutput_M%s_AfterSelections" % (mass),
        histoName = "h%s_MVAOutput_M%s_AfterSelections" % (OptionCategory, mass),
        details   = { "xlabel"             : "mva output",
                      "ylabel"             : ylabel,
                      "divideByBinWidth"   : divideByBinWidth,
                      "unit"               : "",
                      "log"                : True,
                      "legendPosition"     : "NW",
                      "ratioLegendPosition": "right",
                      "opts"               : {"xmin": 0.0, "xmax": 1.0, "ymin": 5e-1, "ymaxfactor": 20},
                  },
        blindedRange=[0.3, 1.0],
    )
    hMVAOutputs.append(h)

hMET = ControlPlotInput(
    title     = "MET_AfterSelections",
    histoName = "h%s_MET_AfterSelections" % (OptionCategory),
    details   = { "xlabel"             : "E_{T}^{miss}",
                  "ylabel"             : "< Events / %s >" % (uPt),
                  "divideByBinWidth"   : True,
                  "unit"               : "GeV",
                  "log"                : True,
                  "legendPosition"     : "NE",
                  "ratioLegendPosition": "right",
                  "opts"               : {"ymin": 5e-1, "ymaxfactor": 8}
                  },
    blindedRange=[0.0, 500],
    )

hHT = ControlPlotInput(
    title     = "HT_AfterSelections",
    histoName = "h%s_HT_AfterSelections" % (OptionCategory),
    details   = { "xlabel"             : "H_{T}",
                  "ylabel"             : "< Events / %s >" % (uEnergy),
                  "divideByBinWidth"   : True,
                  "unit"               : "GeV",
                  "log"                : True,
                  "legendPosition"     : "NE",
                  "ratioLegendPosition": "right",
                  "opts"               : {"ymin": 5e-1, "ymaxfactor": 10}
                  },
    blindedRange=[500.0, 3000.0], # specify range min,max if blinding applies to this control plot      
    )

hHPlusMass = ControlPlotInput(
    title     = "HPlusMass_AfterSelections",
    histoName = "h%s_HPlusMass_AfterSelections" % (OptionCategory),
    details   = { "xlabel"             : "m_{H^{#pm}}",
                  "ylabel"             : "< Events / %s >" % (uEnergy),
                  "divideByBinWidth"   : True,
                  "unit"               : "",
                  "log"                : True, 
                  "legendPosition"     : "NE",
                  "ratioLegendPosition": "right",
                  "opts"               : {"ymin": 5e-2, "ymaxfactor": 10},
                  },
    blindedRange=[0.0, 2500.0],
)

hJetN = ControlPlotInput(
    title     = "NJets_AfterSelections", # rebinning key for dict in systematics.py
    histoName = "h%s_NJets_AfterSelections" % (OptionCategory),
    details   = { "xlabel"             : "jets multiplicity",
                  "ylabel"             : "Events",
                  "divideByBinWidth"   : False,
                  "unit"               : "",
                  "log"                : True,
                  "legendPosition"     : "NE",
                  "ratioLegendPosition": "right",
                  "opts"               : {"ymin": 5e-1, "ymaxfactor": 10}
                  },
    blindedRange=[6.5, 20.0],
)

hBBPair_MaxPt_M = ControlPlotInput(
    title      = "BBPair_MaxPt_M_AfterSelections",
    histoName  = "h%s_BBPair_MaxPt_M_AfterSelections" % (OptionCategory),
    details    = {"xlabel"             : "m_{bb}^{max p_{T}}",
                  "ylabel"             : "< Events / %s >" % (uEnergy),
                  "divideByBinWidth"   : True,
                  "unit"               : "GeV",
                  "log"                : True,
                  "legendPosition"     : "NE",
                  "ratioLegendPosition": "right",
                  "opts"               : {"ymin": 5e-1, "ymaxfactor": 10},
                  },
    blindedRange=[0.0, 800.0],
)

hBBPair_dRMin_Pt = ControlPlotInput(
    title     = "BBPair_dRMin_Pt_AfterSelections",
    histoName = "h%s_BBPair_dRMin_Pt_AfterSelections" % (OptionCategory),
    details   = {"xlabel"              : "p_{T}",
                 "ylabel"             : "< Events / %s >" % (uEnergy),
                  "divideByBinWidth"   : True,
                  "unit"               : "GeV",
                  "log"                : True,
                  "legendPosition"     : "NE",
                  "ratioLegendPosition": "right",
                  "opts"               : {"ymin": 5e-1, "ymaxfactor": 10},
                  },
    blindedRange=[0.0, 800.0],
)

hAplanarity = ControlPlotInput(
    title     = "Aplanarity_AfterSelections",
    histoName = "h%s_Aplanarity_AfterSelections" % (OptionCategory),
    details   = {"xlabel"              : "Aplanarity",
                 "ylabel"              : "Events",
                 "divideByBinWidth"    : False,
                 "unit"                : "",
                 "log"                 : True,
                 "legendPosition"      : "NE",
                 "ratioLegendPosition" : "right",
                 "opts"                : {"ymin": 5e-1, "ymaxfactor": 10},
             },
    blindedRange=[0.0, 1.0],
)

hCircularity = ControlPlotInput(
    title     = "Circularity_AfterSelections",
    histoName = "h%s_Circularity_AfterSelections" % (OptionCategory),
    details   = {"xlabel"              : "Circularity",
                 "ylabel"              : "Events",
                 "divideByBinWidth"    : False,
                 "unit"                : "",
                 "log"                 : True,
                 "legendPosition"      : "NE",
                 "ratioLegendPosition" : "right",
                 "opts"                : {"ymin": 5e-1, "ymaxfactor": 10},
             },
    blindedRange=[0.0, 1.0],
)

hDPtSumPt_hplus_bH = ControlPlotInput(
    title     = "DPtSumPt_hplus_bH_AfterSelections",
    histoName = "h%s_DPtSumPt_hplus_bH_AfterSelections" % (OptionCategory),
    details   = {"xlabel"              : "#Delta p_{T}/(p_{T}^{H^{#pm}}+p_{T}^{b_{H^{#pm}}})",##frac{p_{T,H^{#pm}} - p_{T, b_{H^{#pm}}}}{p_{T,H^{#pm}} + p_{T, b_{H^{#pm}}}}",
                 "ylabel"              : "Events",
                 "divideByBinWidth"    : False,
                 "unit"                : "",
                 "log"                 : True,
                 "legendPosition"      : "NE",
                 "ratioLegendPosition" : "right",
                 "opts"                : {"ymin": 5e-1, "ymaxfactor": 10},
             },
    blindedRange=[0.0, 1.0],
)

hDPtSumPt_tH_bH = ControlPlotInput(
    title     = "DPtSumPt_tH_bH_AfterSelections",
    histoName = "h%s_DPtSumPt_tH_bH_AfterSelections" % (OptionCategory),
    details   = {"xlabel" : "#frac{p_{T, t_{H^{#pm}}} - p_{T, b_{H^{#pm}}}}{p_{T, t_{H^{#pm}}} + p_{T, b_{H^{#pm}}}}",
                 "ylabel"              : "Events",
                 "divideByBinWidth"    : False,
                 "unit"                : "",
                 "log"                 : True,
                 "legendPosition"      : "NE",
                 "ratioLegendPosition" : "right",
                 "opts"                : {"ymin": 5e-1, "ymaxfactor": 10},
             },
    blindedRange=[0.0, 1.0],
)

hDTheta_tH_bH = ControlPlotInput(
    title     = "DTheta_tH_bH_AfterSelections",
    histoName = "h%s_DTheta_tH_bH_AfterSelections" % (OptionCategory),
    details   = {"xlabel" : "#Delta#theta_{t, b}",
                 "ylabel" : "Events",
                 "divideByBinWidth"    : False,
                 "unit"                : "",
                 "log"                 : True,
                 "legendPosition"      : "NE",
                 "ratioLegendPosition" : "right",
                 "opts"                : {"ymin": 5e-1, "ymaxfactor": 10},
             },
    blindedRange=[0.0, 3.14],
)

hHTb = ControlPlotInput(
    title     = "HTb_AfterSelections",
    histoName = "h%s_HTb_AfterSelections" % (OptionCategory),
    details   = {"xlabel" : "H_{T, b}",
                 "ylabel"             : "< Events / %s >" % (uEnergy),
                 "divideByBinWidth"   : True,
                 "unit"               : "GeV",
                 "log"                : True,
                 "legendPosition"     : "NE",
                 "ratioLegendPosition": "right",
                 "opts"               : {"ymin": 5e-1, "ymaxfactor": 10},
             },
    blindedRange=[0.0, 1500.0],
)

hbH_ptOverHTb = ControlPlotInput(
    title    = "bH_ptOverHTb_AfterSelections",
    histoName = "h%s_bH_ptOverHTb_AfterSelections",
    details   = {"xlabel" : "p_{T, b_{H^{#pm}}}/HT_{b}",
                 "ylabel" : "Events",
                 "divideByBinWidth" : False,
                 "unit"   : "",
                 "log"    : True,
                 "legendPosition"     : "NE",
                 "ratioLegendPosition": "right",
                 "opts"               : {"ymin": 5e-1, "ymaxfactor": 10},
             },
    blindedRange=[0, 1],
)

hy23 = ControlPlotInput(
    title      = "y23_AfterSelections",
    histoName = "h%s_y23_AfterSelections",
    details   = {"xlabel" : "y23",
                 "ylabel" : "Events",
                 "divideByBinWidth"    : False,
                 "unit"                : "",
                 "log"                 : True,
                 "legendPosition"      : "NE",
                 "ratioLegendPosition" : "right",
                 "opts"                : {"ymin": 5e-1, "ymaxfactor": 10},
             },
    blindedRange=[0.0, 0.25],
)                                                                    

hSphericity = ControlPlotInput(
    title     = "Sphericity_AfterSelections",
    histoName = "h%s_Sphericity_AfterSelections" % (OptionCategory),
    details   = {"xlabel" : "Sphericity",
                 "ylabel" : "Events",
                 "divideByBinWidth"    : False,
                 "unit"                : "",
                 "log"                 : True,
                 "legendPosition"      : "NE",
                 "ratioLegendPosition" : "right",
                 "opts"                : {"ymin": 5e-1, "ymaxfactor": 10},
             },
    blindedRange=[0.0, 1.0],
)

hbHmass = ControlPlotInput(
    title     = "bH_mass_AfterSelections",
    histoName = "h%s_bH_mass_AfterSelections" % (OptionCategory),
    details   = {"xlabel" : "M",
                 "ylabel" : "Events / %s" % (uEnergy),
                 "divideByBinWidth"   : False,
                 "unit"               : "GeV",
                 "log"                : True,
                 "legendPosition"     : "NE",
                 "ratioLegendPosition": "right",
                 "opts"               : {"ymin": 5e-1, "ymaxfactor": 10},
             },
    blindedRange=[0.0, 100.0],
)

hbH_pt_hplusCM = ControlPlotInput(
    title     = "bH_pt_hplusCM_AfterSelections",
    histoName = "h%s_bH_pt_hplusCM_AfterSelections" % (OptionCategory),
    details   = {"xlabel" : "p_{T}",
                 "ylabel"             : "< Events / %s >" % (uEnergy),
                 "divideByBinWidth"   : True,
                 "unit"               : "GeV",
                 "log"                : True,
                 "legendPosition"     : "NE",
                 "ratioLegendPosition": "right",
                 "opts"               : {"ymin": 5e-1, "ymaxfactor": 10},
             },
    blindedRange=[0.0, 800.0],
)

hHPlusPt = ControlPlotInput(
    title     = "HPlusPt_AfterSelections",
    histoName = "h%s_HPlusPt_AfterSelections" % (OptionCategory),
    details   = {"xlabel"             : "p_{T}",
                 "ylabel"             : "< Events / %s >" % (uEnergy),
                 "divideByBinWidth"   : True,
                 "unit"               : "GeV",
                 "log"                : True,
                 "legendPosition"     : "NE",
                 "ratioLegendPosition": "right",
                 "opts"               : {"ymin": 5e-1, "ymaxfactor": 10},
             },
    blindedRange=[0.0, 1000.0],
)

hHPlusRapidity = ControlPlotInput(
    title      = "HPlusRapidity_AfterSelections",
    histoName  = "h%s_HPlusRapidity_AfterSelections" % (OptionCategory),
    details    = {"xlabel"             : "Rapidity",
                  "ylabel"             : "Events",
                  "divideByBinWidth"   : False,
                  "unit"               : "GeV",
                  "log"                : True,
                  "legendPosition"     : "NE",
                  "ratioLegendPosition": "right",
                  "opts"               : {"xmin":-3.5, "xmax":3.5, "ymin": 5e-1, "ymaxfactor": 10},
              },
    blindedRange=[-3.0, 3.0],
)

hHPlusBJetEta = ControlPlotInput(
    title     = "HPlusBJetEta_AfterSelections",
    histoName = "h%s_HPlusBJetEta_AfterSelections" % (OptionCategory),
    details   = {"xlabel"             : "#eta",
                 "ylabel"             : "Events",
                 "divideByBinWidth"   : False,
                 "unit"               : "",
                 "log"                : True,
                 "legendPosition"     : "NE",
                 "ratioLegendPosition": "right",
                 "opts"               : {"ymin": 5e-1, "ymaxfactor": 10},
             },
    blindedRange=[-3, 3],
)

hHPlusBJetPt = ControlPlotInput(
    title     = "HPlusBJetPt_AfterSelections",
    histoName = "h%s_HPlusBJetPt_AfterSelections" % (OptionCategory),
    details   = {"xlabel"             : "p_{T}",
                 "ylabel"             : "< Events / %s >" % (uEnergy),
                 "divideByBinWidth"   : True,
                 "unit"               : "GeV",
                 "log"                : True,
                 "legendPosition"     : "NE",
                 "ratioLegendPosition": "right",
                 "opts"               : {"ymin": 5e-1, "ymaxfactor": 10},
                 },
    blindedRange=[0.0, 800.0],
)

hHPlusWMass  = ControlPlotInput(
    title    = "HPlusWMass_AfterSelections",
    histoName= "h%s_HPlusWMass_AfterSelections" % (OptionCategory),
    details  = {"xlabel" : "M",
                "ylabel" : "< Events / %s >" % (uEnergy),
                "divideByBinWidth"   : True,
                "unit"               : "GeV",
                "log"                : True,
                "legendPosition"     : "NE",
                "ratioLegendPosition": "right",
                "opts"               : {"ymin": 5e-1, "ymaxfactor": 10},
            },
    blindedRange=[0.0, 200.0],
)

hHPlusWPt    = ControlPlotInput(
    title    = "HPlusWPt_AfterSelections",
    histoName= "h%s_HPlusWPt_AfterSelections" % (OptionCategory),
    details  = {"xlabel"           : "p_{T}",
                "ylabel"           : "< Events / %s >" % (uEnergy),
                "divideByBinWidth"   : True,
                "unit"               : "GeV",
                "log"                : True,
                "legendPosition"     : "NE",
                "ratioLegendPosition": "right",
                "opts"               : {"ymin": 5e-1, "ymaxfactor": 10},
            },
    blindedRange=[0.0, 800.0],
)
    
hHPlusTopBJetPt = ControlPlotInput(
    title     = "HPlusTopBJetPt_AfterSelections",
    histoName = "h%s_HPlusTopBJetPt_AfterSelections" % (OptionCategory),
    details   = {"xlabel"             : "p_{T}",
                 "ylabel"             : "< Events / %s >" % (uEnergy),
                 "divideByBinWidth"   : True,
                 "unit"               : "GeV",
                 "log"                : True,
                 "legendPosition"     : "NE",
                 "ratioLegendPosition": "right",
                 "opts"               : {"ymin": 5e-1, "ymaxfactor": 10},
             },
    blindedRange=[0.0, 800.0],
)

hHPlusTopRapidity = ControlPlotInput(
    title     = "HPlusTopRapidity_AfterSelections",
    histoName = "h%s_HPlusTopRapidity_AfterSelections" % (OptionCategory),
    details   = {"xlabel"             : "Rapidity",
                 "ylabel"             : "Events",
                 "divideByBinWidth"   : False,
                 "unit"               : "",
                 "log"                : True,
                 "legendPosition"     : "NE",
                 "ratioLegendPosition": "right",
                 "opts"               : {"xmin":-3.5, "xmax":3.5, "ymin": 5e-1, "ymaxfactor": 10},
                 },
    blindedRange=[-3.0, 3.0],
)

hHPlusTopMass = ControlPlotInput(
    title     = "HPlusTopMass_AfterSelections",
    histoName = "h%s_HPlusTopMass_AfterSelections" % (OptionCategory),
    details   = {"xlabel" : "M",
                 "ylabel" : "Events",
                 "divideByBinWidth"   : False,
                 "unit"               : "GeV",
                 "log"                : True,
                 "legendPosition"     : "NE",
                 "ratioLegendPosition": "right",
                 "opts"               : {"ymin": 5e-1, "ymaxfactor": 10},
             },
    blindedRange=[100.0, 300.0],
)

hHPlusTopPt = ControlPlotInput(
    title     = "HPlusTopPt_AfterSelections",
    histoName = "h%s_HPlusTopPt_AfterSelections" % (OptionCategory),
    details   = {"xlabel" : "p_{T}",
                 "ylabel" : "< Events / %s >" % (uEnergy),
                 "divideByBinWidth"   : True,
                 "unit"               : "GeV",
                 "log"                : True,
                 "legendPosition"     : "NE",
                 "ratioLegendPosition": "right",
                 "opts"               : {"ymin": 5e-1, "ymaxfactor": 10},
             },
    blindedRange=[0.0, 800.0],
)

hHPlusTopMVA = ControlPlotInput(
    title     = "HPlusTopMVA_AfterSelections",
    histoName = "h%s_HPlusTopMVA_AfterSelections" % (OptionCategory),
    details   = {"xlabel" : "mva",
                 "ylabel" : "Events",
                 "divideByBinWidth"   : False,
                 "unit"               : "",
                 "log"                : True,
                 "legendPosition"     : "NE",
                 "ratioLegendPosition": "right",
                 "opts"               : {"xmin": 0.0, "xmax": 1.0, "ymin": 5e-1, "ymaxfactor": 10},
             },
    blindedRange=[0.0, 1.0],
)

hAssocTopMass = ControlPlotInput(
    title     = "AssocTopMass_AfterSelections",
    histoName = "h%s_AssocTopMass_AfterSelections" % (OptionCategory),
    details   = {"xlabel"             : "M",
                 "ylabel"             : "Events",
                 "divideByBinWidth"   : False,
                 "unit"               : "GeV",
                 "log"                : True,
                 "legendPosition"     : "NE",
                 "ratioLegendPosition": "right",
                 "opts"               : {"ymin": 5e-1, "ymaxfactor": 10},
             },
    blindedRange=[100.0, 300.0],
)
                 
hAssocTopMVA  = ControlPlotInput(
    title     = "AssocTopMVA_AfterSelections",
    histoName = "h%s_AssocTopMVA_AfterSelections" % (OptionCategory),
    details   = {"xlabel"             : "mva output",
                 "ylabel"             : "Events",
                 "divideByBinWidth"   : False,
                 "unit"               : "",
                 "log"                : True,
                 "legendPosition"     : "NE",
                 "ratioLegendPosition": "right",
                 "opts"               : {"xmin": 0.0, "xmax": 1.0, "ymin": 5e-1, "ymaxfactor": 10},
                 },
    blindedRange=[0.0, 1.0],
)

hAssocTopPt   = ControlPlotInput(
    title     = "AssocTopPt_AfterSelections",
    histoName = "h%s_AssocTopPt_AfterSelections" % (OptionCategory),
    details   = {"xlabel"             : "p_{T}",
                 "ylabel"             : "< Events / %s >" % (uPt),
                 "divideByBinWidth"   : True,
                 "unit"               : "GeV",
                 "log"                : True,
                 "legendPosition"     : "NE",
                 "ratioLegendPosition": "right",
                 "opts"               : {"ymin": 5e-1, "ymaxfactor": 10},
             },
    blindedRange=[0.0, 800.0],
)

hAssocTopRapidity = ControlPlotInput(
    title     = "AssocTopRapidity_AfterSelections",
    histoName = "h%s_AssocTopRapidity_AfterSelections" % (OptionCategory),
    details   = {"xlabel"             : "Rapidity",
                 "ylabel"             : "Events",
                 "divideByBinWidth"   : False,
                 "unit"               : "",
                 "log"                : True,
                 "legendPosition"     : "NE",
                 "ratioLegendPosition": "right",
                 "opts"               : {"xmin":-3.5, "xmax":3.5, "ymin": 5e-1, "ymaxfactor": 10},
                 },
    blindedRange=[-3.0, 3.0],
)

#================================================================================================ 
# Create the list of control plots (NOTE: Set "OptionDoControlPlots" to True)
#================================================================================================ 
for h in hMVAOutputs:
    ControlPlots.append(h)
ControlPlots.append(hHT)
ControlPlots.append(hMET)
#ControlPlots.append(hNVertices)
ControlPlots.append(hJetN)
ControlPlots.append(hHPlusMass)
ControlPlots.append(hHPlusPt)
ControlPlots.append(hHPlusRapidity)
ControlPlots.append(hHPlusTopPt)
ControlPlots.append(hHPlusTopMass)
ControlPlots.append(hHPlusTopMVA)
#ControlPlots.append(hHPlusTopRapidity)
ControlPlots.append(hHPlusTopBJetPt)
ControlPlots.append(hHPlusWPt)
ControlPlots.append(hHPlusWMass)
ControlPlots.append(hHPlusBJetPt)
ControlPlots.append(hHPlusBJetEta)
ControlPlots.append(hAssocTopMass)
ControlPlots.append(hAssocTopMVA)
ControlPlots.append(hAssocTopPt)
ControlPlots.append(hAssocTopRapidity)
ControlPlots.append(hCircularity)
ControlPlots.append(hDTheta_tH_bH)
ControlPlots.append(hHTb)
ControlPlots.append(hSphericity)
ControlPlots.append(hBBPair_dRMin_Pt)
ControlPlots.append(hBBPair_MaxPt_M)
ControlPlots.append(hAplanarity)
ControlPlots.append(hy23)
ControlPlots.append(hbH_ptOverHTb)
ControlPlots.append(hDPtSumPt_hplus_bH)

if OptionTest:
    MassPoints   = [800]
    ControlPlots = []
    ControlPlots.append(hHPlusMass)
    ControlPlots.append(hHT)
