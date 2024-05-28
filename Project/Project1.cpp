//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("ThrByThr.cpp", Form2);
USEFORM("FoByFo.cpp", FourByFour);
USEFORM("Menu.cpp", Tylec);
USEFORM("EkranStartowy.cpp", Start);
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
