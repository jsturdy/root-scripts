#include "TStyle.h"

void setupMikes() {
  /**http://www-hep.physics.wm.edu/~kordosky/rootlogon.C**/
  ////////////////////////////////////////////////////////////////////////
  //
  // Mike's very tasteful style.
  //
  ////////////////////////////////////////////////////////////////////////
  TStyle *mikesStyle= new TStyle("mikesStyle","Mike's very tasteful style");

  // Turn off some borders
  mikesStyle->SetCanvasBorderMode(0);
  mikesStyle->SetFrameBorderMode(0);
  mikesStyle->SetPadBorderMode(0);
  mikesStyle->SetDrawBorder(0);
  mikesStyle->SetCanvasBorderSize(0);
  mikesStyle->SetFrameBorderSize(0);
  mikesStyle->SetPadBorderSize(1);
  mikesStyle->SetTitleBorderSize(0);

  // Say it in black and white!
  mikesStyle->SetAxisColor(1, "xyz");
  mikesStyle->SetCanvasColor(0);
  mikesStyle->SetFrameFillColor(0);
  mikesStyle->SetFrameLineColor(1);
  mikesStyle->SetHistFillColor(0);
  mikesStyle->SetHistLineColor(1);
  //mikesStyle->SetPadColor(1);
  mikesStyle->SetPadColor(kWhite);
  mikesStyle->SetStatColor(0);
  mikesStyle->SetStatTextColor(1);
  mikesStyle->SetTitleColor(1);
  mikesStyle->SetTitleTextColor(1);
  mikesStyle->SetLabelColor(1,"xyz");
  // Show functions in red...
  mikesStyle->SetFuncColor(2);

  // Set the size of the default canvas
  // 600x500 looks almost square
  mikesStyle->SetCanvasDefH(500);
  mikesStyle->SetCanvasDefW(600);
  mikesStyle->SetCanvasDefX(10);
  mikesStyle->SetCanvasDefY(10);

  // Fonts:  I use Helvetica, upright, normal
  //         I sort of wish they had something like "HIGZ portable" of PAW
  int style_label_font=42;
  mikesStyle->SetLabelFont(style_label_font,"xyz");
  mikesStyle->SetLabelSize(0.045,"xyz");
  mikesStyle->SetLabelOffset(0.015,"xyz");
  mikesStyle->SetStatFont(style_label_font);
  mikesStyle->SetTitleFont(style_label_font,"xyz"); // axis titles
  mikesStyle->SetTitleFont(style_label_font,"h"); // histogram title
  mikesStyle->SetTitleSize(0.05,"xyz"); // axis titles
  mikesStyle->SetTitleSize(0.05,"h"); // histogram title
  mikesStyle->SetTitleOffset(1.1,"x");
  mikesStyle->SetTitleOffset(1.2,"y");
  mikesStyle->SetStripDecimals(kFALSE); // if we have 1.5 do not set 1.0 -> 1
  mikesStyle->SetTitleX(0.12); // spot where histogram title goes
  mikesStyle->SetTitleW(0.78); // width computed so that title is centered
  TGaxis::SetMaxDigits(2); // restrict the number of digits in labels

  // Set Line Widths
  mikesStyle->SetFrameLineWidth(2);
  mikesStyle->SetFuncWidth(2);
  mikesStyle->SetHistLineWidth(2);

  // Set all fill styles to be empty and line styles to be solid
  mikesStyle->SetFrameFillStyle(0);
  mikesStyle->SetHistFillStyle(1001);
  mikesStyle->SetFrameLineStyle(0);
  mikesStyle->SetHistLineStyle(0);
  mikesStyle->SetTitleStyle(0);
  mikesStyle->SetFuncStyle(1);

  // Set margins -- I like to shift the plot a little up and to the
  // right to make more room for axis labels
  mikesStyle->SetPadTopMargin(0.08);
  mikesStyle->SetPadBottomMargin(0.12);
  mikesStyle->SetPadLeftMargin(0.14);
  mikesStyle->SetPadRightMargin(0.1);

  // Set Data/Stat/... and other options
  mikesStyle->SetOptDate(0);
  mikesStyle->SetDateX(0.01);
  mikesStyle->SetDateY(0.01);
  mikesStyle->SetOptFile(0);
  mikesStyle->SetOptFit(111);
  mikesStyle->SetOptLogx(0);
  mikesStyle->SetOptLogy(0);
  mikesStyle->SetOptLogz(0);
  mikesStyle->SetOptStat(1110);// no histogram title
  mikesStyle->SetStatFormat("6.4f");
  mikesStyle->SetFitFormat("6.4f");
  mikesStyle->SetStatStyle(0); // hollow
  //mikesStyle->SetStatStyle(1001); // filled
  mikesStyle->SetStatBorderSize(0);
  mikesStyle->SetStatW(0.25);
  mikesStyle->SetStatH(0.125);
  //mikesStyle->SetStatX(0.90);
  //mikesStyle->SetStatY(0.90);
  mikesStyle->SetStatX(1.0-mikesStyle->GetPadRightMargin()-0.02);
  mikesStyle->SetStatY(1.0-mikesStyle->GetPadTopMargin()-0.02);
  mikesStyle->SetOptTitle(1);
  // Set tick marks and turn off grids
  //mikesStyle->SetNdivisions(1005,"xyz");
  mikesStyle->SetNdivisions(510,"xyz");
  mikesStyle->SetPadTickX(1);
  mikesStyle->SetPadTickY(1);
  mikesStyle->SetTickLength(0.02,"xyz");
  mikesStyle->SetPadGridX(0);
  mikesStyle->SetPadGridY(0);

  // no supressed zeroes!
  mikesStyle->SetHistMinimumZero(kTRUE);


  // Set paper size for life in the US
  //mikesStyle->SetPaperSize(TStyle::kUSLetter);
  // or europe
  mikesStyle->SetPaperSize(TStyle::kA4);

  // use a pretty palette for color plots
  mikesStyle->SetPalette(1,0);

  //mikesStyle->SetLabelColor(1,"xyz");
  // Force this style on all histograms
  //gROOT->ForceStyle();

  // load up uber libraries
  //gSystem->Load("libCalDetSI.so");
  //gSystem->Load("libUberDST.so");

  /////////////  root/loon version dependent compilation //////////////////////
  // this allows you to use multiple root versions on the same system
  // without libraries constantly being recompiled.
  //TString dirname = gROOT->GetVersion();
  //dirname.ReplaceAll(".","_");
  //dirname.ReplaceAll("/","_");
  //dirname.Append("_libs");
  //TString appname(gApplication->Argv(0));
  //if(appname.Contains("loon")){
  //  appname="loon";
  //}
  //else appname="root";
  //appname+="_";
  //dirname.Prepend(appname);
  //dirname.Prepend("/root_build/"); // base dir for compliled macros
  //dirname.Prepend(gSystem->Getenv("HOME"));
  //cout<<"Setting build directory to: "<<dirname<<endl;
  //gSystem->mkdir(dirname.Data(),true); // make dir if it doesn't exist
  //gSystem->SetBuildDir(dirname);

  ///////////////////////////////////////////////////////////////////////////////

  //gSystem->Load("libMinuit2.so");

  // make sure to include headers from my home area
  //gSystem->AddIncludePath("-I$HOME/macros");
  //gSystem->AddIncludePath("-I$HOME/base_macros");

  mikesStyle->SetPalette(1,0);
  /**http://www-hep.physics.wm.edu/~kordosky/rootlogon.C**/
}
