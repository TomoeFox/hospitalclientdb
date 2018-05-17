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
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TDBGrid *DBGrid1;
	TADOConnection *ADOConnection1;
	TADOQuery *ADOQuery1;
	TDataSource *DataSource1;
	TGroupBox *GroupBox1;
	TButton *Button2;
	TLabel *Label1;
	TLabel *Label2;
	TGroupBox *GroupBox2;
	TButton *Button1;
	TButton *Button3;
	TButton *Button4;
	TButton *Button5;
	TButton *Button6;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TMainMenu *MainMenu1;
	TMenuItem *N1;
	TMenuItem *N2;
	TMenuItem *N3;
	TMenuItem *N4;
	TMenuItem *N5;
	TMenuItem *N6;
	TMenuItem *N7;
	TMenuItem *N8;
	TMenuItem *N9;
	TMenuItem *N10;
	TMenuItem *N11;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall ADOConnection1AfterConnect(TObject *Sender);
	void __fastcall Button6Click(TObject *Sender);
	void __fastcall ADOConnection1AfterDisconnect(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
	void __fastcall N3Click(TObject *Sender);
	void __fastcall N5Click(TObject *Sender);
	void __fastcall N6Click(TObject *Sender);
	void __fastcall N7Click(TObject *Sender);
	void __fastcall N8Click(TObject *Sender);
	void __fastcall N9Click(TObject *Sender);
	void __fastcall N11Click(TObject *Sender);


private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
class DBaction: public TForm1 {
public:
UnicodeString FIOString(UnicodeString,UnicodeString, UnicodeString);
bool TextChecker(UnicodeString);
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
UnicodeString ChangeInfo(UnicodeString, UnicodeString,UnicodeString,UnicodeString);
};
class Delete: public DBaction {
public:
UnicodeString SQL(UnicodeString, UnicodeString,UnicodeString,UnicodeString);

};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif

