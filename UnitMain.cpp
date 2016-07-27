//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitMain.h"
#include "UnitDM.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "sSkinProvider"
#pragma link "sPanel"
#pragma link "sStatusBar"
#pragma link "sSplitter"
#pragma link "acImage"
#pragma link "sSpeedButton"
#pragma link "sEdit"
#pragma link "sBitBtn"
#pragma link "sGroupBox"
#pragma link "DBGridEh"
#pragma link "DBGridEhGrouping"
#pragma link "GridsEh"
#pragma link "sMemo"
#pragma link "DataDriverEh"
#pragma link "MemTableDataEh"
#pragma link "MemTableEh"
#pragma link "DBCtrlsEh"
#pragma link "DBLookupEh"
#pragma link "sComboBox"
#pragma resource "*.dfm"
TfrmMain *frmMain;
//---------------------------------------------------------------------------
__fastcall TfrmMain::TfrmMain(TComponent* Owner)
   : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmMain::FormCreate(TObject *Sender)
{  // ���������� ��������� ����������
   status=report;            // �� ��������� - ������ �������� ������
   ViewInterface(status);
}
//---------------------------------------------------------------------------
void __fastcall TfrmMain::ViewInterface(TStatus stat)
{  // ���������� ��������� � ����������� �� �������
   // ��� ���������
   gbReport->Visible=false;
   gbRepDat->Visible=false;
   gbLoad->Visible=false;
   gbEvents->Visible=false;
   gbCompany->Visible=false;
   gbStaff->Visible=false;
   gbDisp->Visible=false;
   gbEquip->Visible=false;
   switch (stat)
   {
      case none: // �� ���������� - ��� ���������
      break;
      case report: // ������
         gbReport->Align=alClient;
         gbRepDat->Align=alClient;
         gbReport->Visible=true;
         gbRepDat->Visible=true;
      break;
      case load: // �������� ������
         gbLoad->Align=alClient;
         gbEvents->Align=alClient;
         memLoad->Text="";
         gbLoad->Visible=true;
         gbEvents->Visible=true;
      break;
      case company: // ������������ � ��������
         gbCompany->Align=alClient;
         gbStaff->Align=alClient;
         gbCompany->Visible=true;
         gbStaff->Visible=true;
      break;
      case equip: // ������������
         gbDisp->Align=alClient;
         gbEquip->Align=alClient;
         gbDisp->Visible=true;
         gbEquip->Visible=true;
      break;
      case logs: // ������
      break;
   }
   pnlLeftResize(frmMain);
}
//---------------------------------------------------------------------------

void __fastcall TfrmMain::btnReportsClick(TObject *Sender)
{  // ������
   status=report;
   ViewInterface(status);
}
//---------------------------------------------------------------------------

void __fastcall TfrmMain::btnLoadClick(TObject *Sender)
{  // �������� ������
   status=load;
   ViewInterface(status);
}
//---------------------------------------------------------------------------

void __fastcall TfrmMain::btnStaffClick(TObject *Sender)
{  // ��������-����������
   DM->Activity(status, false);   // ��������� ��� ������� �����������
   status=company;
   DM->Activity(status, true);    // ���������� ������ �������
   ViewInterface(status);
}
//---------------------------------------------------------------------------

void __fastcall TfrmMain::btnEquipClick(TObject *Sender)
{  // ������������
   status=equip;
   ViewInterface(status);
}
//---------------------------------------------------------------------------

void __fastcall TfrmMain::btnLogsClick(TObject *Sender)
{  // ����
   status=logs;
   ViewInterface(status);
}
//---------------------------------------------------------------------------

void __fastcall TfrmMain::pnlLeftResize(TObject *Sender)
{  // ��������� ������ ����������� ��� ��������� ������ �������
   switch (status)
   {
      case none: // �� ���������� - ��� ���������
      break;
      case report: // ������
      break;
      case load: // �������� ������
      break;
      case company: // ������������
         dbgCompany->Columns->Items[0]->Width = dbgCompany->ClientWidth*0.9;
         dbgStaff->Columns->Items[0]->Width = dbgStaff->ClientWidth*0.5;
         dbgStaff->Columns->Items[1]->Width = dbgStaff->ClientWidth*0.15;
         dbgStaff->Columns->Items[2]->Width = dbgStaff->ClientWidth*0.15;
         dbgStaff->Columns->Items[3]->Width = dbgStaff->ClientWidth*0.15;
      break;
      case equip: // ������������
      break;
      case logs: // ������
      break;
   }
}
//---------------------------------------------------------------------------


