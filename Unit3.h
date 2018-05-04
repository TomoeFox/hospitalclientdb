//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ADODB.hpp>
#include <DB.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
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
	TButton *Button1;
	TADOConnection *ADOConnection1;
	TADOQuery *ADOQuery1;
	TDataSource *DataSource1;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TLabel *Label7;
	TButton *Button2;
	TButton *Button3;
	TButton *Button4;
	TEdit *Edit4;
	TLabel *Label8;
	TButton *Button5;
	TLabel *Label9;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall ADOConnection1AfterConnect(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
	void __fastcall ADOConnection1AfterDisconnect(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
	__fastcall TForm3(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm3 *Form3;
//---------------------------------------------------------------------------
#endif
