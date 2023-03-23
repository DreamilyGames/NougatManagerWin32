#ifndef CMAINWINDOW_H
#define CMAINWINDOW_H

#include <QMainWindow>
#include "COrderManagerDelegate.h"

QT_BEGIN_NAMESPACE
namespace Ui { class CMainWindow; }
QT_END_NAMESPACE

class QItemSelection;
class CMainWindow : public QMainWindow, COrderManagerDelegate
{
    bool mOrderUnsavedChangesFlag = false;
    Q_OBJECT
public:
    CMainWindow(QWidget *parent = nullptr);
    ~CMainWindow();

    bool SaveOrder();
    bool SaveAsOrder();

    void ShowCustomerInfo(int index);
    void HideCustomerInfo();

    virtual void OrderDelegate_OrderChanged() override;

public slots:
    void UserOpenOrder();
    void UserSaveOrder();
    void UserSaveAsOrder();
    void UserNewOrder();

    void UserNewCustomer();
    void UserDelCustomer();
    void UserSelectedCustomer(const QItemSelection& selected, const QItemSelection& deselected);

    void UserEnteredCusName();
    void UserEnteredCusPhone();
    void UserEnteredCusAddr();
    void UserEnteredCusPercentagePrice();
    void UserChangedCusPayment();
    void UserEnteredCusMeetTime();
    void UserSelectedCusMeetDate();

private:
    QScopedPointer<Ui::CMainWindow> pMainWindow;

protected:
    virtual void keyPressEvent(QKeyEvent* event) override;
    virtual void closeEvent(QCloseEvent* event) override;
};
#endif // CMAINWINDOW_H
