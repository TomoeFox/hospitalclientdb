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
ADOQuery1->Close();
//ADOQuery1->Parameters->ParamByName("par0")->Value=Edit1->Text; //������� �����
//ADOQuery1->Parameters->ParamByName("par1")->Value=Edit2->Text;   //�������� �.�.�.
//ADOQuery1->Parameters->ParamByName("par2")->Value=Edit3->Text;   //���
//ADOQuery1->Parameters->ParamByName("par3")->Value=Edit4->Text; //������ */
if (Edit1->Text.IsEmpty()==true || Edit1->Text == " " || Edit1->Text == " ") {
ADOQuery1->SQL->Text="select * from hosp.patients WHERE Year =:par2 AND PatName =:par1 AND Address =:par3;";
ADOQuery1->Parameters->ParamByName("par1")->Value=Edit2->Text;
ADOQuery1->Parameters->ParamByName("par2")->Value=Edit3->Text;
ADOQuery1->Parameters->ParamByName("par3")->Value=Edit4->Text;
 ADOQuery1->ExecSQL();
ADOQuery1->Open();
}
else if (Edit2->Text.IsEmpty()==true || Edit2->Text == " " || Edit2->Text == " ") {

 ADOQuery1->SQL->Text="select * from hosp.patients WHERE DocName = :par0 AND Address = :par3 AND Year = :par2;";
ADOQuery1->Parameters->ParamByName("par0")->Value=Edit1->Text;
ADOQuery1->Parameters->ParamByName("par2")->Value=Edit3->Text;
ADOQuery1->Parameters->ParamByName("par3")->Value=Edit4->Text;

 ADOQuery1->ExecSQL();
 ADOQuery1->Open();
}
else if (Edit3->Text.IsEmpty()==true || Edit3->Text == " " || Edit3->Text == " ") {

 ADOQuery1->SQL->Text="select * from hosp.patients WHERE DocName = :par0 AND Address = :par3 AND PatName = :par1;";
 ADOQuery1->Parameters->ParamByName("par0")->Value=Edit1->Text;
ADOQuery1->Parameters->ParamByName("par1")->Value=Edit2->Text;
ADOQuery1->Parameters->ParamByName("par3")->Value=Edit4->Text;
 ADOQuery1->ExecSQL();
 ADOQuery1->Open();
}
else {

ADOQuery1->SQL->Text="select * from hosp.patients WHERE DocName = :par0 AND Address = :par3 AND PatName = :par1 AND Year = :par2;";
ADOQuery1->Parameters->ParamByName("par0")->Value=Edit1->Text;
ADOQuery1->Parameters->ParamByName("par1")->Value=Edit2->Text;
ADOQuery1->Parameters->ParamByName("par2")->Value=Edit3->Text;
ADOQuery1->Parameters->ParamByName("par3")->Value=Edit4->Text;
ADOQuery1->ExecSQL();
ADOQuery1->Open();
}
ADOQuery1->ExecSQL();
ADOQuery1->Open();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::FormCreate(TObject *Sender)
{
Label4->Hide();
Label5->Hide();
Label3->Hide();
Label8->Hide();
Edit1->Hide();
Edit2->Hide();
Edit3->Hide();
Edit4->Hide();
Label9->Font->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button4Click(TObject *Sender)
{
  if(Button4->Caption == "�������� �����"){
  Label3->Show();
Label4->Show();
Label5->Show();
Label8->Show();
Edit1->Show();
Edit2->Show();
Edit3->Show();
Edit4->Show();
Button4->Caption = "������ �����" ;
 }
 else if (Button4->Caption == "������ �����") {
Label4->Hide();
Label5->Hide();
Label3->Hide();
Label8->Hide();
Edit1->Hide();
Edit2->Hide();
Edit3->Hide();
Edit4->Hide();
Button4->Caption = "�������� �����";
	  }
}
//---------------------------------------------------------------------------


void __fastcall TForm3::ADOConnection1AfterConnect(TObject *Sender)
{
Label9->Font->Color=clGreen;
ShowMessage("�����������");
Button5->Caption = "����������";
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button5Click(TObject *Sender)
{
if(Button5->Caption == "�����������") {
ADOConnection1->Open();
Button5->Caption = "����������" ;
}
else if (Button5->Caption == "����������") {
  ADOConnection1->Close();
  Button5->Caption = "�����������";
	 }
}
//---------------------------------------------------------------------------

void __fastcall TForm3::ADOConnection1AfterDisconnect(TObject *Sender)
{
Label9->Font->Color=clRed;
ShowMessage("����������");
  Button5->Caption = "�����������";
}
//---------------------------------------------------------------------------


void __fastcall TForm3::FormClose(TObject *Sender, TCloseAction &Action)
{
  ADOConnection1->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button6Click(TObject *Sender)
{
ADOQuery1->Close();
ADOQuery1->SQL->Text="SELECT * FROM hosp.patients;";
ADOQuery1->ExecSQL();
ADOQuery1->Open();
}
//---------------------------------------------------------------------------

