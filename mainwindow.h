#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QAction>
#include <QPointer>
#include <QTextCharFormat>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionMy_Resume_triggered();

    void on_actionBold_triggered();

    void superscript_checked();

    void subscript_checked();

private:
    Ui::MainWindow *ui;
    QString *currentFile;
    QPointer<QAction> subScript = nullptr;
    QPointer<QAction> superScript = nullptr;
};
#endif // MAINWINDOW_H
