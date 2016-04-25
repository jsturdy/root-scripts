import ROOT as r
print "Processing Jared's rootlogon.py"
# Set up FW Lite for automatic loading of CMS libraries
# and data formats.   As you may have other user-defined setup
# in your rootlogon.C, the CMS setup is executed only if the CMS
# environment is set up.
#
#cmsswbase = os.system.getenv("CMSSW_BASE");
#print cmsswbase
#if (cmsswbase.len() > 0) {
#    #
#    # The CMSSW environment is defined (this is true even for FW Lite)
#    # so set up the rest.
#    #
#    print "Loading FW Lite setup."
#    gSystem->Load("libFWCoreFWLite.so")
#    gSystem->Load("libRFIO.so")
#    FWLiteEnabler::enable()
#    #AutoLibraryLoader::enable();
#    gSystem.Load("libDataFormatsFWLite.so")
#    gSystem.Load("libDataFormatsPatCandidates.so")
#    #gROOT->ProcessLine("namespace edm {typedef edm::Wrapper<vector<float> > Wrapper<vector<float,allocator<float> > >; }");
#    #gROOT->ProcessLine("namespace edm {typedef edm::Wrapper<vector<double> > Wrapper<vector<double,allocator<double> > >; }");
#    pass
#root_setup_path = "~/.root.d/cms-macros/python"
#print "adding %s to sys.path"%(root_setup_path)
#sys.path.append(root_setup_path)
#setTDRStyle()
r.gApplication.ExecuteFile("~/rootlogon.C")
