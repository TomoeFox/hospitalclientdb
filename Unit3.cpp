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
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button1Click(TObject *Sender)
{
ADOQuery1->Close();
int space=0;
String FIO = (Edit2->Text);
char * DocName = Edit1->Text.t_str();

char * Year = Edit3->Text.t_str();
char * Address = Edit4->Text.t_str();
if (FIO.Pos(". ")!=0 || FIO.Pos(" . ")!=0 || FIO.Pos(" .")!=0) {
ShowMessage("Пробел между инициалами в строке Ф.И.О. пациента!");
int a = FIO.Pos(". ");
FIO.Delete(a+1,1);
ShowMessage(FIO);
}
else {

//ADOQuery1->Parameters->ParamByName("par0")->Value=Edit1->Text; //Фамилия врача
//ADOQuery1->Parameters->ParamByName("par1")->Value=Edit2->Text;   //Пациента Ф.И.О.
//ADOQuery1->Parameters->ParamByName("par2")->Value=Edit3->Text;   //год
//ADOQuery1->Parameters->ParamByName("par3")->Value=Edit4->Text; //адресс
if (Edit1->Text.IsEmpty()==true && Edit3->Text.IsEmpty()==true && Edit4->Text.IsEmpty()==true) {
 ADOQuery1->SQL->Text="SELECT * FROM hosp.patients WHERE PatName LIKE \"%"+Edit2->Text+"%\";";
 ADOQuery1->Open();
}
 }
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
  if(Button4->Caption == "Показать формы"){
  Label3->Show();
Label4->Show();
Label5->Show();
Label8->Show();
Edit1->Show();
Edit2->Show();
Edit3->Show();
Edit4->Show();
Button4->Caption = "Скрыть формы" ;
 }
 else if (Button4->Caption == "Скрыть формы") {
Label4->Hide();
Label5->Hide();
Label3->Hide();
Label8->Hide();
Edit1->Hide();
Edit2->Hide();
Edit3->Hide();
Edit4->Hide();
Button4->Caption = "Показать формы";
	  }
}
//---------------------------------------------------------------------------


void __fastcall TForm3::ADOConnection1AfterConnect(TObject *Sender)
{
Label9->Font->Color=clGreen;
ShowMessage("Подключенно");
Button5->Caption = "Отключение";
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button5Click(TObject *Sender)
{
if(Button5->Caption == "Подключение") {
ADOConnection1->Open();
ADOQuery1->SQL->Text="SET CHARACTER SET 'utf8'";
ADOQuery1->ExecSQL();
ADOQuery1->SQL->Text="SET SESSION collation_connection = 'utf8_general_ci'";
ADOQuery1->ExecSQL();
Button5->Caption = "Отключение" ;
}
else if (Button5->Caption == "Отключение") {
  ADOConnection1->Close();
  Button5->Caption = "Подключение";
	 }
}
//---------------------------------------------------------------------------

void __fastcall TForm3::ADOConnection1AfterDisconnect(TObject *Sender)
{
Label9->Font->Color=clRed;
ShowMessage("Отключенно");
  Button5->Caption = "Подключение";
  Button6->Caption = "Показать все";
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
  Button6->Caption="Обновить";
}
//---------------------------------------------------------------------------


void __fastcall TForm3::Button3Click(TObject *Sender)
{
ADOQuery1->Close();
ADOQuery1->SQL->Text="DELETE FROM hosp.patients WHERE DocName LIKE :par0 AND PatName LIKE :par1 AND  Year LIKE :par2 AND Address LIKE :par3;";
ADOQuery1->Parameters->ParamByName("par0")->Value=Edit1->Text;
ADOQuery1->Parameters->ParamByName("par1")->Value=Edit2->Text;
ADOQuery1->Parameters->ParamByName("par2")->Value=Edit3->Text;
ADOQuery1->Parameters->ParamByName("par3")->Value=Edit4->Text;
ADOQuery1->ExecSQL();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button2Click(TObject *Sender)
{
ADOQuery1->Close();
ADOQuery1->SQL->Text="INSERT INTO hosp.patients (DocName,PatName,Year,Address) VALUES(:par0,:par1,:par2,:par3);";
ADOQuery1->Parameters->ParamByName("par0")->Value=Edit1->Text;
ADOQuery1->Parameters->ParamByName("par1")->Value=Edit2->Text;
ADOQuery1->Parameters->ParamByName("par2")->Value=Edit3->Text;
ADOQuery1->Parameters->ParamByName("par3")->Value=Edit4->Text;
ADOQuery1->ExecSQL();
}
//---------------------------------------------------------------------------

