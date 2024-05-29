//---------------------------------------------------------------------------

#ifndef MenuH
#define MenuH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TTylec : public TForm
{
__published:	// IDE-managed Components
	TButton *Button2;
	TButton *Button1;
	TButton *Button3;
	TLabel *Label1;
	TLabel *Label2;
	TButton *Button4;
	TButton *Button5;
	TButton *Button6;
	TButton *Button7;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
	void __fastcall Button6Click(TObject *Sender);
	void __fastcall Button7Click(TObject *Sender);
    void __fastcall OnClose(TObject *Sender);
private:	// User declarations
void TTylec::reset();
public:		// User declarations
	__fastcall TTylec(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TTylec *Tylec;
//---------------------------------------------------------------------------
#endif
