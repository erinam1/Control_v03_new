//---------------------------------------------------------------------------

#ifndef UnitDMH
#define UnitDMH
//---------------------------------------------------------------------------
#include "Variants.h"
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "sSkinManager.hpp"
#include "ADODataDriverEh.hpp"
#include "DataDriverEh.hpp"
#include "MemTableDataEh.hpp"
#include "MemTableEh.hpp"
#include <ADODB.hpp>
#include <Db.hpp>
#include <DB.hpp>
#include <ImgList.hpp>
//---------------------------------------------------------------------------
class TDM : public TDataModule
{
__published:	// IDE-managed Components
   TsSkinManager *sSkinManager1;
        TADOConnection *ADOCon;
        TADOQuery *qCompany;
        TADOQuery *qStaff;
        TDataSetDriverEh *dsdCompany;
        TDataSetDriverEh *dsdStaff;
        TMemTableEh *mtCompany;
        TMemTableEh *mtStaff;
        TDataSource *dsCompany;
        TDataSource *dsStaff;
   TImageList *ImageList1;
private:	// User declarations
public:		// User declarations
   __fastcall TDM(TComponent* Owner);
   void __fastcall Activity(TStatus stat, bool active);
};
//---------------------------------------------------------------------------
extern PACKAGE TDM *DM;
//---------------------------------------------------------------------------
#endif
