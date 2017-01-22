import sys, os
import ROOT as r

print "Processing Jared's rootlogon.py"

homedir = os.getenv("HOME");
root_setup_path = "%s/.root.d/cms-macros/python"%(homedir)
sys.path.append(root_setup_path)

import tdrstyle
# # from cms-macros.python import tdrstyle
# tdrstyle = __import__('tdrstyle')
tdrstyle.setTDRStyle()

# Set up FW Lite for automatic loading of CMS libraries
# and data formats.   As you may have other user-defined setup
# in your rootlogon.C, the CMS setup is executed only if the CMS
# environment is set up.
#
cmsswbase = os.getenv("CMSSW_BASE");
if (cmsswbase):
   print cmsswbase
   #
   # The CMSSW environment is defined (this is true even for FW Lite)
   # so set up the rest.
   #
   print "Loading FW Lite setup."

   # load FWLite C++ libraries
   r.gSystem.Load("libFWCoreFWLite.so");
   r.gSystem.Load("libRFIO.so");
   # r.AutoLibraryLoader.enable()  ## for CMSSW_7_4_X and earlier
   r.FWLiteEnabler.enable()
   r.gSystem.Load("libDataFormatsFWLite.so");
   r.gSystem.Load("libDataFormatsPatCandidates.so");
   #gROOT.ProcessLine("namespace edm {typedef edm::Wrapper<vector<float> > Wrapper<vector<float,allocator<float> > >; }");
   #gROOT.ProcessLine("namespace edm {typedef edm::Wrapper<vector<double> > Wrapper<vector<double,allocator<double> > >; }");
   r.gROOT.SetStyle("tdrStyle")
   pass

# r.gApplication.ExecuteFile("~/.rootlogon.C")
