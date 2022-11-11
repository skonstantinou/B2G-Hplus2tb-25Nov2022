#!/usr/bin/env python3
'''
DESCRIPTION: 
https://hypernews.cern.ch/HyperNews/CMS/get/higgsexo/552.html
Dear colleagues,

please note the recent update of the LHCHXSWG MSSM benchmark scenarios 
as announced below by Artur. These include now also the scenarios with 
negative Higgsino mass parameter which have recently become popular.

Best regards

Luca & Rainer


Dear Higgs PAG and Higgs Extended Group conveners,

I'd like to inform you about recently updated and extended sets of ROOT 
files for MSSM benchmark scenarios:

https://twiki.cern.ch/twiki/bin/view/LHCPhysics/LHCHXSWGMSSMNeutral#ROOT_histograms_2018_and_beyond

Please note (see for instance at the "Changelog"), that there have been 
a number of corrections and updates to the ROOT files, such that it will 
be very important for each running BSM Higgs analysis to use the latest files.

Therefore, I'd like to ask you to include this information into the news part of the next meetings.

Thank you very much in advance!

Cheers,

Artur on behalf of the CMS contacts of the WG3 in the LHCHWG


The recent update of the LHCHXSWG MSSM benchmark scenarios 
as announced below by Artur. These include now also the scenarios with 
negative Higgsino mass parameter which have recently become popular.

Best regards


USAGE:
./plotbrs.py [opts]


EXAMPLES:
./plotbrs.py -s png --tanbeta "1.0,3.0,5.0,20.0,10.0,30.0" --gridX --gridY
./plotbrs.py -s png --tanbeta "1.0,3.0,5.0,20.0,10.0,30.0"
./plotbrs.py -s png --tanbeta "1.0,3.0,5.0,20.0,10.0,30.0" --gridX --gridY --logY --logX
./plotbrs.py -s png --tanbeta "1.0,3.0,5.0,20.0,10.0,30.0" --logY --logX --xMin 10 --xMax 1000
./plotbrs.py -s png,pdf --tanbeta "1.0,5.0,10.0,20.0,30.0,50.0" --logY --logX --xMin 99.9 --xMax 8000
./plotbrs.py -s png,pdf --energy 13 --scenario hMSSM,mh125 --tanbeta "1.0,5.0,10.0,20.0,30.0,50.0" --logY --logX --xMin 99.9 --xMax 8000
./plotbrs.py -s pdf --energy 13 --scenario hMSSM,mh125 --tanbeta "1.0,3.0,5.0,10.0,20.0,30.0,50.0" --logY --logX --xMin 99.9 --xMax 8000
./plotbrs.py -s pdf --energy 13 --scenario hMSSM,mh125 --tanbeta "0.7,0.8,0.9" --logY --xMin 40.0 --xMax 180 -s png
./plotbrs.py -s pdf --energy 13 --scenario hMSSM,mh125 --tanbeta "0.5,0.7" --logY --xMin 0.0 --xMax 200 -s png
./plotbrs.py --energy 13 --scenario hMSSM,mh125 --tanbeta "0.5,0.6,0.7,0.8,0.9,1.0,2.0,3.0" --logY --xMin 90 --xMax 2000 -s png,pdf --logX --saveDir test


LAST USED: 
./plotbrs.py --energy 13 --scenario hMSSM,mh125 --tanbeta "0.5,0.6,0.7,0.8,0.9,1.0,2.0" --logY --xMin 50 --xMax 200 -s png,pdf --saveDir LowTanBetaXt50to200
./plotbrs.py --energy 13 --scenario hMSSM,mh125 --tanbeta "1,2,3,5,10,20" --logY --xMin 90 --xMax 1000 -s png,pdf --saveDir LowTanBetaX90to1000


LINKS:
https://twiki.cern.ch/twiki/bin/view/LHCPhysics/LHCHWGMSSMNeutral?redirectedfrom=LHCPhysics.LHCHXSWGMSSMNeutral#ROOT_histograms_2018_and_beyond
'''
#================================================================================================
# Imports
#================================================================================================
import sys
import ROOT as R
from styles import ModTDRStyle
import numpy as np
from array import array
from optparse import OptionParser
import os

