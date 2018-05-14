//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
Select *slt;
Insert *ist;
Delete *dlt;
Update *udt;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
UnicodeString DBaction::FIOString(UnicodeString LastName,UnicodeString FirstName, UnicodeString ParName){
UnicodeString CombineString = LastName+" "+FirstName.SubString(0,1)+"."+ParName.SubString(0,1)+".";
return CombineString;
}
//---------------------------------------------------------------------------
UnicodeString Select::SQL(UnicodeString DocName, UnicodeString PatName, UnicodeString Address, UnicodeString Year)
{
if (DocName.IsEmpty() || DocName == " " && Address.IsEmpty() || Address ==" " && Year.IsEmpty() || Year == " ") {
UnicodeString SQL = "SELECT * FROM hosp.patients WHERE PatName LIKE\"%"+PatName+"%\";";
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
SQL = "INSERT INTO hosp.patients (DocName,PatName,Address,Year) VALUES ("+DocName+","+PatName+","+Address+","+Year+")";
return SQL;
}
UnicodeString Delete::SQL(UnicodeString DocName, UnicodeString PatName, UnicodeString Address, UnicodeString Year){
UnicodeString SQL;
SQL = "DELETE FROM hosp.patients  WHERE DocName = "+DocName+" AND PatName = "+PatName+" AND Address = "+Address+" AND Year = "+Year+";";
return SQL;
}
UnicodeString Update::SQL(UnicodeString DocName, UnicodeString PatName, UnicodeString Address, UnicodeString Year) {}
void __fastcall TForm1::Button1Click(TObject *Sender)
{
ADOQuery1->Close();
ADOQuery1->SQL->Text=slt->SQL(Edit4->Text,slt->FIOString(Edit1->Text,Edit2->Text,Edit3->Text),Edit5->Text,Edit6->Text);
ADOQuery1->Open();
}
//---------------------------------------------------------------------------


