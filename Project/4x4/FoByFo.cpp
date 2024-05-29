//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FoByFo.h"
#include "EkranStartowy.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFourByFour *FourByFour;
char CurryPlayerTaste =  'x';
//---------------------------------------------------------------------------
__fastcall TFourByFour::TFourByFour(TComponent* Owner)
	: TForm(Owner)
{
	CurryPlayer-> Caption = CurryPlayerTaste;
	Clearing();
	TagRes();
}
//---------------------------------------------------------------------------
void __fastcall TFourByFour::PoleClick(TObject *Sender)
{
	TImage* ImageClicked=dynamic_cast<TImage*>(Sender);
	if(CurryPlayerTaste=='x')
	 {
		ImageClicked->Picture->LoadFromFile("../../graphics/x.bmp");
		ImageClicked->Tag=1;
		CurryPlayerTaste='o';
		CurryPlayer-> Caption = CurryPlayerTaste;
		ImageClicked->Enabled = False;
        if(CheckWinCondition()==1)
		{
			Wyniki -> Caption="Wygral X ";
			Block();
			return;
		}
		else if(CheckWinCondition()==2)
		{
			Wyniki -> Caption="REMIS",CurryPlayerTaste;
			Block();
			return;
		}
	 }

	 else if(CurryPlayerTaste=='o')
	 {
		ImageClicked->Picture->LoadFromFile("../../graphics/o.bmp");
		ImageClicked->Tag=2;
		CurryPlayerTaste='x';
		CurryPlayer-> Caption = CurryPlayerTaste;
		ImageClicked->Enabled = False;
		if(CheckWinCondition()==1)
		{
			Wyniki -> Caption="Wygral O ";
			Block();
			return;
		}
		else if(CheckWinCondition()==2)
		{
			Wyniki -> Caption="REMIS",CurryPlayerTaste;
			Block();
			return;
		}
	 }
}
int TFourByFour:: CheckWinCondition()
{
		if(Image0->Tag==Image1->Tag && Image1->Tag==Image2->Tag && Image2->Tag==Image3->Tag && Image0->Tag != 0  )
		{
			return 1;
		}
		else if(Image4->Tag==Image5->Tag && Image5->Tag==Image6->Tag && Image6->Tag==Image7->Tag && Image4->Tag != 0)
		{
			return 1;
		}
		else if(Image8->Tag==Image9->Tag && Image9->Tag==Image10->Tag && Image10->Tag==Image11->Tag && Image8->Tag != 0)
		{
			return 1;
		}
		else if(Image12->Tag==Image13->Tag && Image13->Tag==Image14->Tag && Image14->Tag==Image15->Tag && Image12->Tag != 0)
		{
			return 1;
		}   //poziomy


		else if(Image0->Tag==Image4->Tag && Image4->Tag==Image8->Tag && Image8->Tag==Image12->Tag && Image0->Tag != 0)
		{
			return 1;
		}
		else if(Image1->Tag==Image5->Tag && Image5->Tag==Image9->Tag && Image9->Tag==Image13->Tag && Image1->Tag != 0)
		{
			return 1;
		}
		else if(Image2->Tag==Image6->Tag && Image6->Tag==Image10->Tag && Image10->Tag==Image14->Tag && Image2->Tag != 0)
		{
			return 1;
		}
		else if(Image3->Tag==Image7->Tag && Image7->Tag==Image11->Tag && Image11->Tag==Image15->Tag && Image3->Tag != 0)
		{
			return 1;
		}  //piony


		else if(Image0->Tag==Image5->Tag && Image5->Tag==Image10->Tag && Image10->Tag==Image15->Tag && Image0->Tag != 0)
		{
			return 1;
		}
		else if(Image3->Tag==Image6->Tag && Image6->Tag==Image9->Tag && Image9->Tag==Image12->Tag && Image3->Tag != 0)
		{
			return 1;
		} //na ukos


		else if(Image0->Tag != 0 && Image1->Tag != 0 && Image2->Tag != 0 && Image3->Tag != 0 && Image4->Tag != 0 && Image5->Tag != 0 && Image6->Tag != 0 && Image7->Tag != 0 && Image8->Tag != 0 && Image9->Tag != 0 && Image10->Tag != 0 && Image11->Tag != 0 && Image12->Tag != 0 && Image13->Tag != 0 && Image14->Tag != 0 && Image15->Tag != 0)
		{
			return 2;
		} //remis


		else
		{
			return 0;
		}//brak wyniku
}
//---------------------------------------------------------------------------
void TFourByFour:: Clearing()
{
		Image0->Picture->LoadFromFile("../../graphics/nic.bmp");
		Image1->Picture->LoadFromFile("../../graphics/nic.bmp");
		Image2->Picture->LoadFromFile("../../graphics/nic.bmp");
		Image3->Picture->LoadFromFile("../../graphics/nic.bmp");
		Image4->Picture->LoadFromFile("../../graphics/nic.bmp");
		Image5->Picture->LoadFromFile("../../graphics/nic.bmp");
		Image6->Picture->LoadFromFile("../../graphics/nic.bmp");
		Image7->Picture->LoadFromFile("../../graphics/nic.bmp");
		Image8->Picture->LoadFromFile("../../graphics/nic.bmp");
		Image9->Picture->LoadFromFile("../../graphics/nic.bmp");
		Image10->Picture->LoadFromFile("../../graphics/nic.bmp");
		Image11->Picture->LoadFromFile("../../graphics/nic.bmp");
		Image12->Picture->LoadFromFile("../../graphics/nic.bmp");
		Image13->Picture->LoadFromFile("../../graphics/nic.bmp");
		Image14->Picture->LoadFromFile("../../graphics/nic.bmp");
		Image15->Picture->LoadFromFile("../../graphics/nic.bmp");
		CurryPlayerTaste='x';
		Wyniki -> Caption= "";
}