#================================================================================================
# Imports
#================================================================================================
def Print(msg, printHeader=False):
    fName = __file__.split("/")[-1]
    if printHeader==True:
        print("=== " + fName)
        print("\t" + msg)
    else:
        print("\t" + msg)
    return

def Verbose(msg, printHeader=True, verbose=False):
    if not opts.verbose:
        return
    Print(msg, printHeader)
    return

def construct_binning(binning_structure):
    bins = np.concatenate([np.arange(start, end, step) for start, end, step in binning_structure] + [np.array([binning_structure[-1][1]])])
    return bins


def main(opts):

    # Setup ROOT
    R.gROOT.SetBatch(opts.batchMode)
    R.gStyle.SetNdivisions(8*1 + 100*5 + 10000*0, "X") #primary + secondary + tertiary divisions
    R.gErrorIgnoreLevel = R.kBreak # R.kPrint, R.kInfo, R.kWarning, R.kError, R.kBreak, R.kSysError, R.kFatal,
    ModTDRStyle()
    R.gStyle.SetPadGridX(opts.gridX)
    R.gStyle.SetPadGridY(opts.gridY)
    if 0:
        R.gStyle.SetOptLogx(opts.logX)
        R.gStyle.SetOptLogy(opts.logY)
    #R.gStyle.SetOptLogz(opts.logZ)
    
    # https://root.cern.ch/doc/master/classTColor.html#C02
    colourList = [R.kRed-4, R.kOrange, R.kGreen+1, R.kAzure, R.kBlack, R.kPink+1, R.kCyan, R.kTeal+6, R.kPink-9, R.kMagenta+3, R.kGray+2, R.kGreen-2, R.kRed-7, R.kSpring+2, R.kViolet+2, R.kYellow+2, R.kBlack, R.kBlue, R.kViolet, R.kPink+6, R.kCyan]
    #colourList = [R.kOrange, R.kGray+2, R.kAzure, R.kBlack, R.kRed+1, R.kTeal+6, R.kPink-9, R.kGreen-2, R.kMagenta, R.kRed-7, R.kSpring+2, R.kViolet+2, R.kYellow+2, R.kBlack, R.kBlue, R.kViolet, R.kPink+6, R.kCyan]

    # https://root.cern.ch/doc/master/classTAttLine.html#L3
    if 0:
        styleList = [R.kSolid, R.kDashed, R.kDotted, R.kDashDotted, 5, 6, 7, 8, 9, 10]
    else:
        styleList = [R.kSolid for i in range(0, 10)]

    # Construct dictionary with ROOT files
    fileDict = {}
    for sc in opts.scenarioList:
        if "hMSSM" in sc:
            fileName = "%s_%sTeV.root" % (sc, opts.energy)
        else:
            fileName = "%s_%s.root" % (sc, opts.energy)
        folder   = "inputs"
        filePath = os.path.join(folder, fileName)
        if os.path.isfile(filePath):
            fileDict[sc] = R.TFile.Open(filePath)
        else:
            raise Exception("File %s does not exist!" % (filePath))

    # https://arxiv.org/pdf/1808.07542.pdf
    labelDict = {}
    labelDict["hMSSM"]         = "hMSSM scenario"
    labelDict["mh125"]         = "M_{h}^{125} scenario"
    labelDict["mh125_lc"]      = "M_{h}^{125}(#tilde{#chi})"
    labelDict["mh125_ls"]      = "M_{h}^{125}(#tilde{#tau})"
    labelDict["mh125_align"]   = "M_{h}^{125}(alignment)"
    labelDict["mHH125_align"]  = "M_{H}^{125}(alignment)"
    labelDict["mHH125_CPV"]    = "M_{h{_1}}^{125}(CPV)"
    labelDict["mh125_muneg_1"] = "M_{h^{125}} (#mu = -1 TeV)"
    labelDict["mh125_muneg_2"] = "M_{h^{125}} (#mu = -2 TeV)"
    labelDict["mh125_muneg_3"] = "M_{h^{125}} (#mu = -3 TeV)"

    # Create canvas
    C = R.TCanvas()
    C.cd()
    
    mA = {}
    # mA["mh125"] = construct_binning([[ 70.0, 200.0, 10.0], [200.0, 500.0, 25.0], [500.0, 1000.0, 50.0], [1000.0, 2600.0, 50.0]]), # original
    # mA["hMSSM"] = construct_binning([[130.0, 200.0, 10.0], [200.0, 500.0, 25.0], [500.0, 1000.0, 50.0], [1000.0, 2000.0, 50.0]]), # original
    # mA["mh125"] = construct_binning([[ 70.0, 200.0, 10.0], [200.0, 500.0, 25.0], [500.0, 1000.0, 50.0], [1000.0, 1500.0, 50.0]])
    for l in labelDict.keys():
        if "mh125" in l:
            mA[l] = construct_binning([[ 70.0, 200.0, 10.0], [200.0, 500.0, 25.0], [500.0, 1000.0, 50.0], [1000.0, 1500.0, 50.0]])
    mA["hMSSM"] = construct_binning([[130.0, 200.0, 10.0], [200.0, 500.0, 25.0], [500.0, 1000.0, 50.0], [1000.0, 1500.0, 50.0]])

    brDict = {
        "hW"   : {"label" : r"H^{+} #rightarrow hW^{+}"               , "color" : colourList[0], "style" : styleList[0]},
        "AW"   : {"label" : r"H^{+} #rightarrow AW^{+}"               , "color" : colourList[1], "style" : styleList[1]},
        "tb"   : {"label" : r"H^{+} #rightarrow t#bar{b}"             , "color" : colourList[2], "style" : styleList[2]},
        "taunu": {"label" : r"H^{+} #rightarrow #tau^{+}^{}#nu_{#tau}", "color" : colourList[3], "style" : styleList[3]},
        "munu" : {"label" : r"H^{+} #rightarrow #mu^{+}^{}#nu_{#mu}"  , "color" : colourList[4], "style" : styleList[4]},
        "ts"   : {"label" : r"H^{+} #rightarrow t#bar{s}"             , "color" : colourList[5], "style" : styleList[5]},
        "cb"   : {"label" : r"H^{+} #rightarrow c#bar{b}"             , "color" : colourList[6], "style" : styleList[6]},
        "cs"   : {"label" : r"H^{+} #rightarrow c#bar{s}"             , "color" : colourList[7], "style" : styleList[7]},
        "us"   : {"label" : r"H^{+} #rightarrow u#bar{s}"             , "color" : colourList[8], "style" : styleList[8]},
        "SUSY" : {"label" : r"H^{+} #rightarrow SUSY"                 , "color" : colourList[9], "style" : styleList[9]},
        #"HW"   : {"label" : r"H^{+} #rightarrow HW^{+}"               , "color" : colourList[0], "style" : styleList[2]},
        #"enu"  : {"label" : r""                                       , "color" : 1, "style" : 3},
        #"td"   : {"label" : r""                                       , "color" : 1, "style" : 3},
        #"cd"   : {"label" : r""                                       , "color" : 1, "style" : 3},
        #"ub"   : {"label" : r""                                       , "color" : 1, "style" : 3},
        #"ud"   : {"label" : r""                                       , "color" : 1, "style" : 3},
    }

    align   = "{:>10} {:^25} {:<25}"
    
    # For-loop: All scenarios
    for i, scenario in enumerate(fileDict, 1):
        mHp      = fileDict[scenario].Get("m_Hp")
        minBR    = opts.yMin
        brhists  = {}
        brvalues = {}
        brgraphs = {}
        iSkip    = 0
        
        # For-loop: All tanBeta values
        for j, tanb in enumerate(opts.tanbetaList, 1):
            mHpvalues  = np.array([mHp.Interpolate(mAval, tanb) for mAval in mA[scenario]])
            if opts.xMax <= 200.0:
                legend = R.TLegend(0.20, 0.63, 0.35, 0.93)
            else:
                legend = R.TLegend(0.8, 0.60, 0.95, 0.88) #0.93)
            legend.SetFillColor(R.kWhite) #R.kRed)
            legend.SetTextSize(0.045)
            if 0:
                legend.SetFillStyle(0)
            else:
                legend.SetFillStyle(3001)
            #legend.SetHeader("Decay channel X") ##bf{#it{#Beta}}")

            # For-loop: All BRs
            for k, br in enumerate(brDict, 1):
                msg = align.format(scenario, "tan(beta) = %.1f" % (tanb), "BR(H+ -> %s)" % (br))
                Print(msg, k==1)

                brhists[br]  = fileDict[scenario].Get("br_Hp_%s" % br)
                brvalues[br] = np.array([brhists[br].Interpolate(mAval, tanb) for mAval in mA[scenario]])

                # Check that all BR values are above a threshold minimum value
                if np.all(brvalues[br] <= minBR):
                    msg = "WARNING! %s is below %s => removing" % (br, minBR)
                    Verbose(msg, i*k*j==1)
                    iSkip+=1
                    continue
                
                if opts.verbose:
                    msg = "{:>25} {:<25} {:<25}".format(scenario, "tan(beta) = %.1f" % (tanb), "BR(H+ -> %s)" % (br))
                    for i, m in enumerate(mHpvalues, 0):
                        msg = align.format("m = %.1f GeV" % (mHpvalues[i]), "", "BR(H+->%s) = %.5f" % (br, brvalues[br][i]))
                        Print(msg)

                brgraphs[br] = R.TGraph(len(mHpvalues), mHpvalues, brvalues[br])
                brgraphs[br].SetLineColor(brDict[br]["color"])
                brgraphs[br].SetLineStyle(brDict[br]["style"])
                if brDict[br]["style"] == R.kSolid:
                    brgraphs[br].SetLineWidth(3)
                else:
                    brgraphs[br].SetLineWidth(4)
                brgraphs[br].SetMaximum(opts.yMax)
                brgraphs[br].SetMinimum(minBR)
                # brgraphs[br].GetXaxis().SetLimits(int(min(mHpvalues)/10.0)*opts.xMin, opts.xMax)
                # brgraphs[br].GetXaxis().SetLimits(int(min(mHpvalues)/10.0)*opts.xMin, opts.xMax*(2.3 if scenario == "mh125" else 1.1))
                brgraphs[br].GetXaxis().SetLimits(opts.xMin, opts.xMax)
                brgraphs[br].GetXaxis().SetNoExponent()
                brgraphs[br].GetXaxis().SetMoreLogLabels()
                #brgraphs[br].GetXaxis().SetTitle("m_{H^{+}} [GeV]")
                brgraphs[br].GetXaxis().SetTitle("m_{H^{+}} (GeV)")
                brgraphs[br].GetXaxis().SetTitleSize(0.06)
                brgraphs[br].GetXaxis().SetTitleOffset(0.8)
                brgraphs[br].GetYaxis().SetTitleSize(0.06)
                #brgraphs[br].GetYaxis().SetTitle("B(H^{+} #rightarrow X)")
                brgraphs[br].GetYaxis().SetTitle("#bf{#it{#Beta}}(%s)" % "H^{+} #rightarrow X")
                brgraphs[br].GetYaxis().SetTitleOffset(1.2)
                if 0:
                    legend.AddEntry(brgraphs[br], brDict[br]["label"], "l")
                else:
                    legend.AddEntry(brgraphs[br], brDict[br]["label"].replace("H^{+} #rightarrow", ""), "l")
                if k == 1:
                    brgraphs[br].Draw("ac")
                else:
                    brgraphs[br].Draw("c same")

            if len(brgraphs) < 1:
                Print("WARNING! Found '%d' non-zero graphs for this setting (scenario=%s, tanb=%.2f). Skipping canvas creation." % (len(brgraphs), scenario, tanb), True)
                continue

            # Draw the legend
            nEntries = len(legend.GetListOfPrimitives())
            if nEntries > 5:
                dy = 0.05*(nEntries-5)
                legend.SetY1(legend.GetY1()-dy)
            legend.Draw()
            if 1:
                C.SetLogx(opts.logX)
                C.SetLogy(opts.logY)
    
            textleft = R.TLatex()
            textleft.SetNDC()
            textleft.SetTextAngle(0)
            textleft.SetTextColor(R.kBlack)
    
            textleft.SetTextFont(62)
            textleft.SetTextAlign(11)
            textleft.SetTextSize(0.04)
            textleft.SetTextFont(42)
            tanbString = "?"
            if tanb >= 10.0:
                tanbString = str(int(tanb))
            else:
                tanbString = "%.1f"% (tanb)
            textleft.DrawLatex(0.16,0.955, "tan#beta = %s " % (tanbString) )
            textleft.SetTextFont(52)
            textleft.SetTextSize(0.03)
            textleft.DrawLatex(0.02,0.02,"inputs provided by LHCHXSWG")
            textleft.SetTextSize(0.04)
            textleft.SetTextFont(42)
            textleft.SetTextAlign(31)
            textleft.DrawLatex(0.96,0.955,labelDict[scenario])
    
            # For-loop: All save formats
            C.RedrawAxis()            
            for l, ext in enumerate(opts.saveFormats, 1):
                #saveName = "%s_brs_tanb%s" % (scenario, str(int(tanb)))
                saveName = "%s_brs_tanb%s" % (scenario, tanbString.replace(".", "p"))
                saveName+= ext
                savePath = os.path.join(opts.saveDir, saveName)
                C.Print(savePath)
                C.SaveAs(savePath)
                Verbose("Saving %s" % (savePath), False)
            C.Clear()        

    # For-loop: All scenarios
    for iSc, scenario in enumerate(fileDict, 1):
        mHp      = fileDict[scenario].Get("m_Hp")
        brhists  = {}
        brvalues = {}
        brgraphs = {}
        mHpvalues = np.array([mHp.Interpolate(mAval, tanb) for mAval in mA[scenario]])

        # For-loop: 
        for iBR, br in enumerate(brDict.keys(), 1):
            if opts.xMax <= 200.0:
                #legend = R.TLegend(0.20, 0.63, 0.45, 0.93)
                legend = R.TLegend(0.20, 0.63, 0.35, 0.88)
            else:
                legend = R.TLegend(0.8, 0.60, 0.95, 0.88) #0.93)
            legend.SetFillColor(R.kWhite)
            legend.SetTextSize(0.045)
            if 0:
                legend.SetFillStyle(0)
            else:
                legend.SetFillStyle(3001)
            legend.SetHeader("tan#beta")# value")
            brhists[br]  = fileDict[scenario].Get("br_Hp_%s"%br)
            brvalues[br] = {}
            brgraphs[br] = {}
            #begin = 0

            # For-loop: All tanbeta values
            for k, tanb in enumerate(opts.tanbetaList, 1):
                #if (scenario == "hMSSM" and br in ["taunu", "tb"] and tanb <= 1.0):
                #    if begin == k:
                #        begin += 1
                #    continue
                    
                brvalues[br][tanb] = np.array([brhists[br].Interpolate(mAval, tanb) for mAval in mA[scenario]])
                brgraphs[br][tanb] = R.TGraph(len(mHpvalues), mHpvalues, brvalues[br][tanb])
                brgraphs[br][tanb].SetLineColor(colourList[k-1])
                brgraphs[br][tanb].SetLineStyle(styleList[k-1])
                if brDict[br]["style"] == R.kSolid:
                    brgraphs[br][tanb].SetLineWidth(3)
                else:
                    brgraphs[br][tanb].SetLineWidth(4)

                # Set y-axis min and max
                #brgraphs[br][tanb].SetMinimum(opts.yMin)
                #brgraphs[br][tanb].SetMaximum(opts.yMax)
                brgraphs[br][tanb].SetMinimum(0.0)
                brgraphs[br][tanb].SetMaximum(1.01)
                
                # brgraphs[br][tanb].GetXaxis().SetLimits(int(min(mHpvalues)/10.0)*10.0, int(max(mHpvalues)/100.0)*101.0)
                brgraphs[br][tanb].GetXaxis().SetLimits(opts.xMin, opts.xMax)
                brgraphs[br][tanb].GetXaxis().SetNoExponent()
                brgraphs[br][tanb].GetXaxis().SetMoreLogLabels()
                #brgraphs[br][tanb].GetXaxis().SetTitle("m_{H^{+}} [GeV]")
                brgraphs[br][tanb].GetXaxis().SetTitle("m_{H^{+}} (GeV)")
                brgraphs[br][tanb].GetXaxis().SetTitleSize(0.06)
                brgraphs[br][tanb].GetXaxis().SetTitleOffset(0.8)
                brgraphs[br][tanb].GetYaxis().SetTitleSize(0.06)
                brgraphs[br][tanb].GetYaxis().SetTitle("#bf{#it{#Beta}}(%s)" % brDict[br]["label"])
                brgraphs[br][tanb].GetYaxis().SetTitleOffset(1.2)
                tanblabel = str(int(tanb)) if tanb >= 1.0 else str(tanb)
                if 0:
                    legend.AddEntry(brgraphs[br][tanb], "tan#beta = %s" % tanblabel, "l")
                else:
                    legend.AddEntry(brgraphs[br][tanb], "%s" % tanblabel, "l")
                if k == 1:
                    brgraphs[br][tanb].Draw("ac")
                else:
                    brgraphs[br][tanb].Draw("c same")
            
            # Draw the legend
            nEntries = len(legend.GetListOfPrimitives())
            if nEntries > 5:
                dy = 0.05*(nEntries-5)
                legend.SetY1(legend.GetY1()-dy)
            legend.Draw()
            C.SetLogx(opts.logX)
            C.SetLogy(0) #opts.logY)
            
            textleft = R.TLatex()
            textleft.SetNDC()
            textleft.SetTextAngle(0)
            textleft.SetTextColor(R.kBlack)
            
            textleft.SetTextFont(62)
            textleft.SetTextAlign(11)
            textleft.SetTextFont(52)
            textleft.SetTextSize(0.03)
            textleft.DrawLatex(0.02,0.02,"inputs provided by LHCHXSWG")
            textleft.SetTextSize(0.04)
            textleft.SetTextFont(42)
            textleft.SetTextAlign(31)
            textleft.DrawLatex(0.96,0.955,labelDict[scenario])
            
            # For-loop: All save formats
            C.RedrawAxis()            
            for l, ext in enumerate(opts.saveFormats, 1):
                saveName = "%s_br_%s" % (scenario, br)
                saveName+= ext
                savePath = os.path.join(opts.saveDir, saveName)
                C.Print(savePath)
                C.SaveAs(savePath)
                if l==1:
                    Print("Saving %s" % (savePath.split(ext)[0]), iSc==1 and iBR==1)
            C.Clear()        
    return

