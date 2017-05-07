#pragma once

// testViewOcxCtrl.h : Declaration of the CtestViewOcxCtrl ActiveX Control class.


// CtestViewOcxCtrl : See testViewOcxCtrl.cpp for implementation.

class CtestViewOcxCtrl : public COleControl
{
	DECLARE_DYNCREATE(CtestViewOcxCtrl)

// Constructor
public:
	CtestViewOcxCtrl();

// Overrides
public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();

// Implementation
protected:
	~CtestViewOcxCtrl();

	DECLARE_OLECREATE_EX(CtestViewOcxCtrl)    // Class factory and guid
	DECLARE_OLETYPELIB(CtestViewOcxCtrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CtestViewOcxCtrl)     // Property page IDs
	DECLARE_OLECTLTYPE(CtestViewOcxCtrl)		// Type name and misc status

// Message maps
	DECLARE_MESSAGE_MAP()

// Dispatch maps
	DECLARE_DISPATCH_MAP()

	afx_msg void AboutBox();

// Event maps
	DECLARE_EVENT_MAP()

// Dispatch and event IDs
public:
	enum {
	};
};

