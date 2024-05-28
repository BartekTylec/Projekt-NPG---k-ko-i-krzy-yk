//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Menu.h"
#include "ThrByThr.h"
#include "FoByFo.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TTylec *Tylec;
//---------------------------------------------------------------------------
__fastcall TTylec::TTylec(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TTylec::Button2Click(TObject *Sender)
{
		   Tylec->Close();
           FourByFour->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TTylec::Button1Click(TObject *Sender)
{

		   Tylec->Hide();
		   Form2->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TTylec::Button5Click(TObject *Sender)
{

		   Tylec->Close();
}
//---------------------------------------------------------------------------

void __fastcall TTylec::Button4Click(TObject *Sender)
{

		   Tylec->Close();
}
//---------------------------------------------------------------------------

void __fastcall TTylec::Button3Click(TObject *Sender)
{

		   Tylec->Close();
}
//---------------------------------------------------------------------------

