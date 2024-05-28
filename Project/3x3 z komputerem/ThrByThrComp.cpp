//---------------------------------------------------------------------------

#include <vcl.h>
#include <cstdlib>
#include<list>
#include <vector>
#include <algorithm>
#include <iostream>
#pragma hdrstop

#include "ThrByThrComp.h"
#include "Menu.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//const char CurryPlayerTaste =  'x';
//char ostatniRuch;
//int ruchComp;
//int sqX;
//int number;
//int valueToBeDeleted;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner): TForm(Owner)
{
		CurryPlayer->Caption =CurryPlayerTaste;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::XO1Click(TObject *Sender)
{
	 if(CurryPlayerTaste=='x')
	 {
		sq1=CurryPlayerTaste;
		XO1->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/x.bmp");
		//CurryPlayerTaste='o';
		CurryPlayer->Caption =CurryPlayerTaste;
		XO1->Enabled = False;
		if(CheckWinCondition()==1)
	 {
				if (sq1 == 'x')
				{
						Wyniki -> Caption="Wygral X!!! ";
						return;
				}
				if (sq3 == 'o')
				{
					Wyniki -> Caption="Wygral O!!! ";
						return;
				}
	 }
	  if(CheckWinCondition()==2)
	 {
		Wyniki -> Caption="REMIS";
		return;
	 }
	 }
		int valueToBeDeleted = 1;
		auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		listaPól.erase(it);
		number = listaPól.size();
		srand(time(NULL));
		if (listaPól.size() != 0)
		{
		  sqX = rand() % number;
		}
		else
		{
         sqX = 90;
		}
		ruchComp = listaPól[sqX];
		if (ruchComp == 1 && CheckWinCondition()!=2)
		{
		 sq1 = 'o';
		 XO1->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO1->Enabled = False;
		 int valueToBeDeleted = 1;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 2 && CheckWinCondition()!=2)
		{
		sq2 = 'o';
		 XO2->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO2->Enabled = False;
		 int valueToBeDeleted = 2;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 3 && CheckWinCondition()!=2)
		{
		sq3 = 'o';
		 XO3->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO3->Enabled = False;
		 int valueToBeDeleted = 3;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 4 && CheckWinCondition()!=2)
		{
		 sq4 = 'o';
		 XO4->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO4->Enabled = False;
		 int valueToBeDeleted = 4;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 5 && CheckWinCondition()!=2)
		{
		sq5 = 'o';
		 XO5->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO5->Enabled = False;
		 int valueToBeDeleted = 5;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 6 && CheckWinCondition()!=2)
		{
		sq6 = 'o';
		 XO6->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO6->Enabled = False;
		 int valueToBeDeleted = 6;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 7 && CheckWinCondition()!=2)
		{
		sq7 = 'o';
		 XO7->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO7->Enabled = False;
		 int valueToBeDeleted = 7;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 8 && CheckWinCondition()!=2)
		{
		sq8 = 'o';
		 XO8->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO8->Enabled = False;
		 int valueToBeDeleted = 8;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 9 && CheckWinCondition()!=2)
		{
		sq9 = 'o';
		 XO9->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO9->Enabled = False;
         int valueToBeDeleted = 9;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
        	if(CheckWinCondition()==1)
	 {
				if (sq5 == 'x')
				{
						Wyniki -> Caption="Wygral X!!! ";
						return;
				}
				if (sq5 == 'o')
				{
					Wyniki -> Caption="Wygral O!!! ";
						return;
				}
	 }
	  if(CheckWinCondition()==2)
	 {
		Wyniki -> Caption="REMIS";
		return;
	 }
 }
void __fastcall TForm3::XO2Click(TObject *Sender)
{
	 if(CurryPlayerTaste=='x')
	 {
		sq2=CurryPlayerTaste;
		XO2->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/x.bmp");
		//CurryPlayerTaste='o';
		CurryPlayer->Caption =CurryPlayerTaste;
		XO2->Enabled = False;
		if(CheckWinCondition()==1)
	 {
				if (sq2 == 'x')
				{
						Wyniki -> Caption="Wygral X!!! ";
						return;
				}
				if (sq2 == 'o')
				{
					Wyniki -> Caption="Wygral O!!! ";
						return;
				}
	 }
	  if(CheckWinCondition()==2)
	 {
		Wyniki -> Caption="REMIS";
		return;
	 }
	 }
		int valueToBeDeleted = 2;
		auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		listaPól.erase(it);
		number = listaPól.size();
		srand(time(NULL));
		if (listaPól.size() != 0)
		{
		  sqX = rand() % number;
		}
		else
		{
		 sqX = 90;
		}
		ruchComp = listaPól[sqX];
		if (ruchComp == 1 && CheckWinCondition()!=2)
		{
		 sq1 = 'o';
		 XO1->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO1->Enabled = False;
		 int valueToBeDeleted = 1;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 2 && CheckWinCondition()!=2)
		{
		 sq2 = 'o';
		 XO2->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO2->Enabled = False;
		 int valueToBeDeleted = 2;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 3 && CheckWinCondition()!=2)
		{
		 sq3 = 'o';
		 XO3->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO3->Enabled = False;
		 int valueToBeDeleted = 3;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 4 && CheckWinCondition()!=2)
		{
		 sq4 = 'o';
		 XO4->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO4->Enabled = False;
		 int valueToBeDeleted = 4;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 5 && CheckWinCondition()!=2)
		{
		 sq5 = 'o';
		 XO5->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO5->Enabled = False;
		 int valueToBeDeleted = 5;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 6 && CheckWinCondition()!=2)
		{
		 sq6 = 'o';
		 XO6->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO6->Enabled = False;
		 int valueToBeDeleted = 6;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 7 && CheckWinCondition()!=2)
		{
		 sq7 = 'o';
		 XO7->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO7->Enabled = False;
		 int valueToBeDeleted = 7;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 8 && CheckWinCondition()!=2)
		{
		 sq8 = 'o';
		 XO8->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO8->Enabled = False;
		 int valueToBeDeleted = 8;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 9 && CheckWinCondition()!=2)
		{
		 sq9 = 'o';
		 XO9->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO9->Enabled = False;
		 int valueToBeDeleted = 9;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
        	if(CheckWinCondition()==1)
	 {
				if (sq5 == 'x')
				{
						Wyniki -> Caption="Wygral X!!! ";
						return;
				}
				if (sq5 == 'o')
				{
					Wyniki -> Caption="Wygral O!!! ";
						return;
				}
	 }
	  if(CheckWinCondition()==2)
	 {
		Wyniki -> Caption="REMIS";
		return;
	 }
}
void __fastcall TForm3::XO3Click(TObject *Sender)
{
	 if(CurryPlayerTaste=='x')
	 {
	   sq3=CurryPlayerTaste;
		XO3->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/x.bmp");
		//CurryPlayerTaste='o';
		CurryPlayer->Caption =CurryPlayerTaste;
		XO3->Enabled = False;
		if(CheckWinCondition()==1)
	 {
				if (sq3 == 'x')
				{
						Wyniki -> Caption="Wygral X!!! ";
						return;
				}
				if (sq3 == 'o')
				{
					Wyniki -> Caption="Wygral O!!! ";
						return;
				}
	 }
	  if(CheckWinCondition()==2)
	 {
		Wyniki -> Caption="REMIS";
		return;
	 }
	 }
		int valueToBeDeleted = 3;
		auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		listaPól.erase(it);
		number = listaPól.size();
		srand(time(NULL));
		if (listaPól.size() != 0)
		{
		  sqX = rand() % number;
		}
		else
		{
		 sqX = 90;
		}
		ruchComp = listaPól[sqX];
		if (ruchComp == 1 && CheckWinCondition()!=2)
		{
		 sq1 = 'o';
		 XO1->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO1->Enabled = False;
		 int valueToBeDeleted = 1;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 2 && CheckWinCondition()!=2)
		{
		 sq2 = 'o';
		 XO2->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO2->Enabled = False;
		 int valueToBeDeleted = 2;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 3 && CheckWinCondition()!=2)
		{
		 sq3 = 'o';
		 XO3->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO3->Enabled = False;
		 int valueToBeDeleted = 3;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 4 && CheckWinCondition()!=2)
		{
		 sq4 = 'o';
		 XO4->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO4->Enabled = False;
		 int valueToBeDeleted = 4;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 5 && CheckWinCondition()!=2)
		{
		 sq5 = 'o';
		 XO5->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO5->Enabled = False;
		 int valueToBeDeleted = 5;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 6 && CheckWinCondition()!=2)
		{
		 sq6 = 'o';
		 XO6->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO6->Enabled = False;
		 int valueToBeDeleted = 6;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 7 && CheckWinCondition()!=2)
		{
		 sq7 = 'o';
		 XO7->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO7->Enabled = False;
		 int valueToBeDeleted = 7;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 8 && CheckWinCondition()!=2)
		{
		 sq8 = 'o';
		 XO8->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO8->Enabled = False;
		 int valueToBeDeleted = 8;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 9 && CheckWinCondition()!=2)
		{
		 sq9 = 'o';
		 XO9->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO9->Enabled = False;
		 int valueToBeDeleted = 9;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
        	if(CheckWinCondition()==1)
	 {
				if (sq5 == 'x')
				{
						Wyniki -> Caption="Wygral X!!! ";
						return;
				}
				if (sq5 == 'o')
				{
					Wyniki -> Caption="Wygral O!!! ";
						return;
				}
	 }
	  if(CheckWinCondition()==2)
	 {
		Wyniki -> Caption="REMIS";
		return;
	 }
}
void __fastcall TForm3::XO4Click(TObject *Sender)
{
	 if(CurryPlayerTaste=='x')
	 {
		sq4=CurryPlayerTaste;
		XO4->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/x.bmp");
		//CurryPlayerTaste='o';
		CurryPlayer->Caption =CurryPlayerTaste;
		XO4->Enabled = False;
		if(CheckWinCondition()==1)
	 {
				if (sq4 == 'x')
				{
						Wyniki -> Caption="Wygral X!!! ";
						return;
				}
				if (sq4 == 'o')
				{
					Wyniki -> Caption="Wygral O!!! ";
						return;
				}
	 }
	  if(CheckWinCondition()==2)
	 {
		Wyniki -> Caption="REMIS";
		return;
	 }
	 }
		int valueToBeDeleted = 4;
		auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		listaPól.erase(it);
		number = listaPól.size();
		srand(time(NULL));
		if (listaPól.size() != 0)
		{
		  sqX = rand() % number;
		}
		else
		{
		 sqX = 90;
		}
		ruchComp = listaPól[sqX];
		if (ruchComp == 1 && CheckWinCondition()!=2)
		{
		 sq1 = 'o';
		 XO1->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO1->Enabled = False;
		 int valueToBeDeleted = 1;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 2 && CheckWinCondition()!=2)
		{
		 sq2 = 'o';
		 XO2->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO2->Enabled = False;
		 int valueToBeDeleted = 2;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 3 && CheckWinCondition()!=2)
		{
		 sq3 = 'o';
		 XO3->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO3->Enabled = False;
		 int valueToBeDeleted = 3;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 4 && CheckWinCondition()!=2)
		{
		 sq4 = 'o';
		 XO4->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO4->Enabled = False;
		 int valueToBeDeleted = 4;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 5 && CheckWinCondition()!=2)
		{
		 sq5 = 'o';
		 XO5->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO5->Enabled = False;
		 int valueToBeDeleted = 5;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 6 && CheckWinCondition()!=2)
		{
		 sq6 = 'o';
		 XO6->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO6->Enabled = False;
		 int valueToBeDeleted = 6;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 7 && CheckWinCondition()!=2)
		{
		 sq7 = 'o';
		 XO7->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO7->Enabled = False;
		 int valueToBeDeleted = 7;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 8 && CheckWinCondition()!=2)
		{
		 sq8 = 'o';
		 XO8->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO8->Enabled = False;
		 int valueToBeDeleted = 8;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 9 && CheckWinCondition()!=2)
		{
		 sq9 = 'o';
		 XO9->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO9->Enabled = False;
		 int valueToBeDeleted = 9;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
        	if(CheckWinCondition()==1)
	 {
				if (sq5 == 'x')
				{
						Wyniki -> Caption="Wygral X!!! ";
						return;
				}
				if (sq5 == 'o')
				{
					Wyniki -> Caption="Wygral O!!! ";
						return;
				}
	 }
	  if(CheckWinCondition()==2)
	 {
		Wyniki -> Caption="REMIS";
		return;
	 }
}
void __fastcall TForm3::XO5Click(TObject *Sender)
{
	 if(CurryPlayerTaste=='x')
	 {
		sq5=CurryPlayerTaste;
		XO5->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/x.bmp");
		//CurryPlayerTaste='o';
		CurryPlayer->Caption =CurryPlayerTaste;
		XO5->Enabled = False;
		if(CheckWinCondition()==1)
	 {
				if (sq5 == 'x')
				{
						Wyniki -> Caption="Wygral X!!! ";
						return;
				}
				if (sq5 == 'o')
				{
					Wyniki -> Caption="Wygral O!!! ";
						return;
				}
	 }
	  if(CheckWinCondition()==2)
	 {
		Wyniki -> Caption="REMIS";
		return;
	 }
	 }
		int valueToBeDeleted = 5;
		auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		listaPól.erase(it);
		number = listaPól.size();
		srand(time(NULL));
		if (listaPól.size() != 0)
		{
		  sqX = rand() % number;
		}
		else
		{
		 sqX = 90;
		}
		ruchComp = listaPól[sqX];
		if (ruchComp == 1 && CheckWinCondition()!=2)
		{
		 sq1 = 'o';
		 XO1->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO1->Enabled = False;
		 int valueToBeDeleted = 1;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 2 && CheckWinCondition()!=2)
		{
		 sq2 = 'o';
		 XO2->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO2->Enabled = False;
		 int valueToBeDeleted = 2;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 3 && CheckWinCondition()!=2)
		{
		 sq3 = 'o';
		 XO3->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO3->Enabled = False;
		 int valueToBeDeleted = 3;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 4 && CheckWinCondition()!=2)
		{
		 sq4 = 'o';
		 XO4->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO4->Enabled = False;
		 int valueToBeDeleted = 4;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 5 && CheckWinCondition()!=2)
		{
		 sq5 = 'o';
		 XO5->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO5->Enabled = False;
		 int valueToBeDeleted = 5;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 6 && CheckWinCondition()!=2)
		{
		 sq6 = 'o';
		 XO6->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO6->Enabled = False;
		 int valueToBeDeleted = 6;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 7 && CheckWinCondition()!=2)
		{
		 sq7 = 'o';
		 XO7->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO7->Enabled = False;
		 int valueToBeDeleted = 7;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 8 && CheckWinCondition()!=2)
		{
		 sq8 = 'o';
		 XO8->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO8->Enabled = False;
		 int valueToBeDeleted = 8;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 9 && CheckWinCondition()!=2)
		{
		 sq9 = 'o';
		 XO9->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO9->Enabled = False;
		 int valueToBeDeleted = 9;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
        	if(CheckWinCondition()==1)
	 {
				if (sq5 == 'x')
				{
						Wyniki -> Caption="Wygral X!!! ";
						return;
				}
				if (sq5 == 'o')
				{
					Wyniki -> Caption="Wygral O!!! ";
						return;
				}
	 }
	  if(CheckWinCondition()==2)
	 {
		Wyniki -> Caption="REMIS";
		return;
	 }
}
void __fastcall TForm3::XO6Click(TObject *Sender)
{
	 if(CurryPlayerTaste=='x')
	 {
		sq6=CurryPlayerTaste;
		XO6->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/x.bmp");
		//CurryPlayerTaste='o';
		CurryPlayer->Caption =CurryPlayerTaste;
		XO6->Enabled = False;
		if(CheckWinCondition()==1)
	 {
				if (sq6 == 'x')
				{
						Wyniki -> Caption="Wygral X!!! ";
						return;
				}
				if (sq6 == 'o')
				{
					Wyniki -> Caption="Wygral O!!! ";
						return;
				}
	 }
	  if(CheckWinCondition()==2)
	 {
		Wyniki -> Caption="REMIS";
		return;
	 }
	 }
		int valueToBeDeleted = 6;
		auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		listaPól.erase(it);
		number = listaPól.size();
		srand(time(NULL));
		if (listaPól.size() != 0)
		{
		  sqX = rand() % number;
		}
		else
		{
         sqX = 90;
		}
		ruchComp = listaPól[sqX];
		if (ruchComp == 1 && CheckWinCondition()!=2)
		{
		 sq1 = 'o';
		 XO1->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO1->Enabled = False;
		 int valueToBeDeleted = 1;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 2 && CheckWinCondition()!=2)
		{
		 sq2 = 'o';
		 XO2->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO2->Enabled = False;
		 int valueToBeDeleted = 2;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 3 && CheckWinCondition()!=2)
		{
		 sq3 = 'o';
		 XO3->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO3->Enabled = False;
		 int valueToBeDeleted = 3;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 4 && CheckWinCondition()!=2)
		{
		 sq4 = 'o';
		 XO4->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO4->Enabled = False;
		 int valueToBeDeleted = 4;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 5 && CheckWinCondition()!=2)
		{
		 sq5 = 'o';
		 XO5->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO5->Enabled = False;
		 int valueToBeDeleted = 5;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 6 && CheckWinCondition()!=2)
		{
		 sq6 = 'o';
		 XO6->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO6->Enabled = False;
		 int valueToBeDeleted = 6;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 7 && CheckWinCondition()!=2)
		{
		 sq7 = 'o';
		 XO7->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO7->Enabled = False;
		 int valueToBeDeleted = 7;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 8 && CheckWinCondition()!=2)
		{
		 sq8 = 'o';
		 XO8->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO8->Enabled = False;
		 int valueToBeDeleted = 8;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 9 && CheckWinCondition()!=2)
		{
		 sq9 = 'o';
		 XO9->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO9->Enabled = False;
		 int valueToBeDeleted = 9;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
        	if(CheckWinCondition()==1)
	 {
				if (sq5 == 'x')
				{
						Wyniki -> Caption="Wygral X!!! ";
						return;
				}
				if (sq5 == 'o')
				{
					Wyniki -> Caption="Wygral O!!! ";
						return;
				}
	 }
	  if(CheckWinCondition()==2)
	 {
		Wyniki -> Caption="REMIS";
		return;
	 }
}
void __fastcall TForm3::XO9Click(TObject *Sender)
{
	 if(CurryPlayerTaste=='x')
	 {
		sq9=CurryPlayerTaste;
		XO9->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/x.bmp");
		//CurryPlayerTaste='o';
		CurryPlayer->Caption =CurryPlayerTaste;
		XO9->Enabled = False;
		if(CheckWinCondition()==1)
	 {
				if (sq9 == 'x')
				{
						Wyniki -> Caption="Wygral X!!! ";
						return;
				}
				if (sq9 == 'o')
				{
					Wyniki -> Caption="Wygral O!!! ";
						return;
				}
	 }
	  if(CheckWinCondition()==2)
	 {
		Wyniki -> Caption="REMIS";
		return;
	 }
	 }
		int valueToBeDeleted = 9;
		auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		listaPól.erase(it);
		number = listaPól.size();
		srand(time(NULL));
		if (listaPól.size() != 0)
		{
		  sqX = rand() % number;
		}
		else
		{
		 sqX = 90;
		}
		ruchComp = listaPól[sqX];
		if (ruchComp == 1 && CheckWinCondition()!=2)
		{
		 sq1 = 'o';
		 XO1->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO1->Enabled = False;
		 int valueToBeDeleted = 1;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 2 && CheckWinCondition()!=2)
		{
		 sq2 = 'o';
		 XO2->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO2->Enabled = False;
		 int valueToBeDeleted = 2;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 3 && CheckWinCondition()!=2)
		{
		 sq3 = 'o';
		 XO3->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO3->Enabled = False;
		 int valueToBeDeleted = 3;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 4 && CheckWinCondition()!=2)
		{
		 sq4 = 'o';
		 XO4->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO4->Enabled = False;
		 int valueToBeDeleted = 4;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 5 && CheckWinCondition()!=2)
		{
		 sq5 = 'o';
		 XO5->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO5->Enabled = False;
		 int valueToBeDeleted = 5;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 6 && CheckWinCondition()!=2)
		{
		 sq6 = 'o';
		 XO6->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO6->Enabled = False;
		 int valueToBeDeleted = 6;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 7 && CheckWinCondition()!=2)
		{
		 sq7 = 'o';
		 XO7->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO7->Enabled = False;
		 int valueToBeDeleted = 7;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 8 && CheckWinCondition()!=2)
		{
		 sq8 = 'o';
		 XO8->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO8->Enabled = False;
		 int valueToBeDeleted = 8;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 9 && CheckWinCondition()!=2)
		{
		 sq9 = 'o';
		 XO9->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO9->Enabled = False;
		 int valueToBeDeleted = 9;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
        	if(CheckWinCondition()==1)
	 {
				if (sq5 == 'x')
				{
						Wyniki -> Caption="Wygral X!!! ";
						return;
				}
				if (sq5 == 'o')
				{
					Wyniki -> Caption="Wygral O!!! ";
						return;
				}
	 }
	  if(CheckWinCondition()==2)
	 {
		Wyniki -> Caption="REMIS";
		return;
	 }
}
void __fastcall TForm3::XO8Click(TObject *Sender)
{
	 if(CurryPlayerTaste=='x')
	 {
		sq8=CurryPlayerTaste;
		XO8->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/x.bmp");
		//CurryPlayerTaste='o';
		CurryPlayer->Caption =CurryPlayerTaste;
		XO8->Enabled = False;
        if(CheckWinCondition()==1)
	 {
				if (sq8 == 'x')
				{
						Wyniki -> Caption="Wygral X!!! ";
						return;
				}
				if (sq8 == 'o')
				{
					Wyniki -> Caption="Wygral O!!! ";
						return;
				}
	 }
	  if(CheckWinCondition()==2)
	 {
		Wyniki -> Caption="REMIS";
		return;
	 }
	 }
		int valueToBeDeleted = 8;
		auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		listaPól.erase(it);
		number = listaPól.size();
		srand(time(NULL));
		if (listaPól.size() != 0)
		{
		  sqX = rand() % number;
		}
		else
		{
         sqX = 90;
		}
		ruchComp = listaPól[sqX];
		if (ruchComp == 1 && CheckWinCondition()!=2)
		{
		 sq1 = 'o';
		 XO1->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO1->Enabled = False;
		 int valueToBeDeleted = 1;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 2 && CheckWinCondition()!=2)
		{
		 sq2 = 'o';
		 XO2->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO2->Enabled = False;
		 int valueToBeDeleted = 2;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 3 && CheckWinCondition()!=2)
		{
		 sq3 = 'o';
		 XO3->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO3->Enabled = False;
		 int valueToBeDeleted = 3;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 4 && CheckWinCondition()!=2)
		{
		 sq4 = 'o';
		 XO4->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO4->Enabled = False;
		 int valueToBeDeleted = 4;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 5 && CheckWinCondition()!=2)
		{
		 sq5 = 'o';
		 XO5->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO5->Enabled = False;
		 int valueToBeDeleted = 5;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 6 && CheckWinCondition()!=2)
		{
		 sq6 = 'o';
		 XO6->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO6->Enabled = False;
		 int valueToBeDeleted = 6;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 7 && CheckWinCondition()!=2)
		{
		 sq7 = 'o';
		 XO7->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO7->Enabled = False;
		 int valueToBeDeleted = 7;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 8 && CheckWinCondition()!=2)
		{
		 sq8 = 'o';
		 XO8->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO8->Enabled = False;
		 int valueToBeDeleted = 8;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 9 && CheckWinCondition()!=2)
		{
		 sq9 = 'o';
		 XO9->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO9->Enabled = False;
		 int valueToBeDeleted = 9;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
        	if(CheckWinCondition()==1)
	 {
				if (sq5 == 'x')
				{
						Wyniki -> Caption="Wygral X!!! ";
						return;
				}
				if (sq5 == 'o')
				{
					Wyniki -> Caption="Wygral O!!! ";
						return;
				}
	 }
	  if(CheckWinCondition()==2)
	 {
		Wyniki -> Caption="REMIS";
		return;
	 }
}
void __fastcall TForm3::XO7Click(TObject *Sender)
{
	 if(CurryPlayerTaste=='x')
	 {
		sq7=CurryPlayerTaste;
		XO7->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/x.bmp");
		//CurryPlayerTaste='o';
		CurryPlayer->Caption =CurryPlayerTaste;
		XO7->Enabled = False;
        if(CheckWinCondition()==1)
	 {
				if (sq9 == 'x')
				{
						Wyniki -> Caption="Wygral X!!! ";
						return;
				}
				if (sq9 == 'o')
				{
					Wyniki -> Caption="Wygral O!!! ";
						return;
				}
	 }
	  if(CheckWinCondition()==2)
	 {
		Wyniki -> Caption="REMIS";
		return;
	 }
	 }
		int valueToBeDeleted = 7;
		auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		listaPól.erase(it);
		number = listaPól.size();
		srand(time(NULL));
		if (listaPól.size() != 0)
		{
		  sqX = rand() % number;
		}
		else
		{
		 sqX = 90;
		}
		ruchComp = listaPól[sqX];
		if (ruchComp == 1 && CheckWinCondition()!=2)
		{
		 sq1 = 'o';
		 XO1->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO1->Enabled = False;
		 int valueToBeDeleted = 1;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 2 && CheckWinCondition()!=2)
		{
		 sq2 = 'o';
		 XO2->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO2->Enabled = False;
		 int valueToBeDeleted = 2;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 3 && CheckWinCondition()!=2)
		{
		 sq3 = 'o';
		 XO3->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO3->Enabled = False;
		 int valueToBeDeleted = 3;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 4 && CheckWinCondition()!=2)
		{
		 sq4 = 'o';
		 XO4->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO4->Enabled = False;
		 int valueToBeDeleted = 4;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 5 && CheckWinCondition()!=2)
		{
		 sq5 = 'o';
		 XO5->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO5->Enabled = False;
		 int valueToBeDeleted = 5;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 6 && CheckWinCondition()!=2)
		{
		 sq6 = 'o';
		 XO6->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO6->Enabled = False;
		 int valueToBeDeleted = 6;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 7 && CheckWinCondition()!=2)
		{
		 sq7 = 'o';
		 XO7->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO7->Enabled = False;
		 int valueToBeDeleted = 7;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 8 && CheckWinCondition()!=2)
		{
		 sq8 = 'o';
		 XO8->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO8->Enabled = False;
		 int valueToBeDeleted = 8;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
		 if (ruchComp == 9 && CheckWinCondition()!=2)
		{
		 sq9 = 'o';
		 XO9->Picture->LoadFromFile("C:/Users/iwotr/Desktop/NPG/Graphics/o.bmp");
		 XO9->Enabled = False;
		 int valueToBeDeleted = 9;
		 auto it = find(listaPól.begin(), listaPól.end(), valueToBeDeleted);
		 if (it != listaPól.end())
		 {
			listaPól.erase(it);
		 }
		}
        	if(CheckWinCondition()==1)
	 {
				if (sq5 == 'x')
				{
						Wyniki -> Caption="Wygral X!!! ";
						return;
				}
				if (sq5 == 'o')
				{
					Wyniki -> Caption="Wygral O!!! ";
						return;
				}
	 }
	  if(CheckWinCondition()==2)
	 {
		Wyniki -> Caption="REMIS";
		return;
	 }
}
//---------------------------------------------------------------------------
int TForm3:: CheckWinCondition()
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
	 if(sq4==sq5 && sq5==sq6 && sq4 != NULL )
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
	 if(sq7==sq8 && sq8==sq9 && sq7 != NULL  )
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
	 if(sq1==sq4 && sq4==sq7 && sq4 != NULL  )
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
	 if (sq2==sq5 && sq5==sq8 && sq2 != NULL )
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
	 if ( sq3==sq6 && sq6==sq9 && sq3 != NULL)
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
	 if(sq1==sq5 && sq5==sq9 && sq5 != NULL)
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
	 if (sq7==sq5 && sq5==sq3 && sq7!= NULL  )
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

	 if(sq1!=NULL && sq2!=NULL && sq3!=NULL && sq4!=NULL  && sq5!=NULL && sq6!=NULL && sq7!=NULL && sq8!=NULL && sq9!= NULL)
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
	{
		return 0;
	}
}

//---------------------------------------------------------------------------


//---------------------------------------------------------------------------

void __fastcall TForm3::OnCreate(TObject *Sender)
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
        Cofnij->Enabled = False;
}
//---------------------------------------------------------------------------

