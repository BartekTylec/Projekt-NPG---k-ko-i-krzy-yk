
//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Menu.h"
#include "ThrByThr.h"
#include "FoByFo.h"
#include "FivByFive.h"
#include "ThrByThrCompX.h"
#include "SMenu.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TTylec *Tylec;
int x = 0;
std::string* w;
//---------------------------------------------------------------------------
__fastcall TTylec::TTylec(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TTylec::Button2Click(TObject *Sender)
{
		   x += 2;
		   Button1->Enabled = False;
		   Button2->Enabled = False;
		   Button3->Enabled = False;
}
//---------------------------------------------------------------------------

void __fastcall TTylec::Button1Click(TObject *Sender)
{

		   x += 1;
           Button1->Enabled = False;
		   Button2->Enabled = False;
		   Button3->Enabled = False;


}
//---------------------------------------------------------------------------

void __fastcall TTylec::Button5Click(TObject *Sender)
{

		   x += 20;
		   Button5->Enabled = False;
		   Button4->Enabled = False;
}
//---------------------------------------------------------------------------

void __fastcall TTylec::Button4Click(TObject *Sender)
{

		   x += 10;
           Button5->Enabled = False;
		   Button4->Enabled = False;
}
//---------------------------------------------------------------------------

void __fastcall TTylec::Button3Click(TObject *Sender)
{
		   x +=3;
		   Button1->Enabled = False;
		   Button2->Enabled = False;
		   Button3->Enabled = False;
}
//---------------------------------------------------------------------------


void __fastcall TTylec::Button6Click(TObject *Sender)
{
	if (x == 11) {
		 SkinMenu->ShowModal();
		 Tylec->Close();
	}
	if (x == 12) {
	   FourByFour->ShowModal();
		Tylec->Close();
	}
	if (x == 13) {
		FiveByFive->ShowModal();
		Tylec->Close();
	}
	if (x == 21) {
		Form3->ShowModal();
		Tylec->Close();
	}
	if (x == 22) {
		 ShowMessage("Work in progress, opcja niedostêpna :(");
	}
	if (x == 23) {
		ShowMessage("Work in progress, opcja niedostepna :(");
	}
}

//---------------------------------------------------------------------------

void __fastcall TTylec::Button7Click(TObject *Sender)
{
	x = 0;
	Button1->Enabled = True;
	Button2->Enabled = True;
	Button3->Enabled = True;
	Button4->Enabled = True;
	Button5->Enabled = True;


}
//---------------------------------------------------------------------------

