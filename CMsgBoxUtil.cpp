#include "stdafx.h"
#include "CMsgBoxUtil.h"

bool CMsgBoxUtil::Critical(QWidget* parent, QString title, QString content)
{
    return (QMessageBox::critical(parent, title, content, QMessageBox::StandardButton::Ok,
        QMessageBox::StandardButton::Cancel) == QMessageBox::StandardButton::Ok);
}

bool CMsgBoxUtil::Warning(QWidget* parent, QString title, QString content)
{
    return (QMessageBox::warning(parent, title, content, QMessageBox::StandardButton::Ok,
        QMessageBox::StandardButton::Cancel) == QMessageBox::StandardButton::Ok);
}

bool CMsgBoxUtil::ConfirmDelete(QWidget* parent, QString nameToBeDeleted)
{
    QString confirmationMessage = QString("You are about to delete \"") + nameToBeDeleted + "\"";
    if (QMessageBox::warning(parent, "Are you sure?", confirmationMessage, QMessageBox::StandardButton::Ok,
        QMessageBox::StandardButton::Cancel) == QMessageBox::StandardButton::Ok)
    {
        if (QMessageBox::critical(parent, "CAUTION! THIS CANNOT BE UNDONE!", confirmationMessage, QMessageBox::StandardButton::Ok,
            QMessageBox::StandardButton::Cancel) == QMessageBox::StandardButton::Ok)
        {
            return true;
        }
    }

    return false;
}

bool CMsgBoxUtil::ConfirmDeleteCustomContent(QWidget* parent, QString content)
{
    if (QMessageBox::warning(parent, "Are you sure?", content, QMessageBox::StandardButton::Ok,
        QMessageBox::StandardButton::Cancel) == QMessageBox::StandardButton::Ok)
    {
        if (QMessageBox::critical(parent, "CAUTION! THIS CANNOT BE UNDONE!", content, QMessageBox::StandardButton::Ok,
            QMessageBox::StandardButton::Cancel) == QMessageBox::StandardButton::Ok)
        {
            return true;
        }
    }

    return false;
}

CMsgBoxUtil::EConfirmSaveEnum CMsgBoxUtil::Save(QWidget* parent, QString filename)
{
    QString content = QString("The file \"" + filename + "\" may or may not be saved.");
    return (EConfirmSaveEnum)
        QMessageBox::question(parent, "WARNING: Unsaved file", content, "Cancel", "Save", "Don't Save", 0, 0);
}