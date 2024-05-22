//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ThrByThr.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
char CurryPlayerTaste;
char sq1,sq2,sq3,sq4,sq5,sq6,sq7,sq8,sq9='n';
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner): TForm(Owner)
{
	CurryPlayer->TControl::SetText(CurryPlayerTaste);
}
//---------------------------------------------------------------------------

void __fastcall TForm2::XO1Click(TObject *Sender)
{
	 if(CurryPlayerTaste=='x')
	 {
		XO1->Picture->LoadFromFile("x.bmp");
	 }
	 else if(CurryPlayerTaste=='o')
	 {
		XO1->Picture->LoadFromFile("o.bmp");
	 }
	 sq1=CurryPlayerTaste;
	 if(CheckWinCondition()==1)
	 {
		Wyniki -> Text="Wygral  ",CurryPlayerTaste;
		return;
	 }
	 else if(CheckWinCondition()==2)
	 {
		Wyniki -> Text="REMIS",CurryPlayerTaste;
		return;
	 }
	 if( CurryPlayerTaste=='x')
	 {
		 CurryPlayerTaste='o';
	 }
	 else if(CurryPlayerTaste=='o')
	 {
		CurryPlayerTaste='x';
	 }
}
void __fastcall TForm2::XO2Click(TObject *Sender)
{
	 if(CurryPlayerTaste=='x')
	 {
		XO2->Picture->LoadFromFile("x.bmp");
	 }
	 else if(CurryPlayerTaste=='o')
	 {
		XO2->Picture->LoadFromFile("o.bmp");
	 }
	 sq2=CurryPlayerTaste;
	 if(CheckWinCondition()==1)
	 {
		Wyniki -> Text="Wygral  ",CurryPlayerTaste;
		return;
	 }
	 else if(CheckWinCondition()==2)
	 {
		Wyniki -> Text="REMIS",CurryPlayerTaste;
		return;
	 }
}
void __fastcall TForm2::XO3Click(TObject *Sender)
{
	 if(CurryPlayerTaste=='x')
	 {
		XO3->Picture->LoadFromFile("x.bmp");
	 }
	 else if(CurryPlayerTaste=='o')
	 {
		XO3->Picture->LoadFromFile("o.bmp");
	 }
	 sq3=CurryPlayerTaste;
	 if(CheckWinCondition()==1)
	 {
		Wyniki -> Text="Wygral  ",CurryPlayerTaste;
		return;
	 }
	 else if(CheckWinCondition()==2)
	 {
		Wyniki -> Text="REMIS",CurryPlayerTaste;
		return;
	 }
}
void __fastcall TForm2::XO4Click(TObject *Sender)
{
	 if(CurryPlayerTaste=='x')
	 {
		XO4->Picture->LoadFromFile("x.bmp");
	 }
	 else if(CurryPlayerTaste=='o')
	 {
		XO4->Picture->LoadFromFile("o.bmp");
	 }
	 sq4=CurryPlayerTaste;
	if(CheckWinCondition()==1)
	 {
		Wyniki -> Text="Wygral  ",CurryPlayerTaste;
		return;
	 }
	 else if(CheckWinCondition()==2)
	 {
		Wyniki -> Text="REMIS",CurryPlayerTaste;
		return;
	 }
}
void __fastcall TForm2::XO5Click(TObject *Sender)
{
	 if(CurryPlayerTaste=='x')
	 {
		XO5->Picture->LoadFromFile("x.bmp");
	 }
	 else if(CurryPlayerTaste=='o')
	 {
		XO5->Picture->LoadFromFile("o.bmp");
	 }
	 sq5=CurryPlayerTaste;
	 if(CheckWinCondition()==1)
	 {
		Wyniki -> Text="Wygral  ",CurryPlayerTaste;
		return;
	 }
	 else if(CheckWinCondition()==2)
	 {
		Wyniki -> Text="REMIS",CurryPlayerTaste;
		return;
	 }
}
void __fastcall TForm2::XO6Click(TObject *Sender)
{
	 if(CurryPlayerTaste=='x')
	 {
		XO6->Picture->LoadFromFile("x.bmp");
	 }
	 else if(CurryPlayerTaste=='o')
	 {
		XO6->Picture->LoadFromFile("o.bmp");
	 }
	 sq6=CurryPlayerTaste;
	 if(CheckWinCondition()==1)
	 {
		Wyniki -> Text="Wygral  ",CurryPlayerTaste;
		return;
	 }
	 else if(CheckWinCondition()==2)
	 {
		Wyniki -> Text="REMIS",CurryPlayerTaste;
		return;
	 }
}
void __fastcall TForm2::XO7Click(TObject *Sender)
{
	 if(CurryPlayerTaste=='x')
	 {
		XO7->Picture->LoadFromFile("x.bmp");
	 }
	 else if(CurryPlayerTaste=='o')
	 {
		XO7->Picture->LoadFromFile("o.bmp");
	 }
	 sq7=CurryPlayerTaste;
	 if(CheckWinCondition()==1)
	 {
		Wyniki -> Text="Wygral  ",CurryPlayerTaste;
		return;
	 }
	 else if(CheckWinCondition()==2)
	 {
		Wyniki -> Text="REMIS",CurryPlayerTaste;
		return;
	 }
}
void __fastcall TForm2::XO8Click(TObject *Sender)
{
	 if(CurryPlayerTaste=='x')
	 {
		XO8->Picture->LoadFromFile("x.bmp");
	 }
	 else if(CurryPlayerTaste=='o')
	 {
		XO8->Picture->LoadFromFile("o.bmp");
	 }
	 sq8=CurryPlayerTaste;
	 if(CheckWinCondition()==1)
	 {
		Wyniki -> Text="Wygral  ",CurryPlayerTaste;
		return;
	 }
	 else if(CheckWinCondition()==2)
	 {
		Wyniki -> Text="REMIS",CurryPlayerTaste;
		return;
	 }
}
void __fastcall TForm2::XO9Click(TObject *Sender)
{
	 if(CurryPlayerTaste=='x')
	 {
		XO9->Picture->LoadFromFile("x.bmp");
	 }
	 else if(CurryPlayerTaste=='o')
	 {
		XO9->Picture->LoadFromFile("o.bmp");
	 }
	 sq9=CurryPlayerTaste;
	 if(CheckWinCondition()==1)
	 {
		Wyniki -> Text="Wygral  ",CurryPlayerTaste;
		return;
	 }
	 else if(CheckWinCondition()==2)
	 {
		Wyniki -> Text="REMIS",CurryPlayerTaste;
		return;
	 }
}
//---------------------------------------------------------------------------
int TForm2:: CheckWinCondition()
{
	if(sq1==sq2==sq3 || sq4==sq5==sq6 || sq7==sq8==sq9)
	{
		return 1;
	}
	else if(sq1==sq4==sq7 || sq2==sq5==sq8 || sq3==sq6==sq9)
	{
		return 1;
	}
	else if(sq1==sq5==sq9 || sq7==sq5==sq3)
	{
		return 1;
	}
	else if(sq1!='n' && sq2!='n' && sq3!='n' && sq4!='n'  && sq5!='n' && sq6!='n' && sq7!='n' && sq8!='n' && sq9!='n')
	{
		return 2;
	}
	else
	{
		return 0;
    }
}


