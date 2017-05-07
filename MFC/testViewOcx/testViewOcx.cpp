// testViewOcx.cpp : Implementation of CtestViewOcxApp and DLL registration.

#include "stdafx.h"
#include "testViewOcx.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


CtestViewOcxApp theApp;

const GUID CDECL BASED_CODE _tlid =
		{ 0xFEF2346F, 0xB6B1, 0x494B, { 0x99, 0xED, 0xB4, 0x7C, 0x19, 0x0, 0x6F, 0xEB } };
const WORD _wVerMajor = 1;
const WORD _wVerMinor = 0;



// CtestViewOcxApp::InitInstance - DLL initialization

BOOL CtestViewOcxApp::InitInstance()
{
	BOOL bInit = COleControlModule::InitInstance();

	if (bInit)
	{
		// TODO: Add your own module initialization code here.
	}

	return bInit;
}



// CtestViewOcxApp::ExitInstance - DLL termination

int CtestViewOcxApp::ExitInstance()
{
	// TODO: Add your own module termination code here.

	return COleControlModule::ExitInstance();
}



// DllRegisterServer - Adds entries to the system registry

STDAPI DllRegisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleRegisterTypeLib(AfxGetInstanceHandle(), _tlid))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(TRUE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}



// DllUnregisterServer - Removes entries from the system registry

STDAPI DllUnregisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleUnregisterTypeLib(_tlid, _wVerMajor, _wVerMinor))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(FALSE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}
