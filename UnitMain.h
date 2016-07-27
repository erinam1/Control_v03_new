//---------------------------------------------------------------------------

#ifndef UnitMainH
#define UnitMainH
//---------------------------------------------------------------------------
#include "Variants.h"
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "sSkinProvider.hpp"
#include "sPanel.hpp"
#include <ExtCtrls.hpp>
#include "sStatusBar.hpp"
#include <ComCtrls.hpp>
#include "sSplitter.hpp"
#include "acImage.hpp"
#include <Graphics.hpp>
#include "sSpeedButton.hpp"
#include <Buttons.hpp>
#include "sEdit.hpp"
#include "sBitBtn.hpp"
#include "sGroupBox.hpp"
#include "DBGridEh.hpp"
#include "DBGridEhGrouping.hpp"
#include "GridsEh.hpp"
#include "sMemo.hpp"
#include "DataDriverEh.hpp"
#include "MemTableDataEh.hpp"
#include "MemTableEh.hpp"
#include <ADODB.hpp>
#include <DB.hpp>
#include <Db.hpp>
#include "DBCtrlsEh.hpp"
#include <Mask.hpp>
#include "DBLookupEh.hpp"
#include "sComboBox.hpp"
//---------------------------------------------------------------------------
class TfrmMain : public TForm
{
__published:	// IDE-managed Components
   TsPanel *pnlHeader;
   TsPanel *pnlSearch;
   TsPanel *pnlFooter;
   TsStatusBar *sStatusBar1;
   TsPanel *pnlCenter;
   TsPanel *pnlLeft;
   TsPanel *pnlRight;
   TsSplitter *sSplitter1;
   TsSkinProvider *sSkinProvider1;
   TsImage *sImage1;
   TsSpeedButton *btnReports;
   TsSpeedButton *btnLoad;
   TsSpeedButton *btnStaff;
   TsSpeedButton *btnEquip;
   TsSpeedButton *btnLogs;
   TsEdit *edSearch;
   TsBitBtn *btnSearch;
        TsGroupBox *gbCompany;
   TsGroupBox *gbStaff;
        TDBGridEh *dbgCompany;
   TDBGridEh *dbgStaff;
   TsGroupBox *gbReport;
   TsGroupBox *gbRepDat;
   TDBGridEh *dbgTransRep;
   TsBitBtn *btnRep1;
   TsBitBtn *btnRep2;
   TsBitBtn *btnRep3;
   TsBitBtn *btnRep4;
   TsBitBtn *btnRep5;
   TsGroupBox *gbLoad;
   TsGroupBox *gbEvents;
   TsMemo *memLoad;
   TDBGridEh *dbgEvents;
   TsGroupBox *gbDisp;
   TsGroupBox *gbEquip;
   TDBGridEh *dbDisp;
   TDBGridEh *dbEquip;
   TsBitBtn *btnAddCompany;
   TsBitBtn *btnDelCompany;
   TsBitBtn *btnEditCompany;
   TsBitBtn *btnAddStaff;
   TsBitBtn *btnDelStaff;
   TsBitBtn *btnEditStaff;
   TsBitBtn *btnExcelStaff;
   TsBitBtn *btnPrintStaff;
   TDBEditEh *DBEditEh1;
   TDBEditEh *DBEditEh2;
   TLabel *Label1;
   TLabel *Label2;
   TLabel *Label3;
   TDBEditEh *DBEditEh3;
   TDBEditEh *DBEditEh4;
   TLabel *Label4;
   TButton *btnOkCompany;
   TButton *btnCancelCompany;
   TLabel *Label5;
   TLabel *Label6;
   TLabel *Label7;
   TDBEditEh *DBEditEh5;
   TDBEditEh *DBEditEh6;
   TDBEditEh *DBEditEh7;
   TDBLookupComboboxEh *DBLookupComboboxEh1;
   TLabel *Label8;
   TLabel *Label9;
   TButton *btnOkStaff;
   TButton *btnCancelStaff;
   TComboBox *ComboBox1;
   TDBComboBoxEh *DBComboBoxEh1;
   void __fastcall FormCreate(TObject *Sender);
   void __fastcall btnReportsClick(TObject *Sender);
   void __fastcall btnLoadClick(TObject *Sender);
   void __fastcall btnStaffClick(TObject *Sender);
   void __fastcall btnEquipClick(TObject *Sender);
   void __fastcall btnLogsClick(TObject *Sender);
   void __fastcall pnlLeftResize(TObject *Sender);
private:	// User declarations
   TStatus status;
   void __fastcall ViewInterface(TStatus stat);
public:		// User declarations
   __fastcall TfrmMain(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmMain *frmMain;
//---------------------------------------------------------------------------
#endif
