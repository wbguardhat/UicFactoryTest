
// FactoryScriptEngineDoc.h : interface of the CFactoryScriptEngineDoc class
//


#pragma once

#include "ScriptEntry.h"

class CFactoryScriptEngineDoc : public CDocument
{
protected: // create from serialization only
	CFactoryScriptEngineDoc();
	DECLARE_DYNCREATE(CFactoryScriptEngineDoc)

// Attributes
public:
  CTypedPtrList<CObList, CScriptEntry*> m_listScript;
  CStringArray                          m_straryRecords;

// Operations
public:
  BOOL  IsScriptLoaded(void);

// Overrides
public:
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// Implementation
public:
	virtual ~CFactoryScriptEngineDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:
  void RemoveAllEntries(void);

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// Helper function that sets search content for a Search Handler
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
public:
  virtual BOOL OnOpenDocument(LPCTSTR lpszPathName);
};
