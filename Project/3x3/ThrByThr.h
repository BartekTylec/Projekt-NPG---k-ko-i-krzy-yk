//---------------------------------------------------------------------------

#ifndef ThrByThrH
#define ThrByThrH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Mask.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
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
	TImage *XO10;
	TLabel *CurryPlayer;
	TLabel *Wyniki;
	TButton *MenuExit;
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
	//void __fastcall XO10Click(TObject *Sender);
	//void __fastcall LabelChange(TObject *Sender);
	//void __fastcall WynikiClick(TObject *Sender);
private:	// User declarations
    int TForm2:: CheckWinCondition();
public:		// User declarations
	__fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
