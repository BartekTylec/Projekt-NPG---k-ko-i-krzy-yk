//---------------------------------------------------------------------------

#ifndef FoByFoH
#define FoByFoH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TFourByFour : public TForm
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
	TLabel *CurryPlayer;
	TButton *MenuExit;
	TLabel *Wyniki;
	void __fastcall PoleClick(TObject *Sender);
	void __fastcall MenuExitClick(TObject *Sender);
private:	// User declarations
	int TFourByFour:: CheckWinCondition();
	void TFourByFour:: Clearing();
	void TFourByFour:: Active();
	void TFourByFour:: Block();
    void TFourByFour:: TagRes();
public:		// User declarations
	__fastcall TFourByFour(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFourByFour *FourByFour;
//---------------------------------------------------------------------------
#endif
