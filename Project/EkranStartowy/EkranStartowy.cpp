
//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "EkranStartowy.h"
#include "Menu.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TStart *Start;
//-----------------------------------------------------------
__fastcall TStart::TStart(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TStart::Button1Click(TObject *Sender)
{
			  Start->Hide();
			  Tylec->Show();
}
//---------------------------------------------------------------------------
void __fastcall TStart::Button2Click(TObject *Sender)
{
			  Start->Close();
}
//---------------------------------------------------------------------------


void __fastcall TStart::StartCreate(TObject *Sender)
{
                    Image1->Picture->LoadFromFile("../../graphics/tlo.bmp");
}
//---------------------------------------------------------------------------

