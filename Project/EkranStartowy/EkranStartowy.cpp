//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
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
			  Tylec->ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall TStart::Button2Click(TObject *Sender)
{
			  Start->Close();
}
//---------------------------------------------------------------------------


void __fastcall TStart::StartCreate(TObject *Sender)
{
                    Image1->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/XiO.bmp");
}
//---------------------------------------------------------------------------

