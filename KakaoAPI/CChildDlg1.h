#pragma once


// CChildDlg1 대화 상자

class CChildDlg1 : public CDialogEx
{
	DECLARE_DYNAMIC(CChildDlg1)

public:
	CChildDlg1(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CChildDlg1();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ChildDlg1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	CStatic m_test2;
	CStatic m_Example2;
	CStatic m_url;
	CStatic m_info;
	CStatic m_publisher;
	CStatic m_price;
	CStatic m_category;
	afx_msg void OnStnClickedInfo();
};
