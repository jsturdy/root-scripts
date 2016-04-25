//#include "~/.root.d/cms-macros/src/tdrstyle.C"
//#include "~/.root.d/cms-macros/src/babarStyle.C"
//#include "~/.root.d/cms-macros/src/mikesStyle.C"
//#include "~/.root.d/cms-macros/src/palettes.C"
void rootlogon() {
  std::cout << std::endl << "Welcome to Jared's rootlogon.C" << std::endl;

  /**CMS TDR style**/
  std::cout << "For CMS approved plots use: gROOT->SetStyle(\"tdrStyle\");"
  	    << std::endl << std::endl;
  gROOT->ProcessLine(".L ~/.root.d/cms-macros/src/tdrstyle.C");
  
  std::cout << "For CMS approved plots with quoted lumi use: CMS_lumi(pad, period, posX);"
  	    << std::endl << std::endl;
  gROOT->ProcessLine(".L ~/.root.d/cms-macros/src/CMS_lumi.C");
  
  /**BaBar style**/
  std::cout << "For BaBaR plots use: gROOT->SetStyle(\"babarStyle\");"
  	    << std::endl << std::endl;
  gROOT->ProcessLine(".L ~/.root.d/cms-macros/src/babarStyle.C");
  
  /**Mike's style**/
  std::cout << "For Mike style plots use: gROOT->SetStyle(\"mikesStyle\");"
  	    << std::endl << std::endl;
  gROOT->ProcessLine(".L ~/.root.d/cms-macros/src/mikesStyle.C");
  
  /**Stylish palettes**/
  std::cout << "Defining custom palettes Pal1, Pal2, Pal3 ;"
  	    << std::endl << std::endl;
  gROOT->ProcessLine(".L ~/.root.d/cms-macros/src/palettes.C");

  // Set up FW Lite for automatic loading of CMS libraries
  // and data formats.   As you may have other user-defined setup
  // in your rootlogon.C, the CMS setup is executed only if the CMS
  // environment is set up.
  //
  TString cmsswbase = getenv("CMSSW_BASE");
  std::cout << "CMSSW_BASE = " << cmsswbase;
  if (cmsswbase.Length() > 0) {
    std::cout << " " << cmsswbase.Length() << std::endl;
    //
    // The CMSSW environment is defined (this is true even for FW Lite)
    // so set up the rest.
    //
    std::cout << "Loading FW Lite setup." << std::endl;
    gSystem->Load("libFWCoreFWLite.so");
    gSystem->Load("libRFIO.so");
    FWLiteEnabler::enable();
    gSystem->Load("libDataFormatsFWLite.so");
    gSystem->Load("libDataFormatsPatCandidates.so");
  }
  std::cout << std::endl
  setTDRStyle();
}
