#pragma once

class COrderManagerDelegate
{
public:
	virtual void OrderDelegate_OrderChanged();

	//Order Reading Errors -> 1 = Invalid Meeting Date Time String in .order file
	virtual void OrderDelegate_OrderReadingError(int err);
};

