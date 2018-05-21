//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

TForm2 *Form2;
Select *slt;
Insert *ist;
Delete *dlt;
Update *udt;
DBaction *act;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{
if (Button1->Caption=="Искать") {
if (act->TextChecker(Button1->Caption)==false) {
Form1->ADOQuery1->Close();
Form1->ADOQuery1->SQL->Text=slt->SQL(slt->FIOString(Edit4->Text,Edit13->Text,Edit14->Text),slt->FIOString(Edit1->Text,Edit2->Text,Edit3->Text),Edit5->Text,Edit6->Text);
Form1->ADOQuery1->Open();
ShowMessage("Поиск завершен!");    
}
}
else if (Button1->Caption=="Удалить") {
if (act->TextChecker(Button1->Caption)==false){
 Form1->ADOQuery1->Close();
Form1->ADOQuery1->SQL->Text=dlt->SQL(dlt->FIOString(Edit4->Text,Edit13->Text,Edit14->Text),dlt->FIOString(Edit1->Text,Edit2->Text,Edit3->Text),Edit5->Text,Edit6->Text);
Form1->ADOQuery1->ExecSQL();
ShowMessage("Запись удалена!");

}
}
else if (Button1->Caption=="Добавить") {
if (act->TextChecker(Button1->Caption)==false) {
 Form1->ADOQuery1->Close();
Form1->ADOQuery1->SQL->Text=ist->SQL(ist->FIOString(Edit4->Text,Edit13->Text,Edit14->Text),ist->FIOString(Edit1->Text,Edit2->Text,Edit3->Text),Edit5->Text,Edit6->Text);
Form1->ADOQuery1->ExecSQL();
ShowMessage("Запись добавленна!");

}
}
else if (Button1->Caption=="Изменить") {
if (act->TextChecker(Button1->Caption)==false) {
Form1->ADOQuery1->Close();
Form1->ADOQuery1->SQL->Text=udt->SQL(udt->FIOString(Edit10->Text,Edit15->Text,Edit16->Text),udt->FIOString(Edit7->Text,Edit8->Text,Edit9->Text),Edit11->Text,Edit12->Text)+" "+udt->ChangeInfo(udt->FIOString(Edit4->Text,Edit13->Text,Edit14->Text),ist->FIOString(Edit1->Text,Edit2->Text,Edit3->Text),Edit5->Text,Edit6->Text);
Form1->ADOQuery1->ExecSQL();
ShowMessage("Изменение завершено!");    
}

}
}
//---------------------------------------------------------------------------



void __fastcall TForm2::FormCreate(TObject *Sender)
{
GroupBox2->Hide();
}
//---------------------------------------------------------------------------

