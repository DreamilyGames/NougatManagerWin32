#pragma once

class CMsgBoxUtil
{
public:
	enum class EConfirmSaveEnum
	{
		CANCEL = 0,
		SAVE = 1,
		DONT_SAVE = 2
	};

	static bool Critical(QWidget* parent, QString title, QString content);
	static bool Warning(QWidget* parent, QString title, QString content);
	static bool ConfirmDelete(QWidget* parent, QString nameToBeDeleted);
	static bool ConfirmDeleteCustomContent(QWidget* parent, QString content);
	static EConfirmSaveEnum Save(QWidget* parent, QString filename);
};

