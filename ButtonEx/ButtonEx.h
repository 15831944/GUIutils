// ButtonEx.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CButtonExApp:
// �� Ŭ������ ������ ���ؼ��� ButtonEx.cpp�� �����Ͻʽÿ�.
//

class CButtonExApp : public CWinApp
{
public:
	CButtonExApp();

// �������Դϴ�.
	public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CButtonExApp theApp;