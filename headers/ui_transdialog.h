/********************************************************************************
** Form generated from reading UI file 'transdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSDIALOG_H
#define UI_TRANSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_TransDialog
{
public:
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLabel *title;
    QLabel *label_2;
    QLabel *good_label;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLCDNumber *lcdNumber;
    QProgressBar *progressBar;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QPushButton *next_button;
    QLabel *congrat_label;
    QLCDNumber *lcdScoreFinal;
    QLabel *max_label;
    QLCDNumber *lcdMax;
    QLabel *high_label;
    QLCDNumber *lcdHigh;
    QLabel *highname_label;
    QLabel *logged_as;
    QLabel *username_label;
    QPushButton *end_button;
    QPushButton *start;
    QLabel *warning_label;
    QLabel *percentage;
    QLabel *percent;
    QLabel *label_percent;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QLabel *label_image;
    QLabel *label_image_2;

    void setupUi(QDialog *TransDialog)
    {
        if (TransDialog->objectName().isEmpty())
            TransDialog->setObjectName(QStringLiteral("TransDialog"));
        TransDialog->resize(1081, 595);
        TransDialog->setLayoutDirection(Qt::LeftToRight);
        pushButton = new QPushButton(TransDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(640, 330, 101, 31));
        QFont font;
        font.setFamily(QStringLiteral("Meiryo UI"));
        pushButton->setFont(font);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        lineEdit = new QLineEdit(TransDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(420, 330, 191, 31));
        lineEdit->setFont(font);
        title = new QLabel(TransDialog);
        title->setObjectName(QStringLiteral("title"));
        title->setGeometry(QRect(360, 60, 391, 101));
        QFont font1;
        font1.setFamily(QStringLiteral("Meiryo UI"));
        font1.setPointSize(9);
        title->setFont(font1);
        label_2 = new QLabel(TransDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(160, 240, 311, 51));
        label_2->setFont(font);
        good_label = new QLabel(TransDialog);
        good_label->setObjectName(QStringLiteral("good_label"));
        good_label->setGeometry(QRect(450, 240, 211, 51));
        QFont font2;
        font2.setFamily(QStringLiteral("Meiryo UI"));
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        good_label->setFont(font2);
        label_4 = new QLabel(TransDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(330, 410, 131, 31));
        label_4->setFont(font1);
        label_5 = new QLabel(TransDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(300, 440, 151, 20));
        QFont font3;
        font3.setFamily(QStringLiteral("Meiryo UI"));
        font3.setPointSize(9);
        font3.setItalic(true);
        label_5->setFont(font3);
        label_6 = new QLabel(TransDialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(440, 410, 181, 31));
        QFont font4;
        font4.setFamily(QStringLiteral("Meiryo UI"));
        font4.setPointSize(10);
        label_6->setFont(font4);
        label_7 = new QLabel(TransDialog);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(440, 430, 171, 31));
        QFont font5;
        font5.setFamily(QStringLiteral("Meiryo UI"));
        font5.setPointSize(12);
        font5.setItalic(true);
        font5.setUnderline(true);
        label_7->setFont(font5);
        label_8 = new QLabel(TransDialog);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(490, 370, 61, 16));
        QFont font6;
        font6.setFamily(QStringLiteral("Meiryo UI"));
        font6.setPointSize(9);
        font6.setBold(true);
        font6.setWeight(75);
        label_8->setFont(font6);
        lcdNumber = new QLCDNumber(TransDialog);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(816, 448, 111, 41));
        lcdNumber->setFont(font);
        lcdNumber->setContextMenuPolicy(Qt::CustomContextMenu);
        lcdNumber->setSmallDecimalPoint(false);
        lcdNumber->setDigitCount(4);
        lcdNumber->setSegmentStyle(QLCDNumber::Filled);
        lcdNumber->setProperty("value", QVariant(0));
        lcdNumber->setProperty("intValue", QVariant(0));
        progressBar = new QProgressBar(TransDialog);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(810, 410, 191, 31));
        progressBar->setValue(0);
        label_9 = new QLabel(TransDialog);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(756, 468, 51, 20));
        QFont font7;
        font7.setFamily(QStringLiteral("Meiryo UI"));
        font7.setPointSize(10);
        font7.setBold(true);
        font7.setItalic(true);
        font7.setWeight(75);
        label_9->setFont(font7);
        label_10 = new QLabel(TransDialog);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(726, 418, 81, 16));
        QFont font8;
        font8.setFamily(QStringLiteral("Meiryo UI"));
        font8.setBold(true);
        font8.setItalic(true);
        font8.setWeight(75);
        label_10->setFont(font8);
        label_11 = new QLabel(TransDialog);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(490, 370, 61, 16));
        label_11->setFont(font6);
        next_button = new QPushButton(TransDialog);
        next_button->setObjectName(QStringLiteral("next_button"));
        next_button->setGeometry(QRect(480, 470, 61, 41));
        next_button->setFont(font6);
        next_button->setCursor(QCursor(Qt::PointingHandCursor));
        congrat_label = new QLabel(TransDialog);
        congrat_label->setObjectName(QStringLiteral("congrat_label"));
        congrat_label->setGeometry(QRect(310, 220, 381, 61));
        congrat_label->setFont(font);
        lcdScoreFinal = new QLCDNumber(TransDialog);
        lcdScoreFinal->setObjectName(QStringLiteral("lcdScoreFinal"));
        lcdScoreFinal->setGeometry(QRect(680, 220, 121, 61));
        max_label = new QLabel(TransDialog);
        max_label->setObjectName(QStringLiteral("max_label"));
        max_label->setGeometry(QRect(380, 300, 231, 61));
        lcdMax = new QLCDNumber(TransDialog);
        lcdMax->setObjectName(QStringLiteral("lcdMax"));
        lcdMax->setGeometry(QRect(620, 300, 81, 41));
        high_label = new QLabel(TransDialog);
        high_label->setObjectName(QStringLiteral("high_label"));
        high_label->setGeometry(QRect(450, 380, 121, 41));
        lcdHigh = new QLCDNumber(TransDialog);
        lcdHigh->setObjectName(QStringLiteral("lcdHigh"));
        lcdHigh->setGeometry(QRect(570, 380, 71, 31));
        highname_label = new QLabel(TransDialog);
        highname_label->setObjectName(QStringLiteral("highname_label"));
        highname_label->setGeometry(QRect(450, 420, 171, 31));
        QFont font9;
        font9.setFamily(QStringLiteral("Meiryo UI"));
        font9.setPointSize(12);
        font9.setItalic(true);
        highname_label->setFont(font9);
        logged_as = new QLabel(TransDialog);
        logged_as->setObjectName(QStringLiteral("logged_as"));
        logged_as->setGeometry(QRect(450, 140, 91, 31));
        username_label = new QLabel(TransDialog);
        username_label->setObjectName(QStringLiteral("username_label"));
        username_label->setGeometry(QRect(530, 140, 111, 31));
        QFont font10;
        font10.setFamily(QStringLiteral("Meiryo UI"));
        font10.setPointSize(10);
        font10.setBold(true);
        font10.setWeight(75);
        username_label->setFont(font10);
        end_button = new QPushButton(TransDialog);
        end_button->setObjectName(QStringLiteral("end_button"));
        end_button->setGeometry(QRect(450, 470, 121, 61));
        end_button->setFont(font10);
        end_button->setCursor(QCursor(Qt::PointingHandCursor));
        start = new QPushButton(TransDialog);
        start->setObjectName(QStringLiteral("start"));
        start->setGeometry(QRect(400, 280, 261, 111));
        QFont font11;
        font11.setFamily(QStringLiteral("Meiryo UI"));
        font11.setBold(true);
        font11.setWeight(75);
        start->setFont(font11);
        start->setAutoFillBackground(false);
        start->setDefault(false);
        start->setFlat(false);
        warning_label = new QLabel(TransDialog);
        warning_label->setObjectName(QStringLiteral("warning_label"));
        warning_label->setGeometry(QRect(200, 400, 661, 111));
        percentage = new QLabel(TransDialog);
        percentage->setObjectName(QStringLiteral("percentage"));
        percentage->setGeometry(QRect(870, 230, 101, 41));
        QFont font12;
        font12.setFamily(QStringLiteral("Meiryo UI"));
        font12.setPointSize(14);
        font12.setBold(true);
        font12.setWeight(75);
        percentage->setFont(font12);
        percent = new QLabel(TransDialog);
        percent->setObjectName(QStringLiteral("percent"));
        percent->setGeometry(QRect(650, 380, 61, 31));
        label_percent = new QLabel(TransDialog);
        label_percent->setObjectName(QStringLiteral("label_percent"));
        label_percent->setGeometry(QRect(850, 200, 101, 21));
        line = new QFrame(TransDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(830, 220, 21, 61));
        line->setFrameShadow(QFrame::Plain);
        line->setLineWidth(2);
        line->setFrameShape(QFrame::VLine);
        line_2 = new QFrame(TransDialog);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(840, 270, 121, 16));
        line_2->setFrameShadow(QFrame::Plain);
        line_2->setLineWidth(4);
        line_2->setMidLineWidth(1);
        line_2->setFrameShape(QFrame::HLine);
        line_3 = new QFrame(TransDialog);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(960, 220, 3, 61));
        line_3->setFrameShadow(QFrame::Plain);
        line_3->setLineWidth(2);
        line_3->setMidLineWidth(0);
        line_3->setFrameShape(QFrame::VLine);
        line_4 = new QFrame(TransDialog);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(840, 220, 121, 16));
        line_4->setFrameShadow(QFrame::Plain);
        line_4->setLineWidth(2);
        line_4->setFrameShape(QFrame::HLine);
        label_image = new QLabel(TransDialog);
        label_image->setObjectName(QStringLiteral("label_image"));
        label_image->setGeometry(QRect(190, 40, 141, 141));
        label_image_2 = new QLabel(TransDialog);
        label_image_2->setObjectName(QStringLiteral("label_image_2"));
        label_image_2->setGeometry(QRect(750, 40, 141, 141));
        highname_label->raise();
        warning_label->raise();
        label_6->raise();
        label_5->raise();
        label_7->raise();
        label_11->raise();
        start->raise();
        high_label->raise();
        end_button->raise();
        lcdMax->raise();
        lcdScoreFinal->raise();
        congrat_label->raise();
        pushButton->raise();
        lineEdit->raise();
        title->raise();
        label_2->raise();
        good_label->raise();
        label_4->raise();
        label_8->raise();
        lcdNumber->raise();
        progressBar->raise();
        label_9->raise();
        label_10->raise();
        next_button->raise();
        max_label->raise();
        lcdHigh->raise();
        logged_as->raise();
        username_label->raise();
        percentage->raise();
        percent->raise();
        label_percent->raise();
        line->raise();
        line_2->raise();
        line_3->raise();
        line_4->raise();
        label_image->raise();
        label_image_2->raise();

        retranslateUi(TransDialog);

        QMetaObject::connectSlotsByName(TransDialog);
    } // setupUi

    void retranslateUi(QDialog *TransDialog)
    {
        TransDialog->setWindowTitle(QApplication::translate("TransDialog", "Verb training", 0));
        pushButton->setText(QApplication::translate("TransDialog", "Validate", 0));
#ifndef QT_NO_WHATSTHIS
        lineEdit->setWhatsThis(QApplication::translate("TransDialog", "<html><head/><body><p>Enter translation</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        lineEdit->setText(QString());
        title->setText(QApplication::translate("TransDialog", "<html><head/><body><p><span style=\" font-size:22pt; font-weight:600; font-style:italic; color:#aa0000;\">Train your vocabulary !</span></p></body></html>", 0));
        label_2->setText(QApplication::translate("TransDialog", "<html><head/><body><p><span style=\" font-size:16pt; color:#aa0000;\">What's the french for :</span></p></body></html>", 0));
        good_label->setText(QApplication::translate("TransDialog", "<html><head/><body><p><br/></p></body></html>", 0));
        label_4->setText(QApplication::translate("TransDialog", "Your answer :", 0));
        label_5->setText(QApplication::translate("TransDialog", "<html><head/><body><p><span style=\" color:#aa0000;\">Excpected answer :</span></p></body></html>", 0));
        label_6->setText(QString());
        label_7->setText(QString());
        label_8->setText(QApplication::translate("TransDialog", "<html><head/><body><p><span style=\" color:#aa0000;\">Wrong ...</span></p></body></html>", 0));
        label_9->setText(QApplication::translate("TransDialog", "<html><head/><body><p><span style=\" color:#ff5500;\">Score :</span></p></body></html>", 0));
        label_10->setText(QApplication::translate("TransDialog", "<html><head/><body><p><span style=\" color:#aa0000;\">Progression :</span></p></body></html>", 0));
        label_11->setText(QApplication::translate("TransDialog", "<html><head/><body><p><span style=\" color:#00aa00;\">Right !</span></p></body></html>", 0));
        next_button->setText(QApplication::translate("TransDialog", "Next !", 0));
        congrat_label->setText(QApplication::translate("TransDialog", "<html><head/><body><p><span style=\" font-size:20pt; color:#aa0000;\">Finished ! Your final score :</span></p></body></html>", 0));
        max_label->setText(QApplication::translate("TransDialog", "<html><head/><body><p><span style=\" font-size:16pt; font-style:italic; color:#aa0000;\">Max. score reachable :</span></p></body></html>", 0));
        high_label->setText(QApplication::translate("TransDialog", "<html><head/><body><p><span style=\" font-size:16pt; color:#000000;\">Highscore :</span></p></body></html>", 0));
        highname_label->setText(QApplication::translate("TransDialog", "<html><head/><body><p><span style=\" font-size:14pt; font-style:italic; color:#aa0000;\">by NAME</span></p></body></html>", 0));
        logged_as->setText(QApplication::translate("TransDialog", "<html><head/><body><p><span style=\" font-size:10pt; font-style:italic;\">Logged as :</span></p></body></html>", 0));
        username_label->setText(QString());
        end_button->setText(QApplication::translate("TransDialog", "Got it !", 0));
        start->setText(QApplication::translate("TransDialog", "I'm ready !", 0));
        warning_label->setText(QApplication::translate("TransDialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; color:#ff0000;\">The CSV file does </span><span style=\" font-size:10pt; font-weight:600; text-decoration: underline; color:#ff0000;\">NOT</span><span style=\" font-size:10pt; color:#ff0000;\"> exist.</span></p><p align=\"center\"><span style=\" font-size:10pt; color:#ff0000;\">Please close this windows, then in the main menu :</span></p><p align=\"center\"><span style=\" font-size:10pt; color:#ff0000;\">'Settings' -&gt; 'Load vocabulary CSV file ...' </span></p><p align=\"center\"><span style=\" font-size:10pt; color:#ff0000;\">and give an existing file.</span></p></body></html>", 0));
        percentage->setText(QString());
        percent->setText(QApplication::translate("TransDialog", "<html><head/><body><p><span style=\" font-size:18pt;\">%</span></p></body></html>", 0));
        label_percent->setText(QApplication::translate("TransDialog", "<html><head/><body><p><span style=\" font-size:12pt; font-style:italic; color:#aa0000;\">Percentage :</span></p></body></html>", 0));
        label_image->setText(QApplication::translate("TransDialog", "tr", 0));
        label_image_2->setText(QApplication::translate("TransDialog", "tr", 0));
    } // retranslateUi

};

namespace Ui {
    class TransDialog: public Ui_TransDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSDIALOG_H
