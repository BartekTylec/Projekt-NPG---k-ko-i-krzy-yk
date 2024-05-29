
//---------------------------------------------------------------------------

#ifndef ThrByThrYH
#define ThrByThrYH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Mask.hpp>
//---------------------------------------------------------------------------
class TForm4 : public TForm
{
__published:	// IDE-managed Components
	TImage *XO1;
	TImage *XO2;
	TImage *XO3;
	TImage *XO4;
	TImage *XO5;
	TImage *XO6;
	TImage *XO9;
	TImage *XO8;
	TImage *XO7;
	TLabel *CurryPlayer;
	TLabel *Wyniki;
	TButton *MenuExit;
	TLabel *Label1;
	void __fastcall XO1Click(TObject *Sender);
	void __fastcall XO2Click(TObject *Sender);
	void __fastcall XO3Click(TObject *Sender);
	void __fastcall XO4Click(TObject *Sender);
	void __fastcall XO5Click(TObject *Sender);
	void __fastcall XO6Click(TObject *Sender);
	void __fastcall XO9Click(TObject *Sender);
	void __fastcall XO8Click(TObject *Sender);
	void __fastcall XO7Click(TObject *Sender);
	void __fastcall OnCreate(TObject *Sender);
	void __fastcall MenuExitClick(TObject *Sender);
	void __fastcall OnClose(TObject *Sender);
	//void __fastcall XO10Click(TObject *Sender);
	//void __fastcall LabelChange(TObject *Sender);
	//void __fastcall WynikiClick(TObject *Sender);
private:	// User declarations
	int TForm4:: CheckWinCondition();
	void TForm4:: Clearing();
public:		// User declarations
	__fastcall TForm4(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm4 *Form4;
//---------------------------------------------------------------------------
#endif
