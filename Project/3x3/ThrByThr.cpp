//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ThrByThr.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
char CurryPlayerTaste =  'x';
char sq1, sq2, sq3, sq4, sq5, sq6, sq7, sq8, sq9;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner): TForm(Owner)
{
	//CurryPlayer->TControl::SetText(CurryPlayerTaste);
}
//---------------------------------------------------------------------------

void __fastcall TForm2::XO1Click(TObject *Sender)
{
	 if(CurryPlayerTaste=='x')
	 {
		sq1=CurryPlayerTaste;
		XO1->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/x.bmp");
		CurryPlayerTaste='o';
		 XO1->Enabled = False;


			 if(CheckWinCondition()==1)
	 {
		Wyniki -> Caption="Wygral  ",CurryPlayerTaste;
		return;
	 }
	 else if(CheckWinCondition()==2)
	 {
		Wyniki -> Caption="REMIS",CurryPlayerTaste;
		return;
	 }
	 }
	 else if(CurryPlayerTaste=='o')
	 {
		sq1=CurryPlayerTaste;
		XO1->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		CurryPlayerTaste='x';
		XO1->Enabled = False;


		if(CheckWinCondition()==1)
	 {
		Wyniki -> Caption="Wygral  ",CurryPlayerTaste;
		return;
	 }
	 else if(CheckWinCondition()==2)
	 {
		Wyniki -> Caption="REMIS",CurryPlayerTaste;
		return;
	 }
	 }

}
void __fastcall TForm2::XO2Click(TObject *Sender)
{
	 if(CurryPlayerTaste=='x')
	 {
		sq2=CurryPlayerTaste;
		XO2->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/x.bmp");
		CurryPlayerTaste='o';
		XO2->Enabled = False;


		 if(CheckWinCondition()==1)
	 {
		Wyniki -> Caption="Wygral  ",CurryPlayerTaste;
		return;
	 }
	 else if(CheckWinCondition()==2)
	 {
		Wyniki -> Caption="REMIS",CurryPlayerTaste;
		return;
	 }
	 }
	 else if(CurryPlayerTaste=='o')
	 {
		sq2=CurryPlayerTaste;
		XO2->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		CurryPlayerTaste='x';
		XO2->Enabled = False;


		 if(CheckWinCondition()==1)
	 {
		Wyniki -> Caption="Wygral  ",CurryPlayerTaste;
		return;
	 }
	 else if(CheckWinCondition()==2)
	 {
		Wyniki -> Caption="REMIS",CurryPlayerTaste;
		return;
	 }
	 }

}
void __fastcall TForm2::XO3Click(TObject *Sender)
{
	 if(CurryPlayerTaste=='x')
	 {
	   sq3=CurryPlayerTaste;
		XO3->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/x.bmp");
		CurryPlayerTaste='o';
		XO3->Enabled = False;


		 if(CheckWinCondition()==1)
	 {
		Wyniki -> Caption="Wygral  ",CurryPlayerTaste;
		return;
	 }
	 else if(CheckWinCondition()==2)
	 {
		Wyniki -> Caption="REMIS",CurryPlayerTaste;
		return;
	 }
	 }
	 else if(CurryPlayerTaste=='o')
	 {
		sq3=CurryPlayerTaste;
		XO3->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		CurryPlayerTaste='x';
		XO3->Enabled = False;


		 if(CheckWinCondition()==1)
	 {
		Wyniki -> Caption="Wygral  ",CurryPlayerTaste;
		return;
	 }
	 else if(CheckWinCondition()==2)
	 {
		Wyniki -> Caption="REMIS",CurryPlayerTaste;
		return;
	 }
	 }

}
void __fastcall TForm2::XO4Click(TObject *Sender)
{
	 if(CurryPlayerTaste=='x')
	 {
		sq4=CurryPlayerTaste;
		XO4->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/x.bmp");
		CurryPlayerTaste='o';
		XO4->Enabled = False;



		 if(CheckWinCondition()==1)
	 {
		Wyniki -> Caption="Wygral  ",CurryPlayerTaste;
		return;
	 }
	 else if(CheckWinCondition()==2)
	 {
		Wyniki -> Caption="REMIS",CurryPlayerTaste;
		return;
	 }
	 }
	 else if(CurryPlayerTaste=='o')
	 {
		sq4=CurryPlayerTaste;
		XO4->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		CurryPlayerTaste='x';
		XO4->Enabled = False;


         if(CheckWinCondition()==1)
	 {
		Wyniki -> Caption="Wygral  ",CurryPlayerTaste;
		return;
	 }
	 else if(CheckWinCondition()==2)
	 {
		Wyniki -> Caption="REMIS",CurryPlayerTaste;
		return;
	 }
	 }
}
void __fastcall TForm2::XO5Click(TObject *Sender)
{
	 if(CurryPlayerTaste=='x')
	 {
		sq5=CurryPlayerTaste;
		XO5->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/x.bmp");
		CurryPlayerTaste='o';
		XO5->Enabled = False;


		 if(CheckWinCondition()==1)
	 {
		Wyniki -> Caption="Wygral  ",CurryPlayerTaste;
		return;
	 }
	 else if(CheckWinCondition()==2)
	 {
		Wyniki -> Caption="REMIS",CurryPlayerTaste;
		return;
	 }
	 }
	 else if(CurryPlayerTaste=='o')
	 {
		sq5=CurryPlayerTaste;
		XO5->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		CurryPlayerTaste='x';
		XO5->Enabled = False;


         if(CheckWinCondition()==1)
	 {
		Wyniki -> Caption="Wygral  ",CurryPlayerTaste;
		return;
	 }
	 else if(CheckWinCondition()==2)
	 {
		Wyniki -> Caption="REMIS",CurryPlayerTaste;
		return;
	 }
	 }

}
void __fastcall TForm2::XO6Click(TObject *Sender)
{
	 if(CurryPlayerTaste=='x')
	 {
		sq6=CurryPlayerTaste;
		XO6->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/x.bmp");
		CurryPlayerTaste='o';
		XO6->Enabled = False;



		 if(CheckWinCondition()==1)
	 {
		Wyniki -> Caption="Wygral  ",CurryPlayerTaste;
		return;
	 }
	 else if(CheckWinCondition()==2)
	 {
		Wyniki -> Caption="REMIS",CurryPlayerTaste;
		return;
	 }
	 }

	 else if(CurryPlayerTaste=='o')
	 {
		sq6=CurryPlayerTaste;
		XO6->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		CurryPlayerTaste='x';
		XO6->Enabled = False;



		 if(CheckWinCondition()==1)
	 {
		Wyniki -> Caption="Wygral  ",CurryPlayerTaste;
		return;
	 }
	 else if(CheckWinCondition()==2)
	 {
		Wyniki -> Caption="REMIS",CurryPlayerTaste;
		return;
	 }
	 }

}
void __fastcall TForm2::XO9Click(TObject *Sender)
{
	 if(CurryPlayerTaste=='x')
	 {
		sq9=CurryPlayerTaste;
		XO9->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/x.bmp");
		CurryPlayerTaste='o';
		XO9->Enabled = False;



		 if(CheckWinCondition()==1)
	 {
		Wyniki -> Caption="Wygral  ",CurryPlayerTaste;
		return;
	 }
	 else if(CheckWinCondition()==2)
	 {
		Wyniki -> Caption="REMIS",CurryPlayerTaste;
		return;
	 }
	 }
	 else if(CurryPlayerTaste=='o')
	 {
		sq9=CurryPlayerTaste;
		XO9->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		CurryPlayerTaste='x';
		XO9->Enabled = False;



		 if(CheckWinCondition()==1)
	 {
		Wyniki -> Caption="Wygral  ",CurryPlayerTaste;
		return;
	 }
	 else if(CheckWinCondition()==2)
	 {
		Wyniki -> Caption="REMIS",CurryPlayerTaste;
		return;
	 }
	 }
}
void __fastcall TForm2::XO8Click(TObject *Sender)
{
	 if(CurryPlayerTaste=='x')
	 {
		sq8=CurryPlayerTaste;
		XO8->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/x.bmp");
		CurryPlayerTaste='o';
		XO8->Enabled = False;


		 if(CheckWinCondition()==1)
	 {
		Wyniki -> Caption="Wygral  ",CurryPlayerTaste;
		return;
	 }
	 else if(CheckWinCondition()==2)
	 {
		Wyniki -> Caption="REMIS",CurryPlayerTaste;
		return;
	 }
	 }
	 else if(CurryPlayerTaste=='o')
	 {
		sq8=CurryPlayerTaste;
		XO8->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		CurryPlayerTaste='x';
		XO8->Enabled = False;



		 if(CheckWinCondition()==1)
	 {
		Wyniki -> Caption="Wygral  ",CurryPlayerTaste;
		return;
	 }
	 else if(CheckWinCondition()==2)
	 {
		Wyniki -> Caption="REMIS",CurryPlayerTaste;
		return;
	 }
	 }
}
void __fastcall TForm2::XO7Click(TObject *Sender)
{
	 if(CurryPlayerTaste=='x')
	 {
		sq7=CurryPlayerTaste;
		XO7->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/x.bmp");
		CurryPlayerTaste='o';
		XO7->Enabled = False;


		 if(CheckWinCondition()==1)
	 {
		Wyniki -> Caption="Wygral  ",CurryPlayerTaste;
		return;
	 }
	 else if(CheckWinCondition()==2)
	 {
		Wyniki -> Caption="REMIS",CurryPlayerTaste;
		return;
	 }
	 }
	 else if(CurryPlayerTaste=='o')
	 {
		sq7=CurryPlayerTaste;
		XO7->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		CurryPlayerTaste='x';
		XO7->Enabled = False;


		 if(CheckWinCondition()==1)
	 {
		Wyniki -> Caption="Wygral  ",CurryPlayerTaste;
		return;
	 }
	 else if(CheckWinCondition()==2)
	 {
		Wyniki -> Caption="REMIS",CurryPlayerTaste;
		return;
	 }
	 }

}
//---------------------------------------------------------------------------
int TForm2:: CheckWinCondition()
{
	if(sq1==sq2 && sq2==sq3 && sq1 != NULL  )
	{
		return 1;
	}
	else if(sq4==sq5 && sq5==sq6 && sq4 != NULL )
	{
		return 1;
	}
	else if(sq7==sq8 && sq8==sq9 && sq7 != NULL  )
	{
		return 1;
	}
	else if(sq1==sq4 && sq4==sq7 && sq4 != NULL  )
	{
		return 1;
	}
	else if (sq2==sq5 && sq5==sq8 && sq2 != NULL )
	{

	  return 1;
	}
	else if ( sq3==sq6 && sq6==sq9 && sq3 != NULL)
	 {
		return 1;
	 }
	else if(sq1==sq5 && sq5==sq9 && sq5 != NULL)
	{
		return 1;
	}
	else if (sq7==sq5 && sq5==sq3 && sq7!= NULL  )
	{
        return 1;
    }

	else if(sq1!=NULL && sq2!=NULL && sq3!=NULL && sq4!=NULL  && sq5!=NULL && sq6!=NULL && sq7!=NULL && sq8!=NULL && sq9!= NULL)
	{
		return 2;
	}
	else
	{
		return 0;
	}
}

//---------------------------------------------------------------------------


//---------------------------------------------------------------------------

void __fastcall TForm2::OnCreate(TObject *Sender)
{
		XO1->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/nic.bmp");
		XO2->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/nic.bmp");
		XO3->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/nic.bmp");
		XO4->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/nic.bmp");
		XO5->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/nic.bmp");
		XO6->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/nic.bmp");
		XO7->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/nic.bmp");
		XO8->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/nic.bmp");
		XO9->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/nic.bmp");
}
//---------------------------------------------------------------------------


