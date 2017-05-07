// testViewOcxCtrl.cpp : Implementation of the CtestViewOcxCtrl ActiveX Control class.

#include "stdafx.h"
#include "testViewOcx.h"
#include "testViewOcxCtrl.h"
#include "testViewOcxPropPage.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(CtestViewOcxCtrl, COleControl)



// Message map

BEGIN_MESSAGE_MAP(CtestViewOcxCtrl, COleControl)
	ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
END_MESSAGE_MAP()



// Dispatch map

BEGIN_DISPATCH_MAP(CtestViewOcxCtrl, COleControl)
	DISP_FUNCTION_ID(CtestViewOcxCtrl, "AboutBox", DISPID_ABOUTBOX, AboutBox, VT_EMPTY, VTS_NONE)
END_DISPATCH_MAP()



// Event map

BEGIN_EVENT_MAP(CtestViewOcxCtrl, COleControl)
END_EVENT_MAP()



// Property pages

// TODO: Add more property pages as needed.  Remember to increase the count!
BEGIN_PROPPAGEIDS(CtestViewOcxCtrl, 1)
	PROPPAGEID(CtestViewOcxPropPage::guid)
END_PROPPAGEIDS(CtestViewOcxCtrl)



// Initialize class factory and guid

IMPLEMENT_OLECREATE_EX(CtestViewOcxCtrl, "TESTVIEWOCX.testViewOcxCtrl.1",
	0x7d16d513, 0xd372, 0x4918, 0x80, 0x73, 0xb7, 0xa7, 0x58, 0x51, 0x57, 0x42)



// Type library ID and version

IMPLEMENT_OLETYPELIB(CtestViewOcxCtrl, _tlid, _wVerMajor, _wVerMinor)



// Interface IDs

const IID BASED_CODE IID_DtestViewOcx =
		{ 0xCC92D444, 0xEB41, 0x4207, { 0x8B, 0xAD, 0x67, 0xD1, 0xBB, 0xC4, 0xA9, 0x2D } };
const IID BASED_CODE IID_DtestViewOcxEvents =
		{ 0x4EE4DF87, 0x1D45, 0x4CA9, { 0xAA, 0xE1, 0x1D, 0xBF, 0x3C, 0xEA, 0xD2, 0x4B } };



// Control type information

static const DWORD BASED_CODE _dwtestViewOcxOleMisc =
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST |
	OLEMISC_INSIDEOUT |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CtestViewOcxCtrl, IDS_TESTVIEWOCX, _dwtestViewOcxOleMisc)



// CtestViewOcxCtrl::CtestViewOcxCtrlFactory::UpdateRegistry -
// Adds or removes system registry entries for CtestViewOcxCtrl

BOOL CtestViewOcxCtrl::CtestViewOcxCtrlFactory::UpdateRegistry(BOOL bRegister)
{
	// TODO: Verify that your control follows apartment-model threading rules.
	// Refer to MFC TechNote 64 for more information.
	// If your control does not conform to the apartment-model rules, then
	// you must modify the code below, changing the 6th parameter from
	// afxRegApartmentThreading to 0.

	if (bRegister)
		return AfxOleRegisterControlClass(
			AfxGetInstanceHandle(),
			m_clsid,
			m_lpszProgID,
			IDS_TESTVIEWOCX,
			IDB_TESTVIEWOCX,
			afxRegApartmentThreading,
			_dwtestViewOcxOleMisc,
			_tlid,
			_wVerMajor,
			_wVerMinor);
	else
		return AfxOleUnregisterClass(m_clsid, m_lpszProgID);
}



// CtestViewOcxCtrl::CtestViewOcxCtrl - Constructor

CtestViewOcxCtrl::CtestViewOcxCtrl()
{
	InitializeIIDs(&IID_DtestViewOcx, &IID_DtestViewOcxEvents);
	// TODO: Initialize your control's instance data here.
}



// CtestViewOcxCtrl::~CtestViewOcxCtrl - Destructor

CtestViewOcxCtrl::~CtestViewOcxCtrl()
{
	// TODO: Cleanup your control's instance data here.
}



// CtestViewOcxCtrl::OnDraw - Drawing function

void CtestViewOcxCtrl::OnDraw(
			CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid)
{
	if (!pdc)
		return;

	// TODO: Replace the following code with your own drawing code.
	pdc->FillRect(rcBounds, CBrush::FromHandle((HBRUSH)GetStockObject(WHITE_BRUSH)));
	pdc->Ellipse(rcBounds);
}



// CtestViewOcxCtrl::DoPropExchange - Persistence support

void CtestViewOcxCtrl::DoPropExchange(CPropExchange* pPX)
{
	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);

	// TODO: Call PX_ functions for each persistent custom property.
}



// CtestViewOcxCtrl::OnResetState - Reset control to default state

void CtestViewOcxCtrl::OnResetState()
{
	COleControl::OnResetState();  // Resets defaults found in DoPropExchange

	// TODO: Reset any other control state here.
}



// CtestViewOcxCtrl::AboutBox - Display an "About" box to the user

void CtestViewOcxCtrl::AboutBox()
{
	CDialog dlgAbout(IDD_ABOUTBOX_TESTVIEWOCX);
	dlgAbout.DoModal();
}



// CtestViewOcxCtrl message handlers
