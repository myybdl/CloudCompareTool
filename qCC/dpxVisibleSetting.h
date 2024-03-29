#ifndef _dpx_Visible_SettingTool_h_
#define _dpx_Visible_SettingTool_h_

//qCC_db
#include <ccHObject.h>
#include <ccGLWindow.h>
//Qt
#include <QSet>
using  namespace std;
#include "ui_VisibleSettingDlg.h"

class ccPolyline;
class ccPointCloud;

struct VSparam
{
	int  m_nHideOrShow; //0:hide;1:show
	bool m_bSetScalar;
	QString m_strScalar;
	vector<int>  m_vecScalar;

	bool m_bSetDim;
	unsigned char m_Dim;
	double m_dLowDim;
	double m_dHighDim;
	VSparam()
	{
		m_nHideOrShow = -1; //hide

		m_bSetScalar = false;
		m_strScalar = "";

		m_bSetDim = false;
		m_Dim = 2;
		m_dLowDim = -99999999;
		m_dHighDim = 99999999;
	}
};

//! Graphical segmentation mechanism (with polyline)
class dpxVisibleSetting : public QDialog
{
	Q_OBJECT
public:
	explicit dpxVisibleSetting(ccGLWindow* associatedWin,QWidget* parent=0);
	virtual ~dpxVisibleSetting();

	virtual void accept();
	virtual void reject();
public:
	bool setSelectEntitys(ccHObject::Container selectedEntities);
	VSparam getParams();

	bool IsInRange(vector<int> vecRange,float Value);

public slots:
	void slotCBoxChanged();
protected:
	void removeAllEntities();
	bool addEntity(ccHObject* entity);
	void AddScalarCombobox(QSet<QString> ScalarFields);
protected:
	//! Set of entities to be segmented
	QSet<ccHObject*> m_toSetVisible;
	QSet<QString> m_ScalarFields;
	ccGLWindow * m_associatedWin;
	Ui::VisibleSettingDlg  ui;
};

#endif //CC_GRAPHICAL_SEGMENTATION_TOOLS_HEADER
