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
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *patient;
    QLineEdit *lineEditname;
    QLabel *days;
    QLineEdit *lineEditdays;
    QLabel *surgery;
    QLabel *med;
    QComboBox *comboSurgery;
    QComboBox *comboMeds;
    QPushButton *addPatient;
    QPushButton *viewSummary;
    QPushButton *saveAndExit;
    QTableWidget *tableSummary;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        patient = new QLabel(centralwidget);
        patient->setObjectName("patient");
        patient->setGeometry(QRect(210, 10, 81, 16));
        lineEditname = new QLineEdit(centralwidget);
        lineEditname->setObjectName("lineEditname");
        lineEditname->setGeometry(QRect(340, 10, 113, 21));
        days = new QLabel(centralwidget);
        days->setObjectName("days");
        days->setGeometry(QRect(210, 40, 101, 16));
        lineEditdays = new QLineEdit(centralwidget);
        lineEditdays->setObjectName("lineEditdays");
        lineEditdays->setGeometry(QRect(340, 40, 113, 21));
        surgery = new QLabel(centralwidget);
        surgery->setObjectName("surgery");
        surgery->setGeometry(QRect(210, 70, 101, 16));
        med = new QLabel(centralwidget);
        med->setObjectName("med");
        med->setGeometry(QRect(210, 100, 101, 16));
        comboSurgery = new QComboBox(centralwidget);
        comboSurgery->addItem(QString());
        comboSurgery->addItem(QString());
        comboSurgery->addItem(QString());
        comboSurgery->addItem(QString());
        comboSurgery->addItem(QString());
        comboSurgery->setObjectName("comboSurgery");
        comboSurgery->setGeometry(QRect(340, 70, 103, 32));
        comboMeds = new QComboBox(centralwidget);
        comboMeds->addItem(QString());
        comboMeds->addItem(QString());
        comboMeds->addItem(QString());
        comboMeds->addItem(QString());
        comboMeds->addItem(QString());
        comboMeds->setObjectName("comboMeds");
        comboMeds->setGeometry(QRect(340, 100, 103, 32));
        addPatient = new QPushButton(centralwidget);
        addPatient->setObjectName("addPatient");
        addPatient->setGeometry(QRect(310, 140, 181, 32));
        viewSummary = new QPushButton(centralwidget);
        viewSummary->setObjectName("viewSummary");
        viewSummary->setGeometry(QRect(340, 190, 111, 32));
        saveAndExit = new QPushButton(centralwidget);
        saveAndExit->setObjectName("saveAndExit");
        saveAndExit->setGeometry(QRect(340, 430, 111, 32));
        tableSummary = new QTableWidget(centralwidget);
        if (tableSummary->columnCount() < 2)
            tableSummary->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableSummary->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableSummary->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableSummary->setObjectName("tableSummary");
        tableSummary->setGeometry(QRect(290, 230, 201, 192));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        patient->setText(QCoreApplication::translate("MainWindow", "Patient Name", nullptr));
        days->setText(QCoreApplication::translate("MainWindow", "Days In Hospital", nullptr));
        surgery->setText(QCoreApplication::translate("MainWindow", "Surgery", nullptr));
        med->setText(QCoreApplication::translate("MainWindow", "Medication ", nullptr));
        comboSurgery->setItemText(0, QCoreApplication::translate("MainWindow", "Back", nullptr));
        comboSurgery->setItemText(1, QCoreApplication::translate("MainWindow", "Shoulder", nullptr));
        comboSurgery->setItemText(2, QCoreApplication::translate("MainWindow", "Leg", nullptr));
        comboSurgery->setItemText(3, QCoreApplication::translate("MainWindow", "Knee", nullptr));
        comboSurgery->setItemText(4, QCoreApplication::translate("MainWindow", "Foot", nullptr));

        comboMeds->setItemText(0, QCoreApplication::translate("MainWindow", "Antibiotic", nullptr));
        comboMeds->setItemText(1, QCoreApplication::translate("MainWindow", "Anti-Nausea", nullptr));
        comboMeds->setItemText(2, QCoreApplication::translate("MainWindow", "Anti-inflammatory", nullptr));
        comboMeds->setItemText(3, QCoreApplication::translate("MainWindow", "Light Pain", nullptr));
        comboMeds->setItemText(4, QCoreApplication::translate("MainWindow", "Strong Pain", nullptr));

        addPatient->setText(QCoreApplication::translate("MainWindow", "Add Patient", nullptr));
        viewSummary->setText(QCoreApplication::translate("MainWindow", "View Summary", nullptr));
        saveAndExit->setText(QCoreApplication::translate("MainWindow", "Save to File", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableSummary->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableSummary->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Total Charges", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
