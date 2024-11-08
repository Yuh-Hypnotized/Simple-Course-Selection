#ifndef SUCCESSDIALOG_H
#define SUCCESSDIALOG_H

#include <QWidget>
#include <QDialog>

namespace Ui {
class SuccessDialog;
}

class SuccessDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SuccessDialog(QWidget *parent = nullptr);
    ~SuccessDialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::SuccessDialog *ui;
};

#endif // SUCCESSDIALOG_H
