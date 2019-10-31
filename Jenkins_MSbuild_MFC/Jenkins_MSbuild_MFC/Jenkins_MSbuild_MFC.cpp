
// Jenkins_MSbuild_MFC.cpp: 응용 프로그램에 대한 클래스 동작을 정의합니다.
// test

#include "stdafx.h"
#include "Jenkins_MSbuild_MFC.h"
#include "Jenkins_MSbuild_MFCDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CJenkinsMSbuildMFCApp

BEGIN_MESSAGE_MAP(CJenkinsMSbuildMFCApp, CWinApp)
	ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()


// CJenkinsMSbuildMFCApp 생성

CJenkinsMSbuildMFCApp::CJenkinsMSbuildMFCApp()
{
	// TODO: 여기에 생성 코드를 추가합니다.
	// InitInstance에 모든 중요한 초기화 작업을 배치합니다.
}


// 유일한 CJenkinsMSbuildMFCApp 개체입니다.

CJenkinsMSbuildMFCApp theApp;


// CJenkinsMSbuildMFCApp 초기화

BOOL CJenkinsMSbuildMFCApp::InitInstance()
{

	CJenkinsMSbuildMFCDlg dlg;
	m_pMainWnd = &dlg;
	INT_PTR nResponse = dlg.DoModal();

	return FALSE;
}

