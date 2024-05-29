//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("Menu.cpp", Tylec);
USEFORM("ThrByThr.cpp", Form2);
USEFORM("EkranStartowy.cpp", Start);
USEFORM("FivByFive.cpp", FiveByFive);
USEFORM("FoByFo.cpp", FourByFour);
USEFORM("ThrByThrCompX.cpp", Form3);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TStart), &Start);
		Application->CreateForm(__classid(TTylec), &Tylec);
		Application->CreateForm(__classid(TForm2), &Form2);
		Application->CreateForm(__classid(TFourByFour), &FourByFour);
		Application->CreateForm(__classid(TFiveByFive), &FiveByFive);
		Application->CreateForm(__classid(TForm3), &Form3);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
