/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionLoad_vocabulary_CSV_file;
    QAction *actionLoad_irregular_verbs_CSV_file;
    QAction *actionLoad_save_CSV_file;
    QWidget *centralWidget;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit;
    QPushButton *pushButton_4;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *subtitle;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLabel *label_4;
    QLabel *save_warning;
    QLabel *highscore_1;
    QLabel *highscore_2;
    QLabel *highvalue_1;
    QLabel *highvalue_2;
    QLabel *label_8;
    QFrame *widget;
    QLineEdit *lineEdit_2;
    QLabel *label_5;
    QDialogButtonBox *buttonBox;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_warning;
    QLabel *label;
    QFrame *widget_3;
    QLineEdit *lineEdit_5;
    QLabel *label_13;
    QDialogButtonBox *buttonBox_3;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_warning_3;
    QFrame *widget_2;
    QLineEdit *lineEdit_4;
    QLabel *label_10;
    QDialogButtonBox *buttonBox_2;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_warning_2;
    QPushButton *pushButton_5;
    QLabel *label_image;
    QLabel *label_image_2;
    QMenuBar *menuBar;
    QMenu *menuSettings;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1069, 616);
        MainWindow->setCursor(QCursor(Qt::ArrowCursor));
        actionLoad_vocabulary_CSV_file = new QAction(MainWindow);
        actionLoad_vocabulary_CSV_file->setObjectName(QStringLiteral("actionLoad_vocabulary_CSV_file"));
        actionLoad_vocabulary_CSV_file->setCheckable(false);
        QFont font;
        font.setFamily(QStringLiteral("Meiryo UI"));
        actionLoad_vocabulary_CSV_file->setFont(font);
        actionLoad_irregular_verbs_CSV_file = new QAction(MainWindow);
        actionLoad_irregular_verbs_CSV_file->setObjectName(QStringLiteral("actionLoad_irregular_verbs_CSV_file"));
        actionLoad_irregular_verbs_CSV_file->setFont(font);
        actionLoad_save_CSV_file = new QAction(MainWindow);
        actionLoad_save_CSV_file->setObjectName(QStringLiteral("actionLoad_save_CSV_file"));
        actionLoad_save_CSV_file->setFont(font);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(460, 490, 131, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Meiryo UI"));
        font1.setPointSize(10);
        font1.setItalic(true);
        pushButton_3->setFont(font1);
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(410, 260, 231, 31));
        lineEdit->setFont(font);
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(460, 320, 131, 41));
        QFont font2;
        font2.setFamily(QStringLiteral("Meiryo UI"));
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setUnderline(false);
        font2.setWeight(75);
        pushButton_4->setFont(font2);
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(330, 30, 471, 91));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(390, 220, 181, 41));
        QFont font3;
        font3.setFamily(QStringLiteral("Meiryo UI"));
        font3.setPointSize(11);
        font3.setBold(false);
        font3.setItalic(true);
        font3.setWeight(50);
        label_3->setFont(font3);
        subtitle = new QLabel(centralWidget);
        subtitle->setObjectName(QStringLiteral("subtitle"));
        subtitle->setGeometry(QRect(400, 140, 251, 21));
        QFont font4;
        font4.setFamily(QStringLiteral("Meiryo UI"));
        font4.setPointSize(12);
        font4.setItalic(true);
        subtitle->setFont(font4);
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(600, 360, 211, 71));
        QFont font5;
        font5.setFamily(QStringLiteral("Meiryo UI"));
        font5.setPointSize(10);
        font5.setBold(true);
        font5.setWeight(75);
        pushButton_2->setFont(font5);
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(240, 360, 211, 71));
        pushButton->setFont(font5);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(570, 220, 251, 41));
        QFont font6;
        font6.setFamily(QStringLiteral("Meiryo UI"));
        font6.setPointSize(12);
        font6.setBold(true);
        font6.setWeight(75);
        label_4->setFont(font6);
        save_warning = new QLabel(centralWidget);
        save_warning->setObjectName(QStringLiteral("save_warning"));
        save_warning->setGeometry(QRect(250, 440, 581, 31));
        save_warning->setFont(font4);
        highscore_1 = new QLabel(centralWidget);
        highscore_1->setObjectName(QStringLiteral("highscore_1"));
        highscore_1->setGeometry(QRect(240, 324, 131, 31));
        highscore_1->setFont(font4);
        highscore_2 = new QLabel(centralWidget);
        highscore_2->setObjectName(QStringLiteral("highscore_2"));
        highscore_2->setGeometry(QRect(600, 330, 131, 21));
        highscore_2->setFont(font4);
        highvalue_1 = new QLabel(centralWidget);
        highvalue_1->setObjectName(QStringLiteral("highvalue_1"));
        highvalue_1->setGeometry(QRect(370, 330, 81, 20));
        QFont font7;
        font7.setFamily(QStringLiteral("Meiryo UI"));
        font7.setPointSize(9);
        font7.setBold(true);
        font7.setWeight(75);
        highvalue_1->setFont(font7);
        highvalue_2 = new QLabel(centralWidget);
        highvalue_2->setObjectName(QStringLiteral("highvalue_2"));
        highvalue_2->setGeometry(QRect(730, 330, 81, 21));
        highvalue_2->setFont(font7);
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(450, 240, 431, 16));
        QFont font8;
        font8.setFamily(QStringLiteral("Meiryo UI"));
        font8.setItalic(true);
        label_8->setFont(font8);
        widget = new QFrame(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(220, 210, 601, 271));
        widget->setAutoFillBackground(true);
        widget->setFrameShape(QFrame::Box);
        widget->setFrameShadow(QFrame::Raised);
        widget->setLineWidth(2);
        widget->setMidLineWidth(3);
        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(20, 120, 561, 31));
        QFont font9;
        font9.setPointSize(10);
        lineEdit_2->setFont(font9);
        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(140, 70, 391, 41));
        QFont font10;
        font10.setFamily(QStringLiteral("Meiryo UI"));
        font10.setPointSize(9);
        label_5->setFont(font10);
        buttonBox = new QDialogButtonBox(widget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(220, 220, 151, 31));
        buttonBox->setFont(font);
        buttonBox->setCursor(QCursor(Qt::PointingHandCursor));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(120, 160, 391, 41));
        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(120, 20, 391, 61));
        label_7->setFont(font);
        label_warning = new QLabel(widget);
        label_warning->setObjectName(QStringLiteral("label_warning"));
        label_warning->setGeometry(QRect(220, 200, 271, 16));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(430, 210, 241, 31));
        QFont font11;
        font11.setFamily(QStringLiteral("Meiryo UI"));
        font11.setPointSize(12);
        label->setFont(font11);
        widget_3 = new QFrame(centralWidget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setGeometry(QRect(220, 200, 601, 271));
        widget_3->setAutoFillBackground(true);
        widget_3->setFrameShape(QFrame::Box);
        widget_3->setFrameShadow(QFrame::Raised);
        widget_3->setLineWidth(2);
        widget_3->setMidLineWidth(3);
        lineEdit_5 = new QLineEdit(widget_3);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(20, 120, 561, 31));
        lineEdit_5->setFont(font9);
        label_13 = new QLabel(widget_3);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(140, 70, 391, 41));
        label_13->setFont(font10);
        buttonBox_3 = new QDialogButtonBox(widget_3);
        buttonBox_3->setObjectName(QStringLiteral("buttonBox_3"));
        buttonBox_3->setGeometry(QRect(220, 220, 151, 31));
        buttonBox_3->setFont(font);
        buttonBox_3->setCursor(QCursor(Qt::PointingHandCursor));
        buttonBox_3->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_14 = new QLabel(widget_3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(120, 160, 391, 41));
        label_15 = new QLabel(widget_3);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(90, 20, 441, 61));
        label_15->setFont(font);
        label_warning_3 = new QLabel(widget_3);
        label_warning_3->setObjectName(QStringLiteral("label_warning_3"));
        label_warning_3->setGeometry(QRect(220, 200, 271, 16));
        widget_2 = new QFrame(centralWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(220, 190, 601, 271));
        widget_2->setAutoFillBackground(true);
        widget_2->setFrameShape(QFrame::Box);
        widget_2->setFrameShadow(QFrame::Raised);
        widget_2->setLineWidth(2);
        widget_2->setMidLineWidth(3);
        lineEdit_4 = new QLineEdit(widget_2);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(20, 120, 561, 31));
        lineEdit_4->setFont(font9);
        label_10 = new QLabel(widget_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(140, 70, 391, 41));
        label_10->setFont(font10);
        buttonBox_2 = new QDialogButtonBox(widget_2);
        buttonBox_2->setObjectName(QStringLiteral("buttonBox_2"));
        buttonBox_2->setGeometry(QRect(220, 220, 151, 31));
        buttonBox_2->setFont(font);
        buttonBox_2->setCursor(QCursor(Qt::PointingHandCursor));
        buttonBox_2->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_11 = new QLabel(widget_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(120, 160, 391, 41));
        label_12 = new QLabel(widget_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(120, 20, 401, 61));
        label_12->setFont(font);
        label_warning_2 = new QLabel(widget_2);
        label_warning_2->setObjectName(QStringLiteral("label_warning_2"));
        label_warning_2->setGeometry(QRect(220, 200, 271, 16));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(630, 490, 41, 41));
        QFont font12;
        font12.setFamily(QStringLiteral("Meiryo UI"));
        font12.setBold(false);
        font12.setItalic(false);
        font12.setWeight(50);
        pushButton_5->setFont(font12);
        label_image = new QLabel(centralWidget);
        label_image->setObjectName(QStringLiteral("label_image"));
        label_image->setGeometry(QRect(150, 40, 141, 141));
        label_image_2 = new QLabel(centralWidget);
        label_image_2->setObjectName(QStringLiteral("label_image_2"));
        label_image_2->setGeometry(QRect(800, 40, 141, 141));
        MainWindow->setCentralWidget(centralWidget);
        save_warning->raise();
        label_3->raise();
        pushButton_3->raise();
        lineEdit->raise();
        pushButton_4->raise();
        label_2->raise();
        subtitle->raise();
        pushButton_2->raise();
        pushButton->raise();
        label_4->raise();
        highscore_1->raise();
        highscore_2->raise();
        highvalue_1->raise();
        highvalue_2->raise();
        label_8->raise();
        widget->raise();
        label->raise();
        widget_3->raise();
        widget_2->raise();
        pushButton_5->raise();
        label_image->raise();
        label_image_2->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1069, 21));
        menuBar->setCursor(QCursor(Qt::PointingHandCursor));
        menuSettings = new QMenu(menuBar);
        menuSettings->setObjectName(QStringLiteral("menuSettings"));
        menuSettings->setCursor(QCursor(Qt::PointingHandCursor));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuSettings->menuAction());
        menuSettings->addAction(actionLoad_vocabulary_CSV_file);
        menuSettings->addAction(actionLoad_irregular_verbs_CSV_file);
        menuSettings->addAction(actionLoad_save_CSV_file);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Learn'English - Main menu", 0));
        actionLoad_vocabulary_CSV_file->setText(QApplication::translate("MainWindow", "Load vocabulary CSV file ...", 0));
        actionLoad_irregular_verbs_CSV_file->setText(QApplication::translate("MainWindow", "Load irregular verbs CSV file ...", 0));
        actionLoad_save_CSV_file->setText(QApplication::translate("MainWindow", "Load save CSV file ...", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "Save and Quit", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "Log in", 0));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:48pt; font-weight:600; color:#aa0000;\">Learn'English</span></p></body></html>", 0));
        label_3->setText(QString());
        subtitle->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#aa0000;\">Make your english great again !</span></p></body></html>", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "Start verb training", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Start vocabulary training", 0));
        label_4->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\"><br/></span></p></body></html>", 0));
        save_warning->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; color:#ff0000;\">The CSV save file does </span><span style=\" font-size:10pt; font-weight:600; text-decoration: underline; color:#ff0000;\">NOT</span><span style=\" font-size:10pt; color:#ff0000;\"> exist, please specify one in the 'Settings' before training !</span></p></body></html>", 0));
        highscore_1->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">Your highest score :</span></p></body></html>", 0));
        highscore_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">Your highest score :</span></p></body></html>", 0));
        highvalue_1->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        highvalue_2->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_8->setText(QApplication::translate("MainWindow", "Whitespaces will be deleted !", 0));
        label_5->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">Type the </span><span style=\" font-size:10pt; font-weight:600; text-decoration: underline;\">absolute</span><span style=\" font-weight:600;\"> or </span><span style=\" font-weight:600; text-decoration: underline;\">relative</span><span style=\" font-weight:600;\"> path of the CSV file :</span></p></body></html>", 0));
        label_6->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" text-decoration: underline;\">Ex</span> :<span style=\" font-weight:600;\"> C:\\datas\\words.csv</span> in <span style=\" font-style:italic;\">Windows</span> or<span style=\" font-weight:600;\"> /home/user/datas.csv</span> in <span style=\" font-style:italic;\">Linux</span>.</p></body></html>", 0));
        label_7->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; color:#aa0000;\">Loading custom CSV file for </span><span style=\" font-size:12pt; font-style:italic; text-decoration: underline; color:#aa0000;\">vocabulary</span><span style=\" font-size:12pt; color:#aa0000;\"> session</span></p></body></html>", 0));
        label_warning->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; color:#ff0000;\">/!\\</span><span style=\" font-size:10pt; font-style:italic; color:#ff0000;\"> This file does </span><span style=\" font-size:10pt; font-weight:600; font-style:italic; text-decoration: underline; color:#ff0000;\">NOT</span><span style=\" font-size:10pt; font-style:italic; color:#ff0000;\"> exist !</span></p></body></html>", 0));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">Enter your username :</span></p></body></html>", 0));
        label_13->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">Type the </span><span style=\" font-size:10pt; font-weight:600; text-decoration: underline;\">absolute</span><span style=\" font-weight:600;\"> or </span><span style=\" font-weight:600; text-decoration: underline;\">relative</span><span style=\" font-weight:600;\"> path of the CSV file :</span></p></body></html>", 0));
        label_14->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" text-decoration: underline;\">Ex</span> :<span style=\" font-weight:600;\"> C:\\datas\\save.csv</span> in <span style=\" font-style:italic;\">Windows</span> or<span style=\" font-weight:600;\"> /home/user/saves.csv</span> in <span style=\" font-style:italic;\">Linux</span>.</p></body></html>", 0));
        label_15->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; color:#aa0000;\">Loading a custom CSV </span><span style=\" font-size:12pt; font-style:italic; text-decoration: underline; color:#aa0000;\">save</span><span style=\" font-size:12pt; color:#aa0000;\"> file (to record your scores)</span></p></body></html>", 0));
        label_warning_3->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; color:#ff0000;\">/!\\</span><span style=\" font-size:10pt; font-style:italic; color:#ff0000;\"> This file does </span><span style=\" font-size:10pt; font-weight:600; font-style:italic; text-decoration: underline; color:#ff0000;\">NOT</span><span style=\" font-size:10pt; font-style:italic; color:#ff0000;\"> exist !</span></p></body></html>", 0));
        label_10->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">Type the </span><span style=\" font-size:10pt; font-weight:600; text-decoration: underline;\">absolute</span><span style=\" font-weight:600;\"> or </span><span style=\" font-weight:600; text-decoration: underline;\">relative</span><span style=\" font-weight:600;\"> path of the CSV file :</span></p></body></html>", 0));
        label_11->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" text-decoration: underline;\">Ex</span> :<span style=\" font-weight:600;\"> C:\\datas\\verbs.csv</span> in <span style=\" font-style:italic;\">Windows</span> or<span style=\" font-weight:600;\"> /home/user/datas.csv</span> in <span style=\" font-style:italic;\">Linux</span>.</p></body></html>", 0));
        label_12->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; color:#aa0000;\">Loading custom CSV file for </span><span style=\" font-size:12pt; font-style:italic; text-decoration: underline; color:#aa0000;\">irregular verb</span><span style=\" font-size:12pt; color:#aa0000;\"> session</span></p></body></html>", 0));
        label_warning_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; color:#ff0000;\">/!\\</span><span style=\" font-size:10pt; font-style:italic; color:#ff0000;\"> This file does </span><span style=\" font-size:10pt; font-weight:600; font-style:italic; text-decoration: underline; color:#ff0000;\">NOT</span><span style=\" font-size:10pt; font-style:italic; color:#ff0000;\"> exist !</span></p></body></html>", 0));
        pushButton_5->setText(QString());
        label_image->setText(QApplication::translate("MainWindow", "tr", 0));
        label_image_2->setText(QApplication::translate("MainWindow", "tr", 0));
        menuSettings->setTitle(QApplication::translate("MainWindow", "Settings", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
