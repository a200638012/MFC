// testViewOcxPropPage.cpp : Implementation of the CtestViewOcxPropPage property page class.

#include "stdafx.h"
#include "testViewOcx.h"
#include "testViewOcxPropPage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(CtestViewOcxPropPage, COlePropertyPage)



// Message map

BEGIN_MESSAGE_MAP(CtestViewOcxPropPage, COlePropertyPage)
END_MESSAGE_MAP()



// Initialize class factory and guid

IMPLEMENT_OLECREATE_EX(CtestViewOcxPropPage, "TESTVIEWOCX.testViewOcxPropPage.1",
	0x5f0f78c3, 0x585d, 0x4ab3, 0x82, 0xbf, 0x40, 0x10, 0xb2, 0x18, 0xb0, 0xaa)



// CtestViewOcxPropPage::CtestViewOcxPropPageFactory::UpdateRegistry -
// Adds or removes system registry entries for CtestViewOcxPropPage

BOOL CtestViewOcxPropPage::CtestViewOcxPropPageFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
			m_clsid, IDS_TESTVIEWOCX_PPG);
	else
		return AfxOleUnregisterClass(m_clsid, NULL);
}



// CtestViewOcxPropPage::CtestViewOcxPropPage - Constructor

CtestViewOcxPropPage::CtestViewOcxPropPage() :
	COlePropertyPage(IDD, IDS_TESTVIEWOCX_PPG_CAPTION)
{
}



// CtestViewOcxPropPage::DoDataExchange - Moves data between page and properties

void CtestViewOcxPropPage::DoDataExchange(CDataExchange* pDX)
{
	DDP_PostProcessing(pDX);
}



// CtestViewOcxPropPage message handlers
