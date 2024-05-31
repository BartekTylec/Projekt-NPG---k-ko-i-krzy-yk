//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "SMenu.h"
#include "ThrByThr.h"
#include "ThrByThrY.h"
#include "EkranStartowy.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TSkinMenu *SkinMenu;
int z =0;
//---------------------------------------------------------------------------
__fastcall TSkinMenu::TSkinMenu(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TSkinMenu::OnCreate(TObject *Sender)
{
	Y->Picture->LoadFromFile("../../graphics/y.bmp");
	X->Picture->LoadFromFile("../../graphics/x.bmp");
}
//---------------------------------------------------------------------------
void __fastcall TSkinMenu::XClick(TObject *Sender)
{
	   Form2->ShowModal();
	   SkinMenu->Close();
}
//---------------------------------------------------------------------------
void __fastcall TSkinMenu::YClick(TObject *Sender)
{
          Form4->ShowModal();
	   SkinMenu->Close();
}
void __fastcall TSkinMenu::OnClose(TObject *Sender)
{
		SkinMenu->Close();
		Start->Close();
}
//---------------------------------------------------------------------------
