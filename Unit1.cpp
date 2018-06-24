//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
TForm1 *Form1;
TForm3 *Form3;
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
if (FirstName.IsEmpty()==true || FirstName==" " && ParName.IsEmpty()==true || ParName == " ") {
CombineString = LastName;
ShowMessage(CombineString);
return CombineString;
}
else {
CombineString = LastName+" "+FirstName.SubString(0,1)+"."+ParName.SubString(0,1)+".";
ShowMessage(CombineString);
return CombineString;
}
}
//---------------------------------------------------------------------------
UnicodeString Select::SQL(UnicodeString DocName, UnicodeString PatName, UnicodeString Address, UnicodeString Year)
{
if (DocName.IsEmpty() || DocName == " " || DocName == ".." && Address.IsEmpty() || Address ==" " && Year.IsEmpty() || Year == " ") {
return "SELECT * FROM hosp.patients WHERE PatName LIKE\"%"+PatName+"%\";";
}
if (PatName.IsEmpty() || PatName == " " || PatName == ".." && Address.IsEmpty() || Address ==" " && Year.IsEmpty() || Year == " ") {
return "SELECT * FROM hosp.patients WHERE DocName LIKE\"%"+DocName+"%\";";
}
if (DocName.IsEmpty() || DocName == " " || DocName == ".." && PatName.IsEmpty() || PatName ==" " || PatName == ".." && Year.IsEmpty() || Year == " ") {

return"SELECT * FROM hosp.patients WHERE Address LIKE\"%"+Address+"%\";";
}
if (DocName.IsEmpty() || DocName == " " || DocName == ".." && Address.IsEmpty() || Address ==" " && PatName.IsEmpty() || PatName == " " || PatName == "..") {
return "SELECT * FROM hosp.patients WHERE Year LIKE\"%"+Year+"%\";";
}
if (DocName.IsEmpty() || DocName == " " || DocName == ".." &&  Year.IsEmpty() || Year == " ")  {
return "SELECT * FROM hosp.patients WHERE PatName LIKE \"%"+PatName+"%\"AND Address LIKE \"%"+Address+"%\";";
}
if (DocName.IsEmpty() || DocName == " "  || DocName == ".." &&  Address.IsEmpty() || Address == " ")  {
return "SELECT * FROM hosp.patients WHERE PatName LIKE \"%"+PatName+"%\"AND Year LIKE \"%"+Year+"%\";";;
}
if (Year.IsEmpty() || Year == " " &&  Address.IsEmpty() || Address == " ")  {
return "SELECT * FROM hosp.patients WHERE PatName LIKE \"%"+PatName+"%\"AND DocName LIKE \"%"+DocName+"%\";";;
}
if (Year.IsEmpty() || Year == " ")  {
  return"SELECT * FROM hosp.patients WHERE PatName LIKE \"%"+PatName+"%\"AND DocName LIKE \"%"+DocName+"%\" AND Address LIKE \"%"+Address+"%\"";
}
if (Address.IsEmpty() || Address == " ")  {
 return "SELECT * FROM hosp.patients WHERE PatName LIKE \"%"+PatName+"%\"AND DocName LIKE \"%"+DocName+"%\" AND Address LIKE \"%"+Year+"%\"";
}
if (DocName.IsEmpty() || DocName == " " || DocName == "..")  {
return "SELECT * FROM hosp.patients WHERE PatName LIKE \"%"+PatName+"%\"AND Year LIKE \"%"+Year+"%\" AND Address LIKE \"%"+Address+"%\"";
}
else {
 return "SELECT * FROM hosp.patients WHERE PatName LIKE \"%"+PatName+"%\"AND Year LIKE \"%"+Year+"%\" AND Address LIKE \"%"+Address+"%\" AND DocName LIKE \"%"+DocName+"%\"";
}
}
UnicodeString Insert::SQL(UnicodeString DocName, UnicodeString PatName, UnicodeString Address, UnicodeString Year)
{
return "INSERT INTO hosp.patients (DocName,PatName,Address,Year) VALUES (\""+DocName+"\",\""+PatName+"\",\""+Address+"\","+Year+")";
}
UnicodeString Delete::SQL(UnicodeString DocName, UnicodeString PatName, UnicodeString Address, UnicodeString Year){
return "DELETE FROM hosp.patients  WHERE DocName = \""+DocName+"\" AND PatName = \""+PatName+"\" AND Address = \""+Address+"\" AND Year = "+Year+";";
}
UnicodeString Update::SQL(UnicodeString DocName, UnicodeString PatName, UnicodeString Address, UnicodeString Year) {
return "UPDATE hosp.patients SET DocName = \""+DocName+"\",PatName = \""+PatName+"\",Address = \""+Address+"\",Year ="+Year+"";
}
UnicodeString Update::ChangeInfo(UnicodeString DocName, UnicodeString PatName, UnicodeString Address, UnicodeString Year) {
return  "WHERE DocName = \""+DocName+"\" AND PatName = \""+PatName+"\" AND Address = \""+Address+"\" AND Year ="+Year+";";;
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
/*if (Form2->DBCB2->Hint==Form2->DBCB2->Text) {
ShowMessage("����� ����� �� �������");
return true;
} */
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
/*if (Form2->DBCB2->Hint==Form2->DBCB2->Text) {
ShowMessage("����� ����� �� �������\n������� ������ ������");
return true;
}     */
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
/*if (Form2->DBCB1->Hint==Form2->DBCB1->Text) {
ShowMessage("����� ����� �� �������\n������� ����� ������");
return true;
}    */
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
Form1->Label8->Caption=Form1->DBGrid1->DataSource->DataSet->RecordCount;
ShowMessage("����� ��������!");
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




void __fastcall TForm1::DBGrid1TitleClick(TColumn *Column)
{
  if ((ADOQuery1->Sort.Pos(Column->FieldName) > 0) && (ADOQuery1->Sort.Pos("ASC") > 0))
	 ADOQuery1->Sort = Column->FieldName + " DESC";
   else ADOQuery1->Sort = Column->FieldName + " ASC";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N12Click(TObject *Sender)
{
UnicodeString PatName = DBGrid1->Columns->Items[1]->Field->Text, DocName = DBGrid1->Columns->Items[0]->Field->Text, Year = DBGrid1->Columns->Items[3]->Field->Text, Address = DBGrid1->Columns->Items[2]->Field->Text;
ADOQuery1->Close();
ADOQuery1->SQL->Text=dlt->SQL(DocName,PatName,Address,Year);
ADOQuery1->ExecSQL();
ShowMessage("��������");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N14Click(TObject *Sender)
{
Form2->Show();
Form2->Name="���������";
Form2->Button1->Caption="��������";
Form2->GroupBox2->Show();
Form2->GroupBox1->Caption="������ ������";
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button8Click(TObject *Sender)
{
Form2->Show();
}


UnicodeString Doc::Ins(UnicodeString DocName) {

return "INSERT INTO hosp.doctors (DocName) VALUES (\""+DocName+"\")";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button7Click(TObject *Sender)
{
Form3->Show();
Form3->GroupBox1->Caption="��������";
Form3->Button1->Caption="��������";
}
//---------------------------------------------------------------------------

