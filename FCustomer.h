#pragma once

#include "EPayment.h"

struct FCustomer
{
	QString mName;
	QString mPhoneNum;
	QString mAddress;
	QDateTime mMeetingDateTime;
	float mPercentageOfPrice = 100.f;
	EPayment mPayment = EPayment::CASH;
	//Read other data types

	FCustomer() {};
	FCustomer(QString name) : mName(name) {}
};

