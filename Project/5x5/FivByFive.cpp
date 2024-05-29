//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FivByFive.h"
#include "EkranStartowy.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFiveByFive *FiveByFive;
char CurryPlayerTaste =  'x';
//---------------------------------------------------------------------------
__fastcall TFiveByFive::TFiveByFive(TComponent* Owner)
	: TForm(Owner)
{
    CurryPlayer-> Caption = CurryPlayerTaste;
	Clearing();
	TagRes();
}
//---------------------------------------------------------------------------
void __fastcall TFiveByFive::PoleClick(TObject *Sender)
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
int TFiveByFive:: CheckWinCondition()
{
		if(Image0->Tag==Image1->Tag && Image1->Tag==Image2->Tag && Image2->Tag==Image3->Tag && Image3->Tag==Image4->Tag && Image0->Tag != 0  )
		{
			return 1;
		}
		else if(Image5->Tag==Image6->Tag && Image6->Tag==Image7->Tag && Image7->Tag==Image8->Tag && Image8->Tag==Image9->Tag && Image5->Tag != 0)
		{
			return 1;
		}
		else if(Image10->Tag==Image11->Tag && Image11->Tag==Image12->Tag && Image12->Tag==Image13->Tag && Image13->Tag==Image14->Tag && Image10->Tag != 0)
		{
			return 1;
		}
		else if(Image15->Tag==Image16->Tag && Image16->Tag==Image17->Tag && Image17->Tag==Image18->Tag && Image18->Tag==Image19->Tag && Image15->Tag != 0)
		{
			return 1;
		}
		else if(Image20->Tag==Image21->Tag && Image21->Tag==Image22->Tag && Image22->Tag==Image23->Tag && Image23->Tag==Image24->Tag && Image20->Tag != 0)
		{
			return 1;
		}   //poziomy


		else if(Image0->Tag==Image5->Tag && Image5->Tag==Image10->Tag && Image10->Tag==Image15->Tag && Image15->Tag==Image20->Tag && Image0->Tag != 0  )
		{
			return 1;
		}
		else if(Image1->Tag==Image6->Tag && Image6->Tag==Image11->Tag && Image11->Tag==Image16->Tag && Image16->Tag==Image21->Tag && Image1->Tag != 0)
		{
			return 1;
		}
		else if(Image2->Tag==Image7->Tag && Image7->Tag==Image12->Tag && Image12->Tag==Image17->Tag && Image17->Tag==Image22->Tag && Image2->Tag != 0)
		{
			return 1;
		}
		else if(Image3->Tag==Image8->Tag && Image8->Tag==Image13->Tag && Image13->Tag==Image18->Tag && Image18->Tag==Image23->Tag && Image3->Tag != 0)
		{
			return 1;
		}
		else if(Image4->Tag==Image9->Tag && Image9->Tag==Image14->Tag && Image14->Tag==Image19->Tag && Image19->Tag==Image24->Tag && Image4->Tag != 0)
		{
			return 1;
		}  //piony


		else if(Image0->Tag==Image6->Tag && Image6->Tag==Image12->Tag && Image12->Tag==Image18->Tag && Image18->Tag==Image24->Tag && Image0->Tag != 0)
		{
			return 1;
		}
		else if(Image4->Tag==Image8->Tag && Image8->Tag==Image12->Tag && Image12->Tag==Image16->Tag && Image16->Tag==Image20->Tag && Image4->Tag != 0)
		{
			return 1;
		} //na ukos


		else if(Image0->Tag != 0 && Image1->Tag != 0 && Image2->Tag != 0 && Image3->Tag != 0 && Image4->Tag != 0 && Image5->Tag != 0 && Image6->Tag != 0 && Image7->Tag != 0 && Image8->Tag != 0 && Image9->Tag != 0 && Image10->Tag != 0 && Image11->Tag != 0 && Image12->Tag != 0 && Image13->Tag != 0 && Image14->Tag != 0 && Image15->Tag != 0 && Image16->Tag != 0 && Image17->Tag != 0 && Image18->Tag != 0 && Image19->Tag != 0 && Image20->Tag != 0 && Image21->Tag != 0 && Image22->Tag != 0 && Image23->Tag != 0 && Image24->Tag != 0)
		{
			return 2;
		} //remis


		else
		{
			return 0;
		}//brak wyniku
}
//---------------------------------------------------------------------------
void TFiveByFive:: Clearing()
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
		Image16->Picture->LoadFromFile("../../graphics/nic.bmp");
		Image17->Picture->LoadFromFile("../../graphics/nic.bmp");
		Image18->Picture->LoadFromFile("../../graphics/nic.bmp");
		Image19->Picture->LoadFromFile("../../graphics/nic.bmp");
		Image20->Picture->LoadFromFile("../../graphics/nic.bmp");
		Image21->Picture->LoadFromFile("../../graphics/nic.bmp");
		Image22->Picture->LoadFromFile("../../graphics/nic.bmp");
		Image23->Picture->LoadFromFile("../../graphics/nic.bmp");
		Image24->Picture->LoadFromFile("../../graphics/nic.bmp");
		CurryPlayerTaste='x';
		Wyniki -> Caption= "";
}

void TFiveByFive:: Block()
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
		Image16->Enabled = False;
		Image17->Enabled = False;
		Image18->Enabled = False;
		Image19->Enabled = False;
		Image20->Enabled = False;
		Image21->Enabled = False;
		Image22->Enabled = False;
		Image23->Enabled = False;
		Image24->Enabled = False;
}

void TFiveByFive:: Active()
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
		Image16->Enabled = True;
		Image17->Enabled = True;
		Image18->Enabled = True;
		Image19->Enabled = True;
		Image20->Enabled = True;
		Image21->Enabled = True;
		Image22->Enabled = True;
		Image23->Enabled = True;
		Image24->Enabled = True;
}

void TFiveByFive:: TagRes()
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
		Image16->Tag = 0;
		Image17->Tag = 0;
		Image18->Tag = 0;
		Image19->Tag = 0;
		Image20->Tag = 0;
		Image21->Tag = 0;
		Image22->Tag = 0;
		Image23->Tag = 0;
		Image24->Tag = 0;
}
//---------------------------------------------------------------------------

void __fastcall TFiveByFive::OnClose(TObject *Sender)
{
		FiveByFive->Close();
		Start->Close();
}

void __fastcall TFiveByFive::MenuExitClick(TObject *Sender)
{
	if(CheckWinCondition()==2 || CheckWinCondition()==1)
	{
		FiveByFive->Close();
		Clearing();
        TagRes();
		Active();
		Start->Show();
	}
}
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------

