//---------------------------------------------------------------------------

#ifndef FivByFiveH
#define FivByFiveH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TFiveByFive : public TForm
{
__published:	// IDE-managed Components
	TImage *Image0;
	TImage *Image1;
	TImage *Image2;
	TImage *Image3;
	TImage *Image4;
	TImage *Image5;
	TImage *Image6;
	TImage *Image7;
	TImage *Image8;
	TImage *Image9;
	TImage *Image10;
	TImage *Image11;
	TImage *Image12;
	TImage *Image13;
	TImage *Image14;
	TImage *Image15;
	TImage *Image16;
	TImage *Image17;
	TImage *Image18;
	TImage *Image19;
	TImage *Image20;
	TImage *Image21;
	TImage *Image22;
	TImage *Image23;
	TImage *Image24;
	TButton *MenuExit;
	TLabel *CurryPlayer;
	TLabel *Wyniki;
	void __fastcall PoleClick(TObject *Sender);
	void __fastcall MenuExitClick(TObject *Sender);
private:	// User declarations
	int TFiveByFive:: CheckWinCondition();
	void TFiveByFive:: Clearing();
	void TFiveByFive:: Active();
	void TFiveByFive:: Block();
	void TFiveByFive:: TagRes();
public:		// User declarations
	__fastcall TFiveByFive(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFiveByFive *FiveByFive;
//---------------------------------------------------------------------------
#endif
