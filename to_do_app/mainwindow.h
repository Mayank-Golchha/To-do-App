#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_addText_clicked();

    void on_removeText_clicked();

    void on_removeAllText_clicked();

    void on_actionOpen_Notes_triggered();

    void on_actionSave_triggered();

private:
    Ui::MainWindow *ui;
    QString File_Path;
};
#endif // MAINWINDOW_H
