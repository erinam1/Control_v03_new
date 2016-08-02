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
#include "sCheckBox.hpp"

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
   TsBitBtn *btnCompanyAdd;
   TsBitBtn *btnCompanyDel;
   TsBitBtn *btnCompanyEdit;
   TsBitBtn *btnAddStaff;
   TsBitBtn *btnDelStaff;
   TsBitBtn *btnEditStaff;
   TsBitBtn *btnExcelStaff;
   TsBitBtn *btnPrintStaff;
   TDBEditEh *edCompanyShortName;
   TDBEditEh *edCompanyFullName;
   TLabel *Label1;
   TLabel *Label2;
   TLabel *Label3;
   TDBEditEh *edCompanyAddress;
   TDBEditEh *edCompanyNote;
   TLabel *Label4;
   TButton *btnOkCompany;
   TButton *btnCancelCompany;
   TLabel *Label5;
   TLabel *Label6;
   TLabel *Label7;
   TDBEditEh *edStaffSecondName;
   TDBEditEh *edStaffFirstName;
   TDBEditEh *edStaffLastName;
   TDBLookupComboboxEh *DBLookupComboboxEh1;
   TLabel *Label8;
   TLabel *Label9;
   TButton *btnOkStaff;
   TButton *btnCancelStaff;
   TComboBox *ComboBox1;
   TDBComboBoxEh *DBComboBoxEh1;
   TDBCheckBoxEh *cbCompanyStatus;
   TsPanel *sPanel1;
   TsEdit *edCompanySearch;
   TsBitBtn *btnCompanySearch;
   TsSpeedButton *btnCompanyShowAll;
   TsBitBtn *btnCompanyExcel;
   void __fastcall FormCreate(TObject *Sender);
   void __fastcall btnReportsClick(TObject *Sender);
   void __fastcall btnLoadClick(TObject *Sender);
   void __fastcall btnStaffClick(TObject *Sender);
   void __fastcall btnEquipClick(TObject *Sender);
   void __fastcall btnLogsClick(TObject *Sender);
   void __fastcall pnlLeftResize(TObject *Sender);
   void __fastcall btnOkCompanyClick(TObject *Sender);
   void __fastcall btnCancelCompanyClick(TObject *Sender);
   void __fastcall btnCompanyEditClick(TObject *Sender);
   void __fastcall btnCompanyAddClick(TObject *Sender);
   void __fastcall btnCompanyDelClick(TObject *Sender);
   void __fastcall btnCompanyShowAllClick(TObject *Sender);
   void __fastcall btnCompanyExcelClick(TObject *Sender);
//   void __fastcall dbgCompanySortMarkingChanged(TObject *Sender);
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
