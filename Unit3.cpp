//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "Unit1.h"
#include "Unit2.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
TForm2 *Form2;
TForm1 *Form1;
Select *slt;
Insert *ist;
Delete *dlt;
Update *udt;
DBaction *act;
Doc *doc;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------}
//---------------------------------------------------------------------------








void __fastcall TForm3::FormShow(TObject *Sender)
{
ADOQuery1->Close();
ADOQuery1->SQL->Text="Select * from hosp.doctors";
ADOQuery1->Open();
}
//---------------------------------------------------------------------------


