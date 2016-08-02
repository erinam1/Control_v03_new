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
#pragma link "sCheckBox"
#pragma link "EhLibMTE"
#pragma resource "*.dfm"
TfrmMain *frmMain;
//---------------------------------------------------------------------------
__fastcall TfrmMain::TfrmMain(TComponent* Owner)
   : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmMain::FormCreate(TObject *Sender)
{  // Глобальный настройки призапуске
   // status=report;            // TODO: по умолчанию - первая страница Отчеты
   status=company;            // первая страница Пользователи
   ViewInterface(status);
}
//---------------------------------------------------------------------------
void __fastcall TfrmMain::ViewInterface(TStatus stat)
{  // Отображаем интерфейс в зависимости от статуса
   // Все выключить
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
      case none: // не определено - все выключить
      break;
      case report: // отчеты
         gbReport->Align=alClient;
         gbRepDat->Align=alClient;
         gbReport->Visible=true;
         gbRepDat->Visible=true;
      break;
      case load: // загрузка данных
         gbLoad->Align=alClient;
         gbEvents->Align=alClient;
         memLoad->Text="";
         gbLoad->Visible=true;
         gbEvents->Visible=true;
      break;
      case company: // пользователи и компании
         gbCompany->Align=alClient;
         gbStaff->Align=alClient;
         gbCompany->Visible=true;
         gbStaff->Visible=true;
      break;
      case equip: // оборудование
         gbDisp->Align=alClient;
         gbEquip->Align=alClient;
         gbDisp->Visible=true;
         gbEquip->Visible=true;
      break;
      case logs: // журнал
      break;
   }
   pnlLeftResize(frmMain);
}
//---------------------------------------------------------------------------

void __fastcall TfrmMain::btnReportsClick(TObject *Sender)
{  // отчеты
   status=report;
   ViewInterface(status);
}
//---------------------------------------------------------------------------

void __fastcall TfrmMain::btnLoadClick(TObject *Sender)
{  // загрузка данных
   status=load;
   ViewInterface(status);
}
//---------------------------------------------------------------------------

void __fastcall TfrmMain::btnStaffClick(TObject *Sender)
{  // Компании-Сотрудники
   DM->Activity(status, false);   // отключить все прошлые подключения
   status=company;
   DM->Activity(status, true);    // подключить нужные таблицы
   ViewInterface(status);         // отобразить интерфейс
}
//---------------------------------------------------------------------------

void __fastcall TfrmMain::btnEquipClick(TObject *Sender)
{  // оборудование
   status=equip;
   ViewInterface(status);
}
//---------------------------------------------------------------------------

void __fastcall TfrmMain::btnLogsClick(TObject *Sender)
{  // логи
   status=logs;
   ViewInterface(status);
}
//---------------------------------------------------------------------------

void __fastcall TfrmMain::pnlLeftResize(TObject *Sender)
{  // Изменение ширины компонентов при изменении ширины панелей
   switch (status)
   {
      case none: // не определено - все выключить
      break;
      case report: // отчеты
      break;
      case load: // загрузка данных
      break;
      case company: // пользователи
         dbgCompany->Columns->Items[0]->Width = dbgCompany->ClientWidth*0.9;
         dbgStaff->Columns->Items[0]->Width = dbgStaff->ClientWidth*0.5;
         dbgStaff->Columns->Items[1]->Width = dbgStaff->ClientWidth*0.15;
         dbgStaff->Columns->Items[2]->Width = dbgStaff->ClientWidth*0.15;
         dbgStaff->Columns->Items[3]->Width = dbgStaff->ClientWidth*0.15;
      break;
      case equip: // оборудование
      break;
      case logs: // журнал
      break;
   }
}
//---------------------------------------------------------------------------

