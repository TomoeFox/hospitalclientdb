//---------------------------------------------------------------------------
#include <String.h>
#include <StrUtils.hpp>
#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;


//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner): TForm(Owner)
{
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
Label11->Font->Color=clRed;
}
//---------------------------------------------------------------------------



void __fastcall TForm3::ADOConnection1AfterConnect(TObject *Sender)
{
Label11->Font->Color=clGreen;
ShowMessage("Подключенно");
Button1->Caption = "Отключение";
}
//---------------------------------------------------------------------------


void __fastcall TForm3::ADOConnection1AfterDisconnect(TObject *Sender)
{
Label11->Font->Color=clRed;
ShowMessage("Отключенно");
  Button1->Caption = "Подключение";
  Button8->Caption = "Показать все";
}
//---------------------------------------------------------------------------


void __fastcall TForm3::FormClose(TObject *Sender, TCloseAction &Action)
{
  ADOConnection1->Close();
}
//---------------------------------------------------------------------------



void __fastcall TForm3::Button3Click(TObject *Sender)
{
/*ADOQuery1->Close();
ADOQuery1->SQL->Text="DELETE FROM hosp.patients WHERE DocName LIKE :par0 AND PatName LIKE :par1 AND  Year LIKE :par2 AND Address LIKE :par3;";
ADOQuery1->Parameters->ParamByName("par0")->Value=Edit1->Text;
ADOQuery1->Parameters->ParamByName("par1")->Value=Edit2->Text;
ADOQuery1->Parameters->ParamByName("par2")->Value=Edit3->Text;
ADOQuery1->Parameters->ParamByName("par3")->Value=Edit4->Text;
ADOQuery1->ExecSQL();        */
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button2Click(TObject *Sender)
{
/*ADOQuery1->Close();
ADOQuery1->SQL->Text="INSERT INTO hosp.patients (DocName,PatName,Year,Address) VALUES(:par0,:par1,:par2,:par3);";
ADOQuery1->Parameters->ParamByName("par0")->Value=Edit1->Text;
ADOQuery1->Parameters->ParamByName("par1")->Value=Edit2->Text;
ADOQuery1->Parameters->ParamByName("par2")->Value=Edit3->Text;
ADOQuery1->Parameters->ParamByName("par3")->Value=Edit4->Text;
ADOQuery1->ExecSQL();    */
}
//---------------------------------------------------------------------------
















void __fastcall TForm3::Button8Click(TObject *Sender)
{
ADOQuery1->Close();
ADOQuery1->SQL->Text="SELECT * FROM hosp.patients;";
ADOQuery1->ExecSQL();
ADOQuery1->Open();
  Button8->Caption="Обновить";
}
//---------------------------------------------------------------------------


void __fastcall TForm3::Button4Click(TObject *Sender)
{
//ADOQuery1->Parameters->ParamByName("par0")->Value=Edit1->Text; //Фамилия врача
//ADOQuery1->Parameters->ParamByName("par1")->Value=Edit2->Text;   //Пациента Ф.И.О.
//ADOQuery1->Parameters->ParamByName("par2")->Value=Edit3->Text;   //год
//ADOQuery1->Parameters->ParamByName("par3")->Value=Edit4->Text; //адресс
/*
ADOQuery1->Close();
if ((Edit4->Text.IsEmpty()==true || Edit4->Text == " ") && (Edit3->Text.IsEmpty()==false && Edit3->Text != " ")) {
 ADOQuery1->SQL->Text="SELECT * FROM hosp.patients WHERE PatName LIKE \"%"+Edit2->Text+"%\" AND Year = "+Edit3->Text.ToInt()+";";
 ADOQuery1->Open();
}
if ((Edit3->Text.IsEmpty()==true || Edit3->Text == " ") && (Edit4->Text.IsEmpty()==false && Edit4->Text != " ")) {
	ADOQuery1->SQL->Text="SELECT * FROM hosp.patients WHERE PatName LIKE \"%"+Edit2->Text+"%\" AND Address LIKE \"%"+Edit4->Text+"%\" ;";
 ADOQuery1->Open();
	 }
if ((Edit4->Text.IsEmpty()==true || Edit4->Text== " ") && (Edit3->Text.IsEmpty()==true || Edit3->Text== " ")) {
	ADOQuery1->SQL->Text="SELECT * FROM hosp.patients WHERE PatName LIKE \"%"+Edit2->Text+"%\";";
 ADOQuery1->Open();
		  }
if  (Edit4->Text.IsEmpty()==false && Edit4->Text != " " && Edit3->Text.IsEmpty()==false && Edit3->Text != " "){
ADOQuery1->SQL->Text="SELECT * FROM hosp.patients WHERE PatName LIKE \"%"+Edit2->Text+"%\" AND Address LIKE \"%"+Edit4->Text+"%\"  AND Year = "+Edit3->Text+";";
 ADOQuery1->Open();

 }   */
}
//---------------------------------------------------------------------------


void __fastcall TForm3::Button1Click(TObject *Sender)
{
if (Button1->Caption=="Подключение") {
ADOConnection1->Open();
Button1->Caption=="Отключение";
}
else if (Button1->Caption=="Отключение") {
  ADOConnection1->Close();
Button1->Caption="Подключение";
	 }
}
//---------------------------------------------------------------------------

