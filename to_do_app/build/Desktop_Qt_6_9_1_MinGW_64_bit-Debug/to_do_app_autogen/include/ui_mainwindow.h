/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen_Notes;
    QAction *actionSave;
    QWidget *centralwidget;
    QLineEdit *lineEdit;
    QPushButton *addText;
    QListWidget *listWidget;
    QPushButton *removeText;
    QPushButton *removeAllText;
    QMenuBar *menuBar;
    QMenu *menuFile;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(498, 647);
        actionOpen_Notes = new QAction(MainWindow);
        actionOpen_Notes->setObjectName("actionOpen_Notes");
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName("actionSave");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(30, 40, 341, 31));
        addText = new QPushButton(centralwidget);
        addText->setObjectName("addText");
        addText->setGeometry(QRect(380, 40, 91, 31));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(30, 100, 441, 461));
        QFont font;
        font.setPointSize(10);
        listWidget->setFont(font);
        removeText = new QPushButton(centralwidget);
        removeText->setObjectName("removeText");
        removeText->setGeometry(QRect(240, 580, 91, 31));
        removeAllText = new QPushButton(centralwidget);
        removeAllText->setObjectName("removeAllText");
        removeAllText->setGeometry(QRect(360, 580, 91, 31));
        MainWindow->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 498, 25));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName("menuFile");
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionOpen_Notes);
        menuFile->addSeparator();
        menuFile->addAction(actionSave);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionOpen_Notes->setText(QCoreApplication::translate("MainWindow", "Open Notes", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        addText->setText(QCoreApplication::translate("MainWindow", "ADD", nullptr));
        removeText->setText(QCoreApplication::translate("MainWindow", "Remove", nullptr));
        removeAllText->setText(QCoreApplication::translate("MainWindow", "Remove All", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
