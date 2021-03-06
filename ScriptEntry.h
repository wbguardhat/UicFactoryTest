#pragma once

// CScriptEntry command target

class CScriptEntry : public CObject
{
public:
// construction/destruction
	CScriptEntry();
	virtual ~CScriptEntry();

// attributes
public:
  CString   m_strDescription;
  CString   m_strAction;
  CString   m_strCommand;
  CString   m_strResult;
  BOOL      m_fAllowContinue;
  BOOL      m_fResponseRequired;
  int       m_iStorageLocation;
};



