//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include "COM.h"
#include "CommandList.h"
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// Composants gérés par l'EDI
	TButton *OnBt;
	TButton *OffBt;
	TButton *StopZoomBt;
	TButton *DroiteBt;
	TButton *GaucheBt;
	TButton *StopDeplaceBt;
	TButton *HautBt;
	TButton *BasBt;
	TButton *MonterBt;
	TButton *BaisserBt;
	TTrackBar *TrackBar1;
	TButton *ModeAutoBt;
	void __fastcall OnBtClick(TObject *Sender);
	void __fastcall OffBtClick(TObject *Sender);
	void __fastcall HautBtClick(TObject *Sender);
	void __fastcall BasBtClick(TObject *Sender);
	void __fastcall StopZoomBtClick(TObject *Sender);
	void __fastcall MonterBtClick(TObject *Sender);
	void __fastcall BaisserBtClick(TObject *Sender);
	void __fastcall StopDeplaceBtClick(TObject *Sender);
	void __fastcall GaucheBtClick(TObject *Sender);
	void __fastcall DroiteBtClick(TObject *Sender);
	void __fastcall TrackBar1Change(TObject *Sender);
	void __fastcall ModeAutoBtClick(TObject *Sender);


private:	// Déclarations utilisateur
	COM serie;
	CommandList commands;
public:		// Déclarations utilisateur
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
