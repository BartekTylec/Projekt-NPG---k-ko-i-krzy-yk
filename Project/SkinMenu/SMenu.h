//---------------------------------------------------------------------------

#ifndef SMenuH
#define SMenuH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TSkinMenu : public TForm
{
__published:	// IDE-managed Components
	TStaticText *StaticText1;
	TImage *Y;
	TImage *X;
	void __fastcall OnCreate(TObject *Sender);
	void __fastcall XClick(TObject *Sender);
	void __fastcall YClick(TObject *Sender);
    void __fastcall OnClose(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TSkinMenu(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TSkinMenu *SkinMenu;
//---------------------------------------------------------------------------
#endif
