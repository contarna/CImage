// CImage.h : main header file for the CIMAGE application
//

#if !defined(AFX_CIMAGE_H__63B4D66C_3BF9_4142_A5B8_9B66711679B7__INCLUDED_)
#define AFX_CIMAGE_H__63B4D66C_3BF9_4142_A5B8_9B66711679B7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CCImageApp:
// See CImage.cpp for the implementation of this class
//

class CCImageApp : public CWinApp
{
public:
	CCImageApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCImageApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CCImageApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CIMAGE_H__63B4D66C_3BF9_4142_A5B8_9B66711679B7__INCLUDED_)
