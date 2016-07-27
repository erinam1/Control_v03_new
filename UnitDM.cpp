//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitDM.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "sSkinManager"
#pragma link "ADODataDriverEh"
#pragma link "DataDriverEh"
#pragma link "MemTableDataEh"
#pragma link "MemTableEh"
#pragma resource "*.dfm"
TDM *DM;
//---------------------------------------------------------------------------
__fastcall TDM::TDM(TComponent* Owner)
   : TDataModule(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TDM::Activity(TStatus stat, bool active)
{ // ��������� ����������� � ����������� �� �������
   switch (stat)
   {
      case none: // �� ���������� - ��� ���������
      break;
      case report: // ������

      break;
      case load: // �������� ������

      break;
      case company: // ������������
         qCompany->Active=active;
         qStaff->Active=active;
         mtCompany->Active=active;
         mtStaff->Active=active;
      break;
      case equip: // ������������
      break;
      case logs: // ������
      break;
   }
}

