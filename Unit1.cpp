//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
TForm1 *Form1;
Select *slt;
Insert *ist;
Delete *dlt;
Update *udt;
DBaction *act;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
UnicodeString DBaction::FIOString(UnicodeString LastName,UnicodeString FirstName, UnicodeString ParName){
UnicodeString CombineString;
if (Form2->Edit2->Text.IsEmpty()==true || Form2->Edit2->Text==" " && Form2->Edit3->Text.IsEmpty()==true || Form2->Edit2->Text == " ") {
CombineString = LastName;
return CombineString;
}
else {
CombineString = LastName+" "+FirstName.SubString(0,1)+"."+ParName.SubString(0,1)+".";
return CombineString;
}
}
//---------------------------------------------------------------------------
UnicodeString Select::SQL(UnicodeString DocName, UnicodeString PatName, UnicodeString Address, UnicodeString Year)
{
if (DocName.IsEmpty() || DocName == " " && Address.IsEmpty() || Address ==" " && Year.IsEmpty() || Year == " ") {
UnicodeString SQL = "SELECT * FROM hosp.patients WHERE PatName LIKE\"%"+PatName+"%\";";
return SQL;
}
if (PatName.IsEmpty() || PatName == " " && Address.IsEmpty() || Address ==" " && Year.IsEmpty() || Year == " ") {
UnicodeString SQL = "SELECT * FROM hosp.patients WHERE DocName LIKE\"%"+DocName+"%\";";
return SQL;
}
if (DocName.IsEmpty() || DocName == " " && PatName.IsEmpty() || PatName ==" " && Year.IsEmpty() || Year == " ") {
UnicodeString SQL = "SELECT * FROM hosp.patients WHERE Address LIKE\"%"+Address+"%\";";
return SQL;
}
if (DocName.IsEmpty() || DocName == " " && Address.IsEmpty() || Address ==" " && PatName.IsEmpty() || PatName == " ") {
UnicodeString SQL = "SELECT * FROM hosp.patients WHERE Year LIKE\"%"+Year+"%\";";
return SQL;
}
if (DocName.IsEmpty() || DocName == " " &&  Year.IsEmpty() || Year == " ")  {
UnicodeString SQL = "SELECT * FROM hosp.patients WHERE PatName LIKE \"%"+PatName+"%\"AND Address LIKE \"%"+Address+"%\";";
return SQL;
}
if (DocName.IsEmpty() || DocName == " " &&  Address.IsEmpty() || Address == " ")  {
UnicodeString SQL = "SELECT * FROM hosp.patients WHERE PatName LIKE \"%"+PatName+"%\"AND Year LIKE \"%"+Year+"%\";";
return SQL;
}
if (Year.IsEmpty() || Year == " " &&  Address.IsEmpty() || Address == " ")  {
UnicodeString SQL = "SELECT * FROM hosp.patients WHERE PatName LIKE \"%"+PatName+"%\"AND DocName LIKE \"%"+DocName+"%\";";
return SQL;
}
if (Year.IsEmpty() || Year == " ")  {
 UnicodeString SQL = "SELECT * FROM hosp.patients WHERE PatName LIKE \"%"+PatName+"%\"AND DocName LIKE \"%"+DocName+"%\" AND Address LIKE \"%"+Address+"%\"";
  return SQL;
}
if (Address.IsEmpty() || Address == " ")  {
 UnicodeString SQL = "SELECT * FROM hosp.patients WHERE PatName LIKE \"%"+PatName+"%\"AND DocName LIKE \"%"+DocName+"%\" AND Address LIKE \"%"+Year+"%\"";
 return SQL;
}
if (DocName.IsEmpty() || DocName == " ")  {
UnicodeString SQL = "SELECT * FROM hosp.patients WHERE PatName LIKE \"%"+PatName+"%\"AND Year LIKE \"%"+Year+"%\" AND Address LIKE \"%"+Address+"%\"";
return SQL;
}
else {
UnicodeString SQL = "SELECT * FROM hosp.patients WHERE PatName LIKE \"%"+PatName+"%\"AND Year LIKE \"%"+Year+"%\" AND Address LIKE \"%"+Address+"%\" AND DocName LIKE \"%"+DocName+"%\"";
 return SQL;
}
}
UnicodeString Insert::SQL(UnicodeString DocName, UnicodeString PatName, UnicodeString Address, UnicodeString Year)
{
UnicodeString SQL;
SQL = "INSERT INTO hosp.patients (DocName,PatName,Address,Year) VALUES (\""+DocName+"\",\""+PatName+"\",\""+Address+"\","+Year+")";
return SQL;
}
UnicodeString Delete::SQL(UnicodeString DocName, UnicodeString PatName, UnicodeString Address, UnicodeString Year){
UnicodeString SQL;
SQL = "DELETE FROM hosp.patients  WHERE DocName = \""+DocName+"\" AND PatName = \""+PatName+"\" AND Address = \""+Address+"\" AND Year = "+Year+";";
return SQL;
}
UnicodeString Update::SQL(UnicodeString DocName, UnicodeString PatName, UnicodeString Address, UnicodeString Year) {
UnicodeString SQL;
SQL = "UPDATE hosp.patients SET DocName = \""+DocName+"\",PatName = \""+PatName+"\",Address = \""+Address+"\",Year ="+Year+"";
return SQL;
}
UnicodeString Update::ChangeInfo(UnicodeString DocName, UnicodeString PatName, UnicodeString Address, UnicodeString Year) {
UnicodeString WhereSQL;
WhereSQL = "WHERE DocName = \""+DocName+"\" AND PatName = \""+PatName+"\" AND Address = \""+Address+"\" AND Year ="+Year+";";
return  WhereSQL;


}
//---------------------------------------------------------------------------
bool DBaction::TextChecker(UnicodeString Action) {
if (Action == "�������" || Action == "��������") {
if (Form2->Edit1->Text.IsEmpty() || Form2->Edit1->Text == " ") {
ShowMessage("����� ������� �������� �����!");
return true;
}
if (Form2->Edit2->Text.IsEmpty() || Form2->Edit2->Text == " ") {
ShowMessage("����� ��� �������� �����!");
return true;
}
if (Form2->Edit3->Text.IsEmpty() || Form2->Edit3->Text == " ") {
ShowMessage("����� �������� �������� �����!");
return true;
}
if (Form2->Edit4->Text.IsEmpty() || Form2->Edit4->Text == " ") {
ShowMessage("����� ����� �������� �����!");
return true;
}
if (Form2->Edit5->Text.IsEmpty() || Form2->Edit5->Text == " ") {
ShowMessage("����� ����� �����!");
return true;
}
if (Form2->Edit6->Text.IsEmpty() || Form2->Edit6->Text == " ") {
ShowMessage("����� ����������� �����!");
return true;
}
else {
return false;
}
}
if (Action == "������") {
/*if (Form2->Edit2->Text.IsEmpty()==true
|| Form2->Edit2->Text==" " && Form2->Edit3->Text.IsEmpty()==true
|| Form2->Edit3->Text==" " && Form2->Edit4->Text.IsEmpty()==true
|| Form2->Edit4->Text==" " && Form2->Edit5->Text.IsEmpty()==true
|| Form2->Edit5->Text==" " && Form2->Edit6->Text.IsEmpty()==true
|| Form2->Edit6->Text==" " && Form2->Edit1->Text.IsEmpty()==true
|| Form2->Edit1->Text==" ") {
ShowMessage("������ ���� ��������� ���� �� ���� �����!");
return true;
}
else {
return false;
} */
}
if (Action == "��������") {
if (Form2->Edit1->Text.IsEmpty() || Form2->Edit1->Text == " ") {
ShowMessage("����� ������� �������� �����!\n������� ������ ������");
return true;
}
if (Form2->Edit2->Text.IsEmpty() || Form2->Edit2->Text == " ") {
ShowMessage("����� ��� �������� �����!\n������� ������ ������");
return true;
}
if (Form2->Edit3->Text.IsEmpty() || Form2->Edit3->Text == " ") {
ShowMessage("����� �������� �������� �����!\n������� ������ ������");
return true;
}
if (Form2->Edit4->Text.IsEmpty() || Form2->Edit4->Text == " ") {
ShowMessage("����� ����� �������� �����!\n������� ������ ������");
return true;
}
if (Form2->Edit5->Text.IsEmpty() || Form2->Edit5->Text == " ") {
ShowMessage("����� ����� �����!\n������� ������ ������");
return true;
}
if (Form2->Edit6->Text.IsEmpty() || Form2->Edit6->Text == " ") {
ShowMessage("����� ����������� �����!\n������� ������ ������");
return true;
}
if (Form2->Edit7->Text.IsEmpty() || Form2->Edit7->Text == " ") {
ShowMessage("����� ������� �������� �����!\n������� ���������� ������");
return true;
}
if (Form2->Edit8->Text.IsEmpty() || Form2->Edit8->Text == " ") {
ShowMessage("����� ��� �������� �����!\n������� ���������� ������");
return true;
}
if (Form2->Edit9->Text.IsEmpty() || Form2->Edit9->Text == " ") {
ShowMessage("����� �������� �������� �����!\n������� ���������� ������");
return true;
}
if (Form2->Edit10->Text.IsEmpty() || Form2->Edit10->Text == " ") {
ShowMessage("����� ����� �������� �����!\n������� ���������� ������");
return true;
}
if (Form2->Edit11->Text.IsEmpty() || Form2->Edit11->Text == " ") {
ShowMessage("����� ����� �����!\n������� ���������� ������");
return true;
}
if (Form2->Edit12->Text.IsEmpty() || Form2->Edit12->Text == " ") {
ShowMessage("����� ����������� �����!\n������� ���������� ������");
return true;
}
else {
return false;
}
}
return false;
}
void __fastcall TForm1::FormCreate(TObject *Sender)
{
Label2->Font->Color=clRed;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
if (Button2->Caption=="������������") {
ADOConnection1->Connected=true;
ADOConnection1->Open();
}
else if (Button2->Caption=="�����������") {
ADOConnection1->Connected=false;
ADOConnection1->Close();
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ADOConnection1AfterConnect(TObject *Sender)
{
Label2->Font->Color=clGreen;
ShowMessage("�����������");
Button2->Caption="�����������";
N2->Caption=Button2->Caption;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button6Click(TObject *Sender)
{
ADOQuery1->Close();
ADOQuery1->SQL->Text="SELECT * FROM hosp.patients;";
ADOQuery1->Open();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ADOConnection1AfterDisconnect(TObject *Sender)
{
ShowMessage("����������");
Label2->Font->Color=clRed;
Button2->Caption="������������";
N2->Caption=Button2->Caption;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{
Form2->Show();
Form2->Name="�����";
Form2->Button1->Caption="������";
Form2->GroupBox2->Hide();
Form2->GroupBox1->Caption="������ ��� ������";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
Form2->Show();
Form2->Name="����������";
Form2->Button1->Caption="��������";
Form2->GroupBox2->Hide();
Form2->GroupBox1->Caption="������ ��� ����������";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button5Click(TObject *Sender)
{
Form2->Show();
Form2->Name="���������";
Form2->Button1->Caption="��������";
Form2->GroupBox2->Show();
Form2->GroupBox1->Caption="������ ������";
}
//---------------------------------------------------------------------------
 void __fastcall TForm1::Button1Click(TObject *Sender)
{
Form2->Show();
Form2->Caption="��������";
Form2->Button1->Caption="�������";
Form2->GroupBox2->Hide();
Form2->GroupBox1->Caption="������ ��� ��������";
}

void __fastcall TForm1::N3Click(TObject *Sender)
{
Form1->Close();
Form2->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N5Click(TObject *Sender)
{
Button3->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N6Click(TObject *Sender)
{
Button1->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N7Click(TObject *Sender)
{
 Button4->Click();

}
//---------------------------------------------------------------------------

void __fastcall TForm1::N8Click(TObject *Sender)
{
Button5->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N9Click(TObject *Sender)
{
Button6->Click();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::N11Click(TObject *Sender)
{
ShowMessage("��� ������� �������� �� email battleloren@gmail.com\ngithub.com/TomoeFox");
}
//---------------------------------------------------------------------------

