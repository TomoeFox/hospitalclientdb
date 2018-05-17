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
if (Action == "Удалить" || Action == "Добавить") {
if (Form2->Edit1->Text.IsEmpty() || Form2->Edit1->Text == " ") {
ShowMessage("Графа Фамилия пациента пуста!");
return true;
}
if (Form2->Edit2->Text.IsEmpty() || Form2->Edit2->Text == " ") {
ShowMessage("Графа имя пациента пуста!");
return true;
}
if (Form2->Edit3->Text.IsEmpty() || Form2->Edit3->Text == " ") {
ShowMessage("Графа отчество пациента пуста!");
return true;
}
if (Form2->Edit4->Text.IsEmpty() || Form2->Edit4->Text == " ") {
ShowMessage("Графа врача пациента пуста!");
return true;
}
if (Form2->Edit5->Text.IsEmpty() || Form2->Edit5->Text == " ") {
ShowMessage("Графа адрес пуста!");
return true;
}
if (Form2->Edit6->Text.IsEmpty() || Form2->Edit6->Text == " ") {
ShowMessage("Графа годрождения пуста!");
return true;
}
else {
return false;
}
}
if (Action == "Искать") {
/*if (Form2->Edit2->Text.IsEmpty()==true
|| Form2->Edit2->Text==" " && Form2->Edit3->Text.IsEmpty()==true
|| Form2->Edit3->Text==" " && Form2->Edit4->Text.IsEmpty()==true
|| Form2->Edit4->Text==" " && Form2->Edit5->Text.IsEmpty()==true
|| Form2->Edit5->Text==" " && Form2->Edit6->Text.IsEmpty()==true
|| Form2->Edit6->Text==" " && Form2->Edit1->Text.IsEmpty()==true
|| Form2->Edit1->Text==" ") {
ShowMessage("Должна быть заполнена хотя бы одна графа!");
return true;
}
else {
return false;
} */
}
if (Action == "Изменить") {
if (Form2->Edit1->Text.IsEmpty() || Form2->Edit1->Text == " ") {
ShowMessage("Графа Фамилия пациента пуста!\nКолонка старых данных");
return true;
}
if (Form2->Edit2->Text.IsEmpty() || Form2->Edit2->Text == " ") {
ShowMessage("Графа имя пациента пуста!\nКолонка старых данных");
return true;
}
if (Form2->Edit3->Text.IsEmpty() || Form2->Edit3->Text == " ") {
ShowMessage("Графа отчество пациента пуста!\nКолонка старых данных");
return true;
}
if (Form2->Edit4->Text.IsEmpty() || Form2->Edit4->Text == " ") {
ShowMessage("Графа врача пациента пуста!\nКолонка старых данных");
return true;
}
if (Form2->Edit5->Text.IsEmpty() || Form2->Edit5->Text == " ") {
ShowMessage("Графа адрес пуста!\nКолонка старых данных");
return true;
}
if (Form2->Edit6->Text.IsEmpty() || Form2->Edit6->Text == " ") {
ShowMessage("Графа годрождения пуста!\nКолонка старых данных");
return true;
}
if (Form2->Edit7->Text.IsEmpty() || Form2->Edit7->Text == " ") {
ShowMessage("Графа Фамилия пациента пуста!\nКолонка измененных данных");
return true;
}
if (Form2->Edit8->Text.IsEmpty() || Form2->Edit8->Text == " ") {
ShowMessage("Графа имя пациента пуста!\nКолонка измененных данных");
return true;
}
if (Form2->Edit9->Text.IsEmpty() || Form2->Edit9->Text == " ") {
ShowMessage("Графа отчество пациента пуста!\nКолонка измененных данных");
return true;
}
if (Form2->Edit10->Text.IsEmpty() || Form2->Edit10->Text == " ") {
ShowMessage("Графа врача пациента пуста!\nКолонка измененных данных");
return true;
}
if (Form2->Edit11->Text.IsEmpty() || Form2->Edit11->Text == " ") {
ShowMessage("Графа адрес пуста!\nКолонка измененных данных");
return true;
}
if (Form2->Edit12->Text.IsEmpty() || Form2->Edit12->Text == " ") {
ShowMessage("Графа годрождения пуста!\nКолонка измененных данных");
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
if (Button2->Caption=="Подключиться") {
ADOConnection1->Connected=true;
ADOConnection1->Open();
}
else if (Button2->Caption=="Отключиться") {
ADOConnection1->Connected=false;
ADOConnection1->Close();
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ADOConnection1AfterConnect(TObject *Sender)
{
Label2->Font->Color=clGreen;
ShowMessage("Подключенно");
Button2->Caption="Отключиться";
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
ShowMessage("Отключенно");
Label2->Font->Color=clRed;
Button2->Caption="Подключиться";
N2->Caption=Button2->Caption;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{
Form2->Show();
Form2->Name="Поиск";
Form2->Button1->Caption="Искать";
Form2->GroupBox2->Hide();
Form2->GroupBox1->Caption="Данные для поиска";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
Form2->Show();
Form2->Name="Добавление";
Form2->Button1->Caption="Добавить";
Form2->GroupBox2->Hide();
Form2->GroupBox1->Caption="Данные для добавления";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button5Click(TObject *Sender)
{
Form2->Show();
Form2->Name="Изменение";
Form2->Button1->Caption="Изменить";
Form2->GroupBox2->Show();
Form2->GroupBox1->Caption="Старые данные";
}
//---------------------------------------------------------------------------
 void __fastcall TForm1::Button1Click(TObject *Sender)
{
Form2->Show();
Form2->Caption="Удаление";
Form2->Button1->Caption="Удалить";
Form2->GroupBox2->Hide();
Form2->GroupBox1->Caption="Данные для удаления";
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
ShowMessage("Все вопросы отсылать на email battleloren@gmail.com\ngithub.com/TomoeFox");
}
//---------------------------------------------------------------------------

