//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#include <StrUtils.hpp>

#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ADODB.hpp>
#include <DB.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm3 : public TForm
{
__published:	// IDE-managed Components
	TDBGrid *DBGrid1;
	TEdit *Edit1;
	TEdit *Edit2;
	TEdit *Edit3;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TADOConnection *ADOConnection1;
	TADOQuery *ADOQuery1;
	TDataSource *DataSource1;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TLabel *Label7;
	TEdit *Edit4;
	TLabel *Label8;
	TGroupBox *GroupBox1;
	TButton *Button4;
	TButton *Button8;
	TButton *Button9;
	TButton *Button10;
	TButton *Button11;
	TLabel *Label11;
	TButton *Button1;
	TEdit *Edit5;
	TEdit *Edit6;
	TLabel *Label9;
	TLabel *Label10;
	TEdit *Edit7;
	TEdit *Edit8;
	TLabel *Label12;
	TLabel *Label13;
	TPanel *Panel1;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall ADOConnection1AfterConnect(TObject *Sender);
	void __fastcall ADOConnection1AfterDisconnect(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button8Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm3(TComponent* Owner);
};




//---------------------------------------------------------------------------
 extern PACKAGE TForm3 *Form3;
//---------------------------------------------------------------------------
#endif
