// ScriptEntry.cpp : implementation file
//

#include "stdafx.h"
#include "FactoryScriptEngine.h"
#include "ScriptEntry.h"


// CScriptEntry

CScriptEntry::CScriptEntry()
{
  m_strDescription = _T("");
  m_strCommand = _T("");
  m_strResult = _T("");
  m_fAllowContinue = false;
  m_fResponseRequired = false;
  m_iStorageLocation = 0;
}

CScriptEntry::~CScriptEntry()
{
}


// CScriptEntry member functions
