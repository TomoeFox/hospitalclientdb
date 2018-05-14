//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TEdit *Edit1;
	TEdit *Edit2;
	TEdit *Edit3;
	TButton *Button1;
	TADOConnection *ADOConnection1;
	TADOQuery *ADOQuery1;
	TDataSource *DataSource1;
	TDBGrid *DBGrid1;
	TEdit *Edit4;
	TEdit *Edit6;
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
class DBaction: public TForm1 {
public:
UnicodeString FIOString(UnicodeString LastName,UnicodeString FirstName, UnicodeString ParName);
virtual UnicodeString SQL()=0;
};
class Select : public DBaction{
public:
UnicodeString SQL(UnicodeString, UnicodeString,UnicodeString,UnicodeString);
};
class Insert: public DBaction {
public:
UnicodeString SQL(UnicodeString, UnicodeString,UnicodeString,UnicodeString);
};
class Update: public DBaction {
public:
UnicodeString SQL(UnicodeString, UnicodeString,UnicodeString,UnicodeString);
};
class Delete: public DBaction {
public:
UnicodeString SQL(UnicodeString, UnicodeString,UnicodeString,UnicodeString);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif

