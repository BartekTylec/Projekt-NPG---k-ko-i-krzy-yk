


#include <vcl.h>
#pragma hdrstop

#include "ThrByThr.h"
#include "Menu.h"
#include "EkranStartowy.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
char CurryPlayerTaste =  'x';
char sq1, sq2, sq3, sq4, sq5, sq6, sq7, sq8, sq9;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner): TForm(Owner)
{
	CurryPlayer-> Caption = CurryPlayerTaste;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::XO1Click(TObject *Sender)
{
	 if(CurryPlayerTaste=='x')
	 {
		sq1=CurryPlayerTaste;
		XO1->Picture->LoadFromFile("../../graphics/x.bmp");
		CurryPlayerTaste='o';
		CurryPlayer-> Caption = CurryPlayerTaste;
		 XO1->Enabled = False;


			 if(CheckWinCondition()==1)
	 {
				if (sq1 == 'x')
				{
						Wyniki -> Caption="Wygral X ";
						return;
				}
				else
				{
					Wyniki -> Caption="Wygral O ";
						return;
				}
	 }
	 else if(CheckWinCondition()==2)
	 {
		Wyniki -> Caption="REMIS";
		return;
	 }
	 }
	 else if(CurryPlayerTaste=='o')
	 {
		sq1=CurryPlayerTaste;
		XO1->Picture->LoadFromFile("../../graphics/o.bmp");
		CurryPlayerTaste='x';
		CurryPlayer-> Caption = CurryPlayerTaste;
		XO1->Enabled = False;


		if(CheckWinCondition()==1)
	 {
						if (sq1 == 'x')
				{
						Wyniki -> Caption="Wygral X ";
						return;
				}
				else
				{
					Wyniki -> Caption="Wygral O ";
						return;
				}
	 }
	 else if(CheckWinCondition()==2)
	 {
		Wyniki -> Caption="REMIS";
		return;
	 }
	 }

}
void __fastcall TForm2::XO2Click(TObject *Sender)
{
	 if(CurryPlayerTaste=='x')
	 {
		sq2=CurryPlayerTaste;
		XO2->Picture->LoadFromFile("../../graphics/x.bmp");
		CurryPlayerTaste='o';
		CurryPlayer-> Caption = CurryPlayerTaste;
		XO2->Enabled = False;


		 if(CheckWinCondition()==1)
	 {
						if (sq2 == 'x')
				{
						Wyniki -> Caption="Wygral X ";
						return;
				}
				else
				{
					Wyniki -> Caption="Wygral O ";
						return;
				}
	 }
	 else if(CheckWinCondition()==2)
	 {
		Wyniki -> Caption="REMIS";
		return;
	 }
	 }
	 else if(CurryPlayerTaste=='o')
	 {
		sq2=CurryPlayerTaste;
		XO2->Picture->LoadFromFile("../../graphics/o.bmp");
		CurryPlayerTaste='x';
		CurryPlayer-> Caption = CurryPlayerTaste;
		XO2->Enabled = False;


		 if(CheckWinCondition()==1)
	 {
						if (sq2 == 'x')
				{
						Wyniki -> Caption="Wygral X ";
						return;
				}
				else
				{
					Wyniki -> Caption="Wygral O ";
						return;
				}
	 }
	 else if(CheckWinCondition()==2)
	 {
		Wyniki -> Caption="REMIS";
		return;
	 }
	 }

}
void __fastcall TForm2::XO3Click(TObject *Sender)
{
	 if(CurryPlayerTaste=='x')
	 {
	   sq3=CurryPlayerTaste;
		XO3->Picture->LoadFromFile("../../graphics/x.bmp");
		CurryPlayerTaste='o';
		CurryPlayer-> Caption = CurryPlayerTaste;
		XO3->Enabled = False;


		 if(CheckWinCondition()==1)
	 {
						if (sq3 == 'x')
				{
						Wyniki -> Caption="Wygral X ";
						return;
				}
				else
				{
					Wyniki -> Caption="Wygral O ";
						return;
				}
	 }
	 else if(CheckWinCondition()==2)
	 {
		Wyniki -> Caption="REMIS";
		return;
	 }
	 }
	 else if(CurryPlayerTaste=='o')
	 {
		sq3=CurryPlayerTaste;
		XO3->Picture->LoadFromFile("../../graphics/o.bmp");
		CurryPlayerTaste='x';
		CurryPlayer-> Caption = CurryPlayerTaste;
		XO3->Enabled = False;


		 if(CheckWinCondition()==1)
	 {
						if (sq3 == 'x')
				{
						Wyniki -> Caption="Wygral X ";
						return;
				}
				else
				{
					Wyniki -> Caption="Wygral O ";
						return;
				}
	 }
	 else if(CheckWinCondition()==2)
	 {
		Wyniki -> Caption="REMIS";
		return;
	 }
	 }

}
void __fastcall TForm2::XO4Click(TObject *Sender)
{
	 if(CurryPlayerTaste=='x')
	 {
		sq4=CurryPlayerTaste;
		XO4->Picture->LoadFromFile("../../graphics/x.bmp");
		CurryPlayerTaste='o';
		CurryPlayer-> Caption = CurryPlayerTaste;
		XO4->Enabled = False;



		 if(CheckWinCondition()==1)
	 {
						if (sq4 == 'x')
				{
						Wyniki -> Caption="Wygral X ";
						return;
				}
				else
				{
					Wyniki -> Caption="Wygral O ";
						return;
				}
	 }
	 else if(CheckWinCondition()==2)
	 {
		Wyniki -> Caption="REMIS";
		return;
	 }
	 }
	 else if(CurryPlayerTaste=='o')
	 {
		sq4=CurryPlayerTaste;
		XO4->Picture->LoadFromFile("../../graphics/o.bmp");
		CurryPlayerTaste='x';
		CurryPlayer-> Caption = CurryPlayerTaste;
		XO4->Enabled = False;


         if(CheckWinCondition()==1)
	 {
						if (sq4 == 'x')
				{
						Wyniki -> Caption="Wygral X ";
						return;
				}
				else
				{
					Wyniki -> Caption="Wygral O ";
						return;
				}
	 }
	 else if(CheckWinCondition()==2)
	 {
		Wyniki -> Caption="REMIS";
		return;
	 }
	 }
}
void __fastcall TForm2::XO5Click(TObject *Sender)
{
	 if(CurryPlayerTaste=='x')
	 {
		sq5=CurryPlayerTaste;
		XO5->Picture->LoadFromFile("../../graphics/x.bmp");
		CurryPlayerTaste='o';
		CurryPlayer-> Caption = CurryPlayerTaste;
		XO5->Enabled = False;


		 if(CheckWinCondition()==1)
	 {
					if (sq5 == 'x')
				{
						Wyniki -> Caption="Wygral X ";
						return;
				}
				else
				{
					Wyniki -> Caption="Wygral O ";
						return;
				}
	 }
	 else if(CheckWinCondition()==2)
	 {
		Wyniki -> Caption="REMIS";
		return;
	 }
	 }
	 else if(CurryPlayerTaste=='o')
	 {
		sq5=CurryPlayerTaste;
		XO5->Picture->LoadFromFile("../../graphics/o.bmp");
		CurryPlayerTaste='x';
		CurryPlayer-> Caption = CurryPlayerTaste;
		XO5->Enabled = False;


		 if(CheckWinCondition()==1)
	 {
						if (sq5 == 'x')
				{
						Wyniki -> Caption="Wygral X ";
						return;
				}
				else
				{
					Wyniki -> Caption="Wygral O ";
						return;
				}
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
		XO6->Picture->LoadFromFile("../../graphics/x.bmp");
		CurryPlayerTaste='o';
		CurryPlayer-> Caption = CurryPlayerTaste;
		XO6->Enabled = False;



		 if(CheckWinCondition()==1)
	 {
						if (sq6 == 'x')
				{
						Wyniki -> Caption="Wygral X ";
						return;
				}
				else
				{
					Wyniki -> Caption="Wygral O ";
						return;
				}
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
		XO6->Picture->LoadFromFile("../../graphics/o.bmp");
		CurryPlayerTaste='x';
		CurryPlayer-> Caption = CurryPlayerTaste;
		XO6->Enabled = False;



		 if(CheckWinCondition()==1)
	 {
						if (sq6 == 'x')
				{
						Wyniki -> Caption="Wygral X ";
						return;
				}
				else
				{
					Wyniki -> Caption="Wygral O ";
						return;
				}
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
		XO9->Picture->LoadFromFile("../../graphics/x.bmp");
		CurryPlayerTaste='o';
		CurryPlayer-> Caption = CurryPlayerTaste;
		XO9->Enabled = False;



		 if(CheckWinCondition()==1)
	 {
						if (sq9 == 'x')
				{
						Wyniki -> Caption="Wygral X ";
						return;
				}
				else
				{
					Wyniki -> Caption="Wygral O ";
						return;
				}
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
		XO9->Picture->LoadFromFile("../../graphics/o.bmp");
		CurryPlayerTaste='x';
		CurryPlayer-> Caption = CurryPlayerTaste;
		XO9->Enabled = False;



		 if(CheckWinCondition()==1)
	 {
						if (sq9 == 'x')
				{
						Wyniki -> Caption="Wygral X ";
						return;
				}
				else
				{
					Wyniki -> Caption="Wygral O ";
						return;
				}
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
		XO8->Picture->LoadFromFile("../../graphics/x.bmp");
		CurryPlayerTaste='o';
		CurryPlayer-> Caption = CurryPlayerTaste;
		XO8->Enabled = False;


		 if(CheckWinCondition()==1)
	 {
						if (sq8 == 'x')
				{
						Wyniki -> Caption="Wygral X ";
						return;
				}
				else
				{
					Wyniki -> Caption="Wygral O ";
						return;
				}
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
		XO8->Picture->LoadFromFile("../../graphics/o.bmp");
		CurryPlayerTaste='x';
		CurryPlayer-> Caption = CurryPlayerTaste;
		XO8->Enabled = False;



		 if(CheckWinCondition()==1)
	 {
						if (sq8 == 'x')
				{
						Wyniki -> Caption="Wygral X ";
						return;
				}
				else
				{
					Wyniki -> Caption="Wygral O ";
						return;
				}
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
		XO7->Picture->LoadFromFile("../../graphics/x.bmp");
		CurryPlayerTaste='o';
		CurryPlayer-> Caption = CurryPlayerTaste;
		XO7->Enabled = False;


	 if(CheckWinCondition()==1)
	 {
				if (sq7 == 'x')
				{
						Wyniki -> Caption="Wygral X ";
						return;
				}
				else
				{
					Wyniki -> Caption="Wygral O ";
						return;
				}
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
		XO7->Picture->LoadFromFile("../../graphics/o.bmp");
		CurryPlayerTaste='x';
		CurryPlayer-> Caption = CurryPlayerTaste;
		XO7->Enabled = False;


		 if(CheckWinCondition()==1)
	 {
						if (sq7 == 'x')
				{
						Wyniki -> Caption="Wygral X ";
						return;
				}
				else
				{
					Wyniki -> Caption="Wygral O ";
						return;
				}
	 }
	 else if(CheckWinCondition()==2)
	 {
		Wyniki -> Caption="REMIS";
		return;
	 }
	 }

}
//---------------------------------------------------------------------------
int TForm2:: CheckWinCondition()
{
	if(sq1==sq2 && sq2==sq3 && sq1 != NULL  )
	{
		XO1->Enabled = False;
		XO2->Enabled = False;
		XO3->Enabled = False;
		XO4->Enabled = False;
		XO5->Enabled = False;
		XO6->Enabled = False;
		XO7->Enabled = False;
		XO8->Enabled = False;
		XO9->Enabled = False;
		return 1;
	}
	else if(sq4==sq5 && sq5==sq6 && sq4 != NULL )
	{
    	XO1->Enabled = False;
		XO2->Enabled = False;
		XO3->Enabled = False;
		XO4->Enabled = False;
		XO5->Enabled = False;
		XO6->Enabled = False;
		XO7->Enabled = False;
		XO8->Enabled = False;
		XO9->Enabled = False;
		return 1;
	}
	else if(sq7==sq8 && sq8==sq9 && sq7 != NULL  )
	{
    	XO1->Enabled = False;
		XO2->Enabled = False;
		XO3->Enabled = False;
		XO4->Enabled = False;
		XO5->Enabled = False;
		XO6->Enabled = False;
		XO7->Enabled = False;
		XO8->Enabled = False;
		XO9->Enabled = False;
		return 1;
	}
	else if(sq1==sq4 && sq4==sq7 && sq4 != NULL  )
	{
    	XO1->Enabled = False;
		XO2->Enabled = False;
		XO3->Enabled = False;
		XO4->Enabled = False;
		XO5->Enabled = False;
		XO6->Enabled = False;
		XO7->Enabled = False;
		XO8->Enabled = False;
		XO9->Enabled = False;
		return 1;
	}
	else if (sq2==sq5 && sq5==sq8 && sq2 != NULL )
	{
               	XO1->Enabled = False;
		XO2->Enabled = False;
		XO3->Enabled = False;
		XO4->Enabled = False;
		XO5->Enabled = False;
		XO6->Enabled = False;
		XO7->Enabled = False;
		XO8->Enabled = False;
		XO9->Enabled = False;
	  return 1;
	}
	else if ( sq3==sq6 && sq6==sq9 && sq3 != NULL)
	 {
		XO1->Enabled = False;
		XO2->Enabled = False;
		XO3->Enabled = False;
		XO4->Enabled = False;
		XO5->Enabled = False;
		XO6->Enabled = False;
		XO7->Enabled = False;
		XO8->Enabled = False;
		XO9->Enabled = False;
		return 1;

	 }
	else if(sq1==sq5 && sq5==sq9 && sq5 != NULL)
	{
       	XO1->Enabled = False;
		XO2->Enabled = False;
		XO3->Enabled = False;
		XO4->Enabled = False;
		XO5->Enabled = False;
		XO6->Enabled = False;
		XO7->Enabled = False;
		XO8->Enabled = False;
		XO9->Enabled = False;
		return 1;

	}
	else if (sq7==sq5 && sq5==sq3 && sq7!= NULL  )
	{
		XO1->Enabled = False;
		XO2->Enabled = False;
		XO3->Enabled = False;
		XO4->Enabled = False;
		XO5->Enabled = False;
		XO6->Enabled = False;
		XO7->Enabled = False;
		XO8->Enabled = False;
		XO9->Enabled = False;
		return 1;

	}

	else if(sq1!=NULL && sq2!=NULL && sq3!=NULL && sq4!=NULL  && sq5!=NULL && sq6!=NULL && sq7!=NULL && sq8!=NULL && sq9!= NULL)
	{
		XO1->Enabled = False;
		XO2->Enabled = False;
		XO3->Enabled = False;
		XO4->Enabled = False;
		XO5->Enabled = False;
		XO6->Enabled = False;
		XO7->Enabled = False;
		XO8->Enabled = False;
		XO9->Enabled = False;
		return 2;

	}
	else
	{
		return 0;
	}
}

//---------------------------------------------------------------------------
void TForm2:: Clearing()
{
		XO1->Picture->LoadFromFile("../../graphics/nic.bmp");
		XO2->Picture->LoadFromFile("../../graphics/nic.bmp");
		XO3->Picture->LoadFromFile("../../graphics/nic.bmp");
		XO4->Picture->LoadFromFile("../../graphics/nic.bmp");
		XO5->Picture->LoadFromFile("../../graphics/nic.bmp");
		XO6->Picture->LoadFromFile("../../graphics/nic.bmp");
		XO7->Picture->LoadFromFile("../../graphics/nic.bmp");
		XO8->Picture->LoadFromFile("../../graphics/nic.bmp");
		XO9->Picture->LoadFromFile("../../graphics/nic.bmp");
		CurryPlayerTaste='x';
		Wyniki -> Caption="";
		XO1->Enabled = True;
		XO2->Enabled = True;
		XO3->Enabled = True;
		XO4->Enabled = True;
		XO5->Enabled = True;
		XO6->Enabled = True;
		XO7->Enabled = True;
		XO8->Enabled = True;
		XO9->Enabled = True;
		sq1 = NULL;
		sq2 = NULL;
		sq3 = NULL;
		sq4 = NULL;
		sq5 = NULL;
		sq6 = NULL;
		sq7 = NULL;
		sq8 = NULL;
		sq9 = NULL;
}

//---------------------------------------------------------------------------

void __fastcall TForm2::OnCreate(TObject *Sender)
{
		Clearing();
}

//---------------------------------------------------------------------------

void __fastcall TForm2::OnClose(TObject *Sender)
{
		Form2->Close();
		Start->Close();
        Tylec->Close();
}

//---------------------------------------------------------------------------

void __fastcall TForm2::MenuExitClick(TObject *Sender)
{
	if(CheckWinCondition()==2 || CheckWinCondition()==1)
	{
		Form2->Close();
		Clearing();
		Start->Show();
	}
}
//---------------------------------------------------------------------------