void TFourByFour:: Block()
{
		Image0->Enabled = False;
		Image1->Enabled = False;
		Image2->Enabled = False;
		Image3->Enabled = False;
		Image4->Enabled = False;
		Image5->Enabled = False;
		Image6->Enabled = False;
		Image7->Enabled = False;
		Image8->Enabled = False;
		Image9->Enabled = False;
		Image10->Enabled = False;
		Image11->Enabled = False;
		Image12->Enabled = False;
		Image13->Enabled = False;
		Image14->Enabled = False;
		Image15->Enabled = False;
}

void TFourByFour:: Active()
{
		Image0->Enabled = True;
		Image1->Enabled = True;
		Image2->Enabled = True;
		Image3->Enabled = True;
		Image4->Enabled = True;
		Image5->Enabled = True;
		Image6->Enabled = True;
		Image7->Enabled = True;
		Image8->Enabled = True;
		Image9->Enabled = True;
		Image10->Enabled = True;
		Image11->Enabled = True;
		Image12->Enabled = True;
		Image13->Enabled = True;
		Image14->Enabled = True;
		Image15->Enabled = True;
}

void TFourByFour:: TagRes()
{
		Image0->Tag = 0;
		Image1->Tag = 0;
		Image2->Tag = 0;
		Image3->Tag = 0;
		Image4->Tag = 0;
		Image5->Tag = 0;
		Image6->Tag = 0;
		Image7->Tag = 0;
		Image8->Tag = 0;
		Image9->Tag = 0;
		Image10->Tag = 0;
		Image11->Tag = 0;
		Image12->Tag = 0;
		Image13->Tag = 0;
		Image14->Tag = 0;
		Image15->Tag = 0;
}
//---------------------------------------------------------------------------
void __fastcall TFourByFour::OnClose(TObject *Sender)
{
		FourByFour->Close();
		Start->Close();
}
//---------------------------------------------------------------------------

void __fastcall TFourByFour::MenuExitClick(TObject *Sender)
{
	if(CheckWinCondition()==2 || CheckWinCondition()==1)
	{
		FourByFour->Close();
		Clearing();
        TagRes();
		Active();
		Start->Show();
	}
}
//---------------------------------------------------------------------------

