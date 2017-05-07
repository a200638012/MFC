#pragma once

// testViewOcxPropPage.h : Declaration of the CtestViewOcxPropPage property page class.


// CtestViewOcxPropPage : See testViewOcxPropPage.cpp for implementation.

class CtestViewOcxPropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(CtestViewOcxPropPage)
	DECLARE_OLECREATE_EX(CtestViewOcxPropPage)

// Constructor
public:
	CtestViewOcxPropPage();

// Dialog Data
	enum { IDD = IDD_PROPPAGE_TESTVIEWOCX };

// Implementation
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Message maps
protected:
	DECLARE_MESSAGE_MAP()
};

