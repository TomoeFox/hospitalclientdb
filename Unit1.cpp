//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
Form1->Constraints->MaxHeight=135;
Form1->Constraints->MinHeight=135;
Form1->Constraints->MaxWidth=524;
Form1->Constraints->MinWidth=524;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
Button1->Hide();
Label1->Hide();
Label2->Hide();
Label3->Hide();
Edit1->Hide();
Edit2->Hide();
Edit3->Hide();
Button2->Show();
Form1->Constraints->MaxHeight=655;
Form1->Constraints->MinHeight=655;
Form1->Constraints->MaxWidth=761;
Form1->Constraints->MinWidth=761;
DBGrid1->Show();
DBGrid1->Constraints->MaxHeight=590;
DBGrid1->Constraints->MinHeight=590;
DBGrid1->Constraints->MaxWidth=755;
DBGrid1->Constraints->MinWidth=755;

Form3->ADOQuery1->Close();
Form3->ADOQuery1->SQL->Text="SELECT * FROM hosp.patients";
//Form3->ADOQuery1->Parameters->ParamByName("par0")->Value = Edit1->Text;
//Form3->ADOQuery1->Parameters->ParamByName("par1")->Value = Edit2->Text;
//Form3->ADOQuery1->Parameters->ParamByName("par2")->Value = Edit3->Text;
Form3->ADOQuery1->ExecSQL();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
DBGrid1->Hide();
Button2->Hide();
}
//---------------------------------------------------------------------------
