#pragma once

#include "FOrder.h"
#include "CComponentManager.h"

class CCustomerListModel;
class COrderManagerDelegate;
class COrderManager : public CComponentManager
{
	QString mPath;
	QScopedPointer<FOrder> pOrder;

	QListView* pCustomerListView = nullptr;
	COrderManagerDelegate* pDelegate = nullptr;

	SINGLETON(COrderManager)
public:
	bool mPromptSaveAtClose = true;

	bool IsReadingFile()
	{
		return !mPath.isEmpty();
	}

	void SetCustomerListView(QListView* ptr)
	{
		pCustomerListView = ptr;
	}

	void SetDelegate(COrderManagerDelegate* ptr)
	{
		pDelegate = ptr;
	}

	FOrder* GetOrder()
	{
		return pOrder.get();
	}

	virtual void New() override;
	virtual bool Load(QString path) override;
	virtual bool Save() override;
	virtual bool SaveAs(QString path) override;

	void AddCustomer(QString name);
	void DelCustomer(int index);

	~COrderManager();
};

