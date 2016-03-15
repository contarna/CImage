// CImageDlg.h : header file
//
#include "CxImage/ximage.h"

#if !defined(AFX_CIMAGEDLG_H__E55661B9_CCEA_41B4_B1E6_791839F53F4A__INCLUDED_)
#define AFX_CIMAGEDLG_H__E55661B9_CCEA_41B4_B1E6_791839F53F4A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CCImageDlg dialog

class CCImageDlg : public CDialog
{
// Construction
public:
	CCImageDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CCImageDlg)
	enum { IDD = IDD_CIMAGE_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCImageDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CCImageDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CIMAGEDLG_H__E55661B9_CCEA_41B4_B1E6_791839F53F4A__INCLUDED_)
