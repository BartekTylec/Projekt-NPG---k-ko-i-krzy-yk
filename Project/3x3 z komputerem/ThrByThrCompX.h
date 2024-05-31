//---------------------------------------------------------------------------

#ifndef ThrByThrCompXH
#define ThrByThrCompXH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Mask.hpp>
#include <vector>
//---------------------------------------------------------------------------
class TForm3 : public TForm
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
	TLabel *Tura;
	TLabel *Wyniki;
	TButton *MenuExit;
	TStaticText *CurryPlayer;
	TButton *Cofnij;
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
	//void __fastcall TuraClick(TObject *Sender);
	//void __fastcall CurryPlayerClick(TObject *Sender);
	//void __fastcall XO10Click(TObject *Sender);
	//void __fastcall LabelChange(TObject *Sender);
	//void __fastcall WynikiClick(TObject *Sender);
private:	// User declarations
	int TForm3:: CheckWinCondition();
	char sq1, sq2, sq3, sq4, sq5, sq6, sq7, sq8, sq9;
	std::vector<int> listaPól = {1, 2, 3, 4, 5 ,6, 7, 8, 9};
    const char CurryPlayerTaste =  'x';
	//char ostatniRuch;
	int ruchComp;
	int sqX;
	int number;
	int valueToBeDeleted;
    void TForm3::Clearing();
public:		// User declarations
	__fastcall TForm3(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm3 *Form3;
//---------------------------------------------------------------------------
#endif
