//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button1Click(TObject *Sender)
{
ADOConnection1->Open();
ADOQuery1->Close();
ADOQuery1->SQL->Text="select * from patients;";
ADOQuery1->ExecSQL();
ADOQuery1->Open();
}
//---------------------------------------------------------------------------

