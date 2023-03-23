#include "stdafx.h"
#include "CCustomerListModel.h"

CCustomerListModel::CCustomerListModel(QObject* parent)
	: QAbstractListModel(parent)
{

}

CCustomerListModel::CCustomerListModel(std::vector<FCustomer> data)
	: mCustomers(data)
{

}

void CCustomerListModel::Add(FCustomer c)
{
	beginInsertRows(QModelIndex(), mCustomers.size(), mCustomers.size());
	mCustomers.push_back(c);
	endInsertRows();
}

void CCustomerListModel::Del(int index)
{
	beginRemoveRows(QModelIndex(), index, index);
	mCustomers.erase(mCustomers.begin() + index);
	endRemoveRows();
}

int CCustomerListModel::rowCount(const QModelIndex& index) const
{
	return mCustomers.size();
}

QVariant CCustomerListModel::data(const QModelIndex& index, int role) const
{
	switch (role)
	{
	case Qt::DisplayRole:
	{
		if (index.row() < mCustomers.size())
		{
			return QVariant(mCustomers[index.row()].mName);
		}
		break;
	}
	default:
		break;
	}
	return QVariant();
}

CCustomerListModel::~CCustomerListModel()
{

}