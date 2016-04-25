void Pal1()
{
   static Int_t  colors[50];
   static Bool_t initialized = kFALSE;

   Double_t Red[3]    = { 1.00, 0.00, 0.00};
   Double_t Green[3]  = { 0.00, 1.00, 0.00};
   Double_t Blue[3]   = { 1.00, 0.00, 1.00};
   Double_t Length[3] = { 0.00, 0.50, 1.00 };

   if(!initialized){
   Int_t FI = TColor::CreateGradientColorTable(3,Length,Red,Green,Blue,50);
   for (int i=0; i<50; i++) colors[i] = FI+i;
      initialized = kTRUE;
      return;
   }
   gStyle->SetPalette(50,colors);
}

void Pal2()
{
   static Int_t  colors[50];
   static Bool_t initialized = kFALSE;

   Double_t Red[3]    = { 1.00, 0.50, 0.00};
   Double_t Green[3]  = { 0.50, 0.00, 1.00};
   Double_t Blue[3]   = { 1.00, 0.00, 0.50};
   Double_t Length[3] = { 0.00, 0.50, 1.00 };

   if(!initialized){
   Int_t FI = TColor::CreateGradientColorTable(3,Length,Red,Green,Blue,50);
   for (int i=0; i<50; i++) colors[i] = FI+i;
      initialized = kTRUE;
      return;
   }
   gStyle->SetPalette(50,colors);
}

void Pal3()
{
    const Int_t NRGBs = 5;
    const Int_t NCont = 255;

    Double_t stops[NRGBs] = { 0.00, 0.34, 0.61, 0.84, 1.00 };
    Double_t red[NRGBs]   = { 0.00, 0.00, 0.87, 1.00, 0.51 };
    Double_t green[NRGBs] = { 0.00, 0.81, 1.00, 0.20, 0.00 };
    Double_t blue[NRGBs]  = { 0.51, 1.00, 0.12, 0.00, 0.00 };
    TColor::CreateGradientColorTable(NRGBs, stops, red, green, blue, NCont);
    gStyle->SetNumberContours(NCont);
}
