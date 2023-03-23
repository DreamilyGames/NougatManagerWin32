#pragma once

#include "FCustomer.h"
#include "CCustomerListModel.h"

struct FOrder
{
	QString mName;
	QScopedPointer<CCustomerListModel> pCustomerList;

	FOrder() : pCustomerList(QScopedPointer<CCustomerListModel>(new CCustomerListModel)) {}
};

