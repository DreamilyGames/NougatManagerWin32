#pragma once

#include "FCustomer.h"

class CCustomerListModel : public QAbstractListModel
{
	std::vector<FCustomer> mCustomers;
public:
	CCustomerListModel(QObject* parent = NULL);
	CCustomerListModel(std::vector<FCustomer> data);

	void Add(FCustomer c);
	void Del(int index);
	size_t GetCount()
	{
		return mCustomers.size();
	}
	std::vector<FCustomer>& GetData()
	{
		return mCustomers;
	}

	int rowCount(const QModelIndex& index) const;
	QVariant data(const QModelIndex& index, int role = Qt::DisplayRole) const;

	~CCustomerListModel();
};

