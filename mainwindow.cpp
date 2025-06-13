#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QDir>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_addPatient_clicked()
{
    QString name = ui->lineEditname->text();
    QString daysText = ui->lineEditdays->text();

    // Basic input validation
    if (name.isEmpty() || daysText.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please enter both name and number of days.");
        return;
    }

    bool ok;
    int days = daysText.toInt(&ok);
    if (!ok || days < 0) {
        QMessageBox::warning(this, "Input Error", "Days must be 0 or more.");
        return;
    }

    int surgeryType = ui->comboSurgery->currentIndex() + 1;
    int medType = ui->comboMeds->currentIndex() + 1;

    // Create and process patient
    PatientAccount patient;
    patient.setName(name.toStdString());
    patient.setDays(days);
    surgery.updateAccount(patient, surgeryType);
    pharmacy.updateAccount(patient, medType);

    patientRecords.push_back(patient);

    // Show confirmation popup
    QMessageBox::information(this, "Patient Added", name + " was added with total charges: $" +
                                                        QString::number(patient.getCharges(), 'f', 2));

    // Clear form for next entry
    ui->lineEditname->clear();
    ui->lineEditdays->clear();
    ui->comboSurgery->setCurrentIndex(0);
    ui->comboMeds->setCurrentIndex(0);
}

void MainWindow::on_viewSummary_clicked()
{
    ui->tableSummary->clear();

    int rowCount = patientRecords.size();
    ui->tableSummary->setRowCount(rowCount);
    ui->tableSummary->setColumnCount(2);

    // Set the header titles
    QStringList headers;
    headers << "Name" << "Total Charges";
    ui->tableSummary->setHorizontalHeaderLabels(headers);

    for (int i = 0; i < rowCount; ++i) {
        const auto& patient = patientRecords[i];

        QTableWidgetItem* nameItem = new QTableWidgetItem(
            QString::fromStdString(patient.getName()));
        QTableWidgetItem* chargeItem = new QTableWidgetItem(
            "$" + QString::number(patient.getCharges(), 'f', 2));

        ui->tableSummary->setItem(i, 0, nameItem);
        ui->tableSummary->setItem(i, 1, chargeItem);
    }

    ui->tableSummary->resizeColumnsToContents();
}

void MainWindow::on_saveAndExit_clicked()
{
    QFile file(QDir::homePath() + "/Desktop/patients.csv");
    bool fileExists = file.exists();

    if (file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text)) {
        QTextStream out(&file);

        if (!fileExists) {
            out << "Name,Total Charges\n";
        }

        for (const auto& patient : patientRecords) {
            out << QString::fromStdString(patient.getName()) << ","
                << QString::number(patient.getCharges(), 'f', 2) << "\n";
        }

        file.close();
        QMessageBox::information(this, "Saved", "Data added to file: patients.csv");
    } else {
        QMessageBox::critical(this, "Error", "Could not open file for writing.");
    }

    qApp->quit();
}
