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
{ // ¬ыполн€ем подключение в зависимости от статуса
   switch (stat)
   {
      case none: // не определено - все выключить
      break;
      case report: // отчеты

      break;
      case load: // загрузка данных

      break;
      case company: // пользователи
         qCompany->Active=active;
         qStaff->Active=active;
         mtCompany->Active=active;
         mtStaff->Active=active;
      break;
      case equip: // оборудование
      break;
      case logs: // журнал
      break;
   }
}