if __name__ == "__main__":
    '''
    https://docs.python.org/3/library/argparse.html

    name or flags...: Either a name or a list of option strings, e.g. foo or -f, --foo.
    action..........: The basic type of action to be taken when this argument is encountered at the command line.
    nargs...........: The number of command-line arguments that should be consumed.
    const...........: A constant value required by some action and nargs selections.
    default.........: The value produced if the argument is absent from the command line.
    type............: The type to which the command-line argument should be converted.
    choices.........: A container of the allowable values for the argument.
    required........: Whether or not the command-line option may be omitted (optionals only).
    help............: A brief description of what the argument does.
    metavar.........: A name for the argument in usage messages.
    dest............: The name of the attribute to be added to the object returned by parse_args().
    '''

    # Default values
    VERBOSE      = False
    XMIN         = 10
    XMAX         = 8000
    YMIN         = 1e-4
    YMAX         = 1.2e0
    GRIDX        = False
    GRIDY        = False
    LOGX         = False
    LOGY         = False
    BATCHMODE    = True
    ENERGY       = 13
    SCENARIO     = None #"hMSSM,mh125,mh125_align"
    SAVEFORMATS  =  "pdf,png" #,C"
    TANBETAS     =  "1.0,3.0,5.0,20,10.0,30.0"
    SAVEDIR      = None
    
    # Define the available script options
    parser = OptionParser(usage="Usage: %prog [options]")

    parser.add_option("-v", "--verbose", dest="verbose", action="store_true", default=VERBOSE,
                      help = "Enables verbose mode (for debugging purposes) [default: %s]" % VERBOSE)
    
    parser.add_option("--xMin", dest="xMin", default=XMIN, type="float",
                      help="Overwrite minimum value of x-axis [default: %s]" % (XMIN) )

    parser.add_option("--xMax", dest="xMax", default=XMAX, type="float",
                      help="Overwrite maximum value of x-axis [default: %s]" % (XMAX) )

    parser.add_option("--yMin", dest="yMin", default=YMIN, type="float",
                      help="Overwrite minimum value of y-axis [default: %s]" % (YMIN) )

    parser.add_option("--energy", dest="energy", default=YMAX, type="int",
                      help="Collision energy in TeV [default: %s]" % (ENERGY) )

    parser.add_option("--scenario", dest="scenario", default=SCENARIO, type="string",
                      help="MSSM benchmark scenarios (comma-separated) to use [default: %s]" % (SCENARIO) )

    parser.add_option("--yMax", dest="yMax", default=YMAX, type="float",
                      help="Overwrite maximum value of y-axis [default: %s]" % (YMAX) )

    parser.add_option("--gridX", dest="gridX", default=GRIDX, action="store_true",
                      help="Enable the grid for the x-axis [default: %s]" % (GRIDX) )

    parser.add_option("--gridY", dest="gridY", default=GRIDY, action="store_true",
                      help="Enable the grid for the y-axis [default: %s]" % (GRIDY) )

    parser.add_option("--logX", dest="logX", action="store_true", default=LOGX,
                      help="Plot x-axis (mass) as logarithmic [default: %s]" % (LOGX) )
    
    parser.add_option("--logY", dest="logY", action="store_true", default=LOGY,
                      help="Plot y-axis (exlusion limit) as logarithmic [default: %s]" % (LOGY) )

    parser.add_option("-b", "--batchMode", dest="batchMode", action="store_false", default=BATCHMODE,
                      help="Enables batch mode (canvas creation does NOT generate a window) [default: %s]" % BATCHMODE)
    
    parser.add_option("-s", "--saveFormats", dest="formats", default = SAVEFORMATS,
                      help="Save formats for all plots [default: %s]" % SAVEFORMATS)
    
    parser.add_option("--tanbeta", dest="tanbeta", default = TANBETAS,
                      help="List of tan(beta) values provided as a comma-separated floats [default: %s]" % TANBETAS)
    
    parser.add_option("--saveDir", dest="saveDir", default = SAVEDIR,
                      help="The directory to save all the plots [default: %s]" % SAVEDIR)

    (opts, parseArgs) = parser.parse_args()
    

    # Require at least two arguments (script-name, path to multicrab)   
    if len(sys.argv) < 2:
        parser.print_help()
        sys.exit(1)

    # Sanity check: MSSM scenario
    scList = ["hMSSM", "mh125", "mh125_lc", "mh125_ls", "mh125_align", "mHH125_align", "mHH125_CPV", "mh125_muneg_1", "mh125_muneg_2", "mh125_muneg_3"]    
    if opts.scenario == None:
        opts.scenarioList = ["hMSSM", "mh125", "mh125_align"]
    else:
        if "," in opts.scenario:
            opts.scenarioList = opts.scenario.split(",")
        else:
            opts.scenarioList = scList #[opts.scenario]
    for sc in opts.scenarioList:
        if sc not in scList:
            raise Exception("Unsupported MSSM benchmark scenario %s. Please select from:\n\t%s" % (opts.scenario, "\n\t".join(scList)) )
    
    # Sanity check: Energy
    eList = [8, 13, 14]
    if opts.energy not in eList:
        raise Exception("Unsupported collision energy %d TeV. Please select from: %s" % (opts.energy, eList))
        
    # Create save formats
    if "," in opts.formats:
        opts.saveFormats = opts.formats.split(",")
    else:
        opts.saveFormats = [opts.formats]
    opts.saveFormats = ["." + s for s in opts.saveFormats]


    # Create tan(beta) list
    if "," in opts.tanbeta:
        opts.tanbetaList = opts.tanbeta.split(",")
    else:
        opts.tanbetaList = [opts.tanbeta]
    opts.tanbetaList = [float(x) for x in opts.tanbetaList]

    # Configure save directory
    if opts.saveDir == None:
        opts.saveDir = os.getcwd()
    else:
        if not os.path.isdir(opts.saveDir):
            os.system("mkdir -p %s" % opts.saveDir)
        else:
            pass
        
    # Call the main function
    main(opts)

    if not opts.batchMode:
        input("=== plotbrs.py: Press any key to quit ROOT ...")
