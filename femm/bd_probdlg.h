// bd_CProbDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// bdCProbDlg dialog

class bdCProbDlg : public CDialog {
  // Construction
  public:
  bdCProbDlg(CWnd* pParent = NULL); // standard constructor

  BOOL probtype; // variable denoting problem type
                 // so list entry can be correctly set
  int lengthunits; // contains units of length;
  int bsmart;

  // Dialog Data
  //{{AFX_DATA(bdCProbDlg)
  enum { IDD = IDD_BD_PROBDLG };
  CComboBox m_length_units;
  CComboBox m_bsmart;
  CComboBox m_probtype;
  CString m_problem_note;
  double m_precision;
  double m_minangle;
  double m_depth;
  //}}AFX_DATA

  // Overrides
  // ClassWizard generated virtual function overrides
  //{{AFX_VIRTUAL(bdCProbDlg)
  protected:
  virtual void DoDataExchange(CDataExchange* pDX); // DDX/DDV support
  //}}AFX_VIRTUAL

  // Implementation
  protected:
  // Generated message map functions
  //{{AFX_MSG(bdCProbDlg)
  virtual BOOL OnInitDialog();
  virtual void OnOK();
  afx_msg void OnSelchangeLengthUnits();
  afx_msg void OnSelchangeProbtype();
  //}}AFX_MSG
  DECLARE_MESSAGE_MAP()
  public:
  CLuaEdit m_IDC_problem_note, m_IDC_precision, m_IDC_depth, m_IDC_minangle;
};