void __fastcall TfrmMain::btnOkCompanyClick(TObject *Sender)
{  // Внести изменения в Компании и закрыть панель детальной информации
   if(DM->mtCompany->State==dsEdit || DM->mtCompany->State==dsInsert)
   {
      dbgCompany->RowDetailPanel->Visible = false;  // без этого error "ListIndex out of bounds (-1)"
      DM->mtCompany->Post();
   }
   dbgCompany->RowDetailPanel->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TfrmMain::btnCancelCompanyClick(TObject *Sender)
{  // Отменить изменения в Компании и закрыть панель детальной информации
   if(DM->mtCompany->State==dsEdit || DM->mtCompany->State==dsInsert)
   {
      dbgCompany->RowDetailPanel->Visible = false;  // без этого error "ListIndex out of bounds (-1)"
      DM->mtCompany->Cancel();
   }
   dbgCompany->RowDetailPanel->Visible = false;   
}
//---------------------------------------------------------------------------

void __fastcall TfrmMain::btnCompanyEditClick(TObject *Sender)
{  // Перейти в режим редактирования, показать панель детальной информации
   DM->mtCompany->Edit();
   dbgCompany->RowDetailPanel->Visible = true;
   edCompanyShortName->SetFocus();
}
//---------------------------------------------------------------------------

void __fastcall TfrmMain::btnCompanyAddClick(TObject *Sender)
{  // Перейти в режим добавления, показать панель детальной информации
   DM->mtCompany->Insert();
   dbgCompany->RowDetailPanel->Visible = true;
   cbCompanyStatus->Checked = false;
   edCompanyShortName->SetFocus();
}
//---------------------------------------------------------------------------

void __fastcall TfrmMain::btnCompanyDelClick(TObject *Sender)
{  // TODO: удалить компанию
   // проверить наличие сотрудников у компании
   // если сотрудников нет - удалить компанию
   // (при этом выдать запрос "Удалить / Перенести в архив")
   // если есть сотрудники - пометить ее как архивную
}
//---------------------------------------------------------------------------

void __fastcall TfrmMain::btnCompanyShowAllClick(TObject *Sender)
{  // Отобразить все компании / скрыть "архивные" компании
   DM->qCompany->Active=false;
   DM->mtCompany->Active=false;
   DM->qCompany->SQL->Clear();
   if (btnCompanyShowAll->Down) // отобразить все
   {
      DM->qCompany->SQL->Add("SELECT id_comp, short_name, full_name, address, status, note ");
      DM->qCompany->SQL->Add("FROM company;");
      btnCompanyShowAll->Hint = "Показать активные | Отобразить только действующие компании (активные)";
   }
   else   // нормальное состояние - архивные скрыты
   {
      DM->qCompany->SQL->Add("SELECT id_comp, short_name, full_name, address, status, note ");
      DM->qCompany->SQL->Add("FROM company WHERE status=0;");
      btnCompanyShowAll->Hint = "Показать все | Отобразить все компании (активные+в архиве)";
   }
   DM->qCompany->Active=true;
   DM->mtCompany->Active=true;
   dbgCompany->Refresh();
   //dbgCompanySortMarkingChanged(Sender); // и отсортировать
}
//---------------------------------------------------------------------------

void __fastcall TfrmMain::btnCompanyExcelClick(TObject *Sender)
{
   // TODO: Список компаний в Excel
      
}
//---------------------------------------------------------------------------
/*
void __fastcall TfrmMain::dbgCompanySortMarkingChanged(TObject *Sender)
{  // Сортировка Компаний
   DM->qCompany->Active=false;
   DM->mtCompany->Active=false;
   DM->qCompany->SQL->Clear();
   switch (dbgCompany->Columns->Items[0]->Title->SortMarker)
   {
      case smUpEh:
//         DM->qCompany->SQL->Add("SELECT id_comp, short_name, full_name, address, status, note ");
//         DM->qCompany->SQL->Add("FROM company ORDER BY short_name ASC;");
         DM->mtCompany->SortByFields("short_name");
      break;
      case smDownEh:
         DM->qCompany->SQL->Add("SELECT id_comp, short_name, full_name, address, status, note ");
         DM->qCompany->SQL->Add("FROM company ORDER BY short_name DESC;");
      break;
      case smNoneEh:
         DM->qCompany->SQL->Add("SELECT id_comp, short_name, full_name, address, status, note ");
         DM->qCompany->SQL->Add("FROM company;");
      break;
   }
   DM->qCompany->Active=true;
   DM->mtCompany->Active=true;
   dbgCompany->Refresh();
}      */
//---------------------------------------------------------------------------

