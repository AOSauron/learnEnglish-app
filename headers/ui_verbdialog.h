/********************************************************************************
** Form generated from reading UI file 'verbdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VERBDIALOG_H
#define UI_VERBDIALOG_H

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

class Ui_VerbDialog
{
public:
    QPushButton *start;
    QLabel *warning_label;
    QLabel *title;
    QLabel *username_label;
    QLabel *logged_as;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_6;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QPushButton *pushButton;
    QLabel *label_7;
    QPushButton *next_button;
    QProgressBar *progressBar;
    QLabel *label_8;
    QLCDNumber *lcdNumber;
    QLabel *label_9;
    QLabel *right_right;
    QLabel *wrong_left;
    QLabel *right_left;
    QLabel *wrong_right;
    QLabel *correct_left;
    QLabel *correct_right;
    QLabel *good_left;
    QLabel *good_right;
    QPushButton *end_button;
    QFrame *line_4;
    QFrame *line_5;
    QLabel *percentage;
    QLabel *congrat_label;
    QFrame *line_6;
    QFrame *line_7;
    QLabel *label_percent;
    QLCDNumber *lcdScoreFinal;
    QLCDNumber *lcdMax;
    QLabel *highname_label;
    QLCDNumber *lcdHigh;
    QLabel *max_label;
    QLabel *high_label;
    QLabel *percent;
    QLabel *label_image;
    QLabel *label_image_2;

    void setupUi(QDialog *VerbDialog)
    {
        if (VerbDialog->objectName().isEmpty())
            VerbDialog->setObjectName(QStringLiteral("VerbDialog"));
        VerbDialog->resize(1120, 571);
        start = new QPushButton(VerbDialog);
        start->setObjectName(QStringLiteral("start"));
        start->setGeometry(QRect(400, 260, 261, 111));
        QFont font;
        font.setFamily(QStringLiteral("Meiryo UI"));
        font.setBold(true);
        font.setWeight(75);
        start->setFont(font);
        start->setCursor(QCursor(Qt::PointingHandCursor));
        start->setAutoFillBackground(false);
        start->setDefault(false);
        start->setFlat(false);
        warning_label = new QLabel(VerbDialog);
        warning_label->setObjectName(QStringLiteral("warning_label"));
        warning_label->setGeometry(QRect(200, 360, 661, 111));
        title = new QLabel(VerbDialog);
        title->setObjectName(QStringLiteral("title"));
        title->setGeometry(QRect(320, 50, 491, 101));
        QFont font1;
        font1.setFamily(QStringLiteral("Meiryo UI"));
        font1.setPointSize(9);
        title->setFont(font1);
        username_label = new QLabel(VerbDialog);
        username_label->setObjectName(QStringLiteral("username_label"));
        username_label->setGeometry(QRect(540, 130, 111, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("Meiryo UI"));
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        username_label->setFont(font2);
        logged_as = new QLabel(VerbDialog);
        logged_as->setObjectName(QStringLiteral("logged_as"));
        logged_as->setGeometry(QRect(460, 130, 91, 31));
        label = new QLabel(VerbDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 250, 151, 41));
        QFont font3;
        font3.setFamily(QStringLiteral("Meiryo UI"));
        font3.setPointSize(11);
        font3.setBold(true);
        font3.setWeight(75);
        label->setFont(font3);
        label_2 = new QLabel(VerbDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(370, 250, 151, 41));
        label_2->setFont(font3);
        label_3 = new QLabel(VerbDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(580, 250, 171, 41));
        label_3->setFont(font3);
        label_4 = new QLabel(VerbDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(810, 250, 151, 41));
        label_4->setFont(font3);
        label_5 = new QLabel(VerbDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(170, 290, 141, 41));
        QFont font4;
        font4.setFamily(QStringLiteral("Meiryo UI"));
        font4.setPointSize(14);
        font4.setBold(true);
        font4.setWeight(75);
        label_5->setFont(font4);
        lineEdit = new QLineEdit(VerbDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(360, 300, 141, 21));
        lineEdit->setFont(font1);
        lineEdit_2 = new QLineEdit(VerbDialog);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(580, 300, 151, 21));
        lineEdit_2->setFont(font1);
        label_6 = new QLabel(VerbDialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(820, 290, 191, 41));
        QFont font5;
        font5.setFamily(QStringLiteral("Meiryo UI"));
        font5.setPointSize(10);
        font5.setBold(true);
        font5.setItalic(true);
        font5.setWeight(75);
        label_6->setFont(font5);
        line = new QFrame(VerbDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(320, 270, 3, 61));
        line->setFrameShadow(QFrame::Plain);
        line->setLineWidth(2);
        line->setFrameShape(QFrame::VLine);
        line_2 = new QFrame(VerbDialog);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(540, 270, 3, 61));
        line_2->setFrameShadow(QFrame::Plain);
        line_2->setLineWidth(2);
        line_2->setFrameShape(QFrame::VLine);
        line_3 = new QFrame(VerbDialog);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(770, 270, 3, 61));
        line_3->setFrameShadow(QFrame::Plain);
        line_3->setLineWidth(2);
        line_3->setFrameShape(QFrame::VLine);
        pushButton = new QPushButton(VerbDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(490, 420, 101, 41));
        QFont font6;
        font6.setFamily(QStringLiteral("Meiryo UI"));
        font6.setPointSize(10);
        pushButton->setFont(font6);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        label_7 = new QLabel(VerbDialog);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(370, 210, 371, 21));
        QFont font7;
        font7.setFamily(QStringLiteral("Meiryo UI"));
        font7.setPointSize(11);
        font7.setItalic(true);
        label_7->setFont(font7);
        next_button = new QPushButton(VerbDialog);
        next_button->setObjectName(QStringLiteral("next_button"));
        next_button->setGeometry(QRect(510, 420, 61, 41));
        QFont font8;
        font8.setFamily(QStringLiteral("Meiryo UI"));
        font8.setPointSize(9);
        font8.setBold(true);
        font8.setWeight(75);
        next_button->setFont(font8);
        next_button->setCursor(QCursor(Qt::PointingHandCursor));
        progressBar = new QProgressBar(VerbDialog);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(780, 390, 271, 23));
        progressBar->setValue(0);
        progressBar->setTextVisible(true);
        progressBar->setTextDirection(QProgressBar::TopToBottom);
        label_8 = new QLabel(VerbDialog);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(780, 370, 91, 21));
        QFont font9;
        font9.setFamily(QStringLiteral("Meiryo UI"));
        label_8->setFont(font9);
        lcdNumber = new QLCDNumber(VerbDialog);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(780, 450, 231, 71));
        lcdNumber->setFrameShadow(QFrame::Plain);
        lcdNumber->setLineWidth(2);
        label_9 = new QLabel(VerbDialog);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(780, 430, 91, 21));
        label_9->setFont(font9);
        right_right = new QLabel(VerbDialog);
        right_right->setObjectName(QStringLiteral("right_right"));
        right_right->setGeometry(QRect(640, 340, 61, 16));
        right_right->setFont(font8);
        wrong_left = new QLabel(VerbDialog);
        wrong_left->setObjectName(QStringLiteral("wrong_left"));
        wrong_left->setGeometry(QRect(400, 340, 61, 16));
        wrong_left->setFont(font8);
        right_left = new QLabel(VerbDialog);
        right_left->setObjectName(QStringLiteral("right_left"));
        right_left->setGeometry(QRect(400, 340, 61, 16));
        right_left->setFont(font8);
        wrong_right = new QLabel(VerbDialog);
        wrong_right->setObjectName(QStringLiteral("wrong_right"));
        wrong_right->setGeometry(QRect(640, 340, 61, 16));
        wrong_right->setFont(font8);
        correct_left = new QLabel(VerbDialog);
        correct_left->setObjectName(QStringLiteral("correct_left"));
        correct_left->setGeometry(QRect(330, 366, 111, 20));
        correct_left->setFont(font1);
        correct_right = new QLabel(VerbDialog);
        correct_right->setObjectName(QStringLiteral("correct_right"));
        correct_right->setGeometry(QRect(550, 366, 111, 20));
        correct_right->setFont(font1);
        good_left = new QLabel(VerbDialog);
        good_left->setObjectName(QStringLiteral("good_left"));
        good_left->setGeometry(QRect(430, 366, 111, 20));
        good_left->setFont(font2);
        good_right = new QLabel(VerbDialog);
        good_right->setObjectName(QStringLiteral("good_right"));
        good_right->setGeometry(QRect(650, 365, 111, 20));
        good_right->setFont(font2);
        end_button = new QPushButton(VerbDialog);
        end_button->setObjectName(QStringLiteral("end_button"));
        end_button->setGeometry(QRect(480, 460, 121, 61));
        end_button->setFont(font2);
        end_button->setCursor(QCursor(Qt::PointingHandCursor));
        line_4 = new QFrame(VerbDialog);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(910, 190, 3, 61));
        line_4->setFrameShadow(QFrame::Plain);
        line_4->setLineWidth(2);
        line_4->setMidLineWidth(0);
        line_4->setFrameShape(QFrame::VLine);
        line_5 = new QFrame(VerbDialog);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(790, 240, 121, 16));
        line_5->setFrameShadow(QFrame::Plain);
        line_5->setLineWidth(4);
        line_5->setMidLineWidth(1);
        line_5->setFrameShape(QFrame::HLine);
        percentage = new QLabel(VerbDialog);
        percentage->setObjectName(QStringLiteral("percentage"));
        percentage->setGeometry(QRect(820, 200, 101, 41));
        percentage->setFont(font4);
        congrat_label = new QLabel(VerbDialog);
        congrat_label->setObjectName(QStringLiteral("congrat_label"));
        congrat_label->setGeometry(QRect(250, 190, 381, 61));
        congrat_label->setFont(font9);
        line_6 = new QFrame(VerbDialog);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setGeometry(QRect(780, 190, 21, 61));
        line_6->setFrameShadow(QFrame::Plain);
        line_6->setLineWidth(2);
        line_6->setFrameShape(QFrame::VLine);
        line_7 = new QFrame(VerbDialog);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setGeometry(QRect(790, 190, 121, 16));
        line_7->setFrameShadow(QFrame::Plain);
        line_7->setLineWidth(2);
        line_7->setFrameShape(QFrame::HLine);
        label_percent = new QLabel(VerbDialog);
        label_percent->setObjectName(QStringLiteral("label_percent"));
        label_percent->setGeometry(QRect(800, 170, 101, 21));
        lcdScoreFinal = new QLCDNumber(VerbDialog);
        lcdScoreFinal->setObjectName(QStringLiteral("lcdScoreFinal"));
        lcdScoreFinal->setGeometry(QRect(620, 190, 121, 61));
        lcdMax = new QLCDNumber(VerbDialog);
        lcdMax->setObjectName(QStringLiteral("lcdMax"));
        lcdMax->setGeometry(QRect(620, 280, 81, 41));
        highname_label = new QLabel(VerbDialog);
        highname_label->setObjectName(QStringLiteral("highname_label"));
        highname_label->setGeometry(QRect(450, 400, 171, 31));
        QFont font10;
        font10.setFamily(QStringLiteral("Meiryo UI"));
        font10.setPointSize(12);
        font10.setItalic(true);
        highname_label->setFont(font10);
        lcdHigh = new QLCDNumber(VerbDialog);
        lcdHigh->setObjectName(QStringLiteral("lcdHigh"));
        lcdHigh->setGeometry(QRect(570, 360, 71, 31));
        max_label = new QLabel(VerbDialog);
        max_label->setObjectName(QStringLiteral("max_label"));
        max_label->setGeometry(QRect(380, 280, 231, 61));
        high_label = new QLabel(VerbDialog);
        high_label->setObjectName(QStringLiteral("high_label"));
        high_label->setGeometry(QRect(450, 360, 121, 41));
        percent = new QLabel(VerbDialog);
        percent->setObjectName(QStringLiteral("percent"));
        percent->setGeometry(QRect(650, 360, 61, 31));
        QFont font11;
        font11.setPointSize(10);
        percent->setFont(font11);
        label_image = new QLabel(VerbDialog);
        label_image->setObjectName(QStringLiteral("label_image"));
        label_image->setGeometry(QRect(160, 30, 141, 141));
        label_image_2 = new QLabel(VerbDialog);
        label_image_2->setObjectName(QStringLiteral("label_image_2"));
        label_image_2->setGeometry(QRect(790, 30, 141, 141));
        congrat_label->raise();
        right_left->raise();
        label->raise();
        warning_label->raise();
        start->raise();
        title->raise();
        username_label->raise();
        logged_as->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        lineEdit->raise();
        lineEdit_2->raise();
        label_6->raise();
        line->raise();
        line_2->raise();
        line_3->raise();
        pushButton->raise();
        label_7->raise();
        next_button->raise();
        progressBar->raise();
        label_8->raise();
        lcdNumber->raise();
        label_9->raise();
        right_right->raise();
        wrong_left->raise();
        wrong_right->raise();
        correct_left->raise();
        correct_right->raise();
        good_left->raise();
        good_right->raise();
        end_button->raise();
        line_4->raise();
        line_5->raise();
        percentage->raise();
        line_6->raise();
        line_7->raise();
        label_percent->raise();
        lcdScoreFinal->raise();
        lcdMax->raise();
        highname_label->raise();
        lcdHigh->raise();
        max_label->raise();
        high_label->raise();
        percent->raise();
        label_image->raise();
        label_image_2->raise();

        retranslateUi(VerbDialog);

        QMetaObject::connectSlotsByName(VerbDialog);
    } // setupUi

    void retranslateUi(QDialog *VerbDialog)
    {
        VerbDialog->setWindowTitle(QApplication::translate("VerbDialog", "Verb training", 0));
        start->setText(QApplication::translate("VerbDialog", "I'm ready !", 0));
        warning_label->setText(QApplication::translate("VerbDialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; color:#ff0000;\">The CSV file does </span><span style=\" font-size:10pt; font-weight:600; text-decoration: underline; color:#ff0000;\">NOT</span><span style=\" font-size:10pt; color:#ff0000;\"> exist.</span></p><p align=\"center\"><span style=\" font-size:10pt; color:#ff0000;\">Please close this windows, then in the main menu :</span></p><p align=\"center\"><span style=\" font-size:10pt; color:#ff0000;\">'Settings' -&gt; 'Load irregular verbs CSV file ...' </span></p><p align=\"center\"><span style=\" font-size:10pt; color:#ff0000;\">and give an existing file.</span></p></body></html>", 0));
        title->setText(QApplication::translate("VerbDialog", "<html><head/><body><p><span style=\" font-size:22pt; font-weight:600; font-style:italic; color:#aa0000;\">Check your irregular verbs !</span></p></body></html>", 0));
        username_label->setText(QString());
        logged_as->setText(QApplication::translate("VerbDialog", "<html><head/><body><p><span style=\" font-size:10pt; font-style:italic;\">Logged as :</span></p></body></html>", 0));
        label->setText(QApplication::translate("VerbDialog", "<html><head/><body><p><span style=\" text-decoration: underline; color:#aa557f;\">Infinitive form</span></p></body></html>", 0));
        label_2->setText(QApplication::translate("VerbDialog", "<html><head/><body><p><span style=\" text-decoration: underline; color:#aa557f;\">Preterite form</span></p></body></html>", 0));
        label_3->setText(QApplication::translate("VerbDialog", "<html><head/><body><p><span style=\" text-decoration: underline; color:#aa557f;\">Past participle form</span></p></body></html>", 0));
        label_4->setText(QApplication::translate("VerbDialog", "<html><head/><body><p><span style=\" font-weight:400; font-style:italic; color:#00007f;\">French meaning </span></p></body></html>", 0));
        label_5->setText(QApplication::translate("VerbDialog", "TextLabel", 0));
        label_6->setText(QApplication::translate("VerbDialog", "TextLabel", 0));
        pushButton->setText(QApplication::translate("VerbDialog", "Validate", 0));
        label_7->setText(QApplication::translate("VerbDialog", "<html><head/><body><p><span style=\" text-decoration: underline; color:#aa0000;\">Fill the blanks</span><span style=\" color:#aa0000;\"> (+1 point for each if correct) :</span></p></body></html>", 0));
        next_button->setText(QApplication::translate("VerbDialog", "Next !", 0));
        label_8->setText(QApplication::translate("VerbDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Meiryo UI'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt; font-style:italic; color:#aa0000;\">Progression</span></p></body></html>", 0));
        label_9->setText(QApplication::translate("VerbDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Meiryo UI'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600; font-style:italic; color:#ff5500;\">Score</span></p></body></html>", 0));
        right_right->setText(QApplication::translate("VerbDialog", "<html><head/><body><p><span style=\" color:#00aa00;\">Right !</span></p></body></html>", 0));
        wrong_left->setText(QApplication::translate("VerbDialog", "<html><head/><body><p><span style=\" color:#ff0000;\">Wrong ...</span></p></body></html>", 0));
        right_left->setText(QApplication::translate("VerbDialog", "<html><head/><body><p><span style=\" color:#00aa00;\">Right !</span></p></body></html>", 0));
        wrong_right->setText(QApplication::translate("VerbDialog", "<html><head/><body><p><span style=\" color:#ff0000;\">Wrong ...</span></p></body></html>", 0));
        correct_left->setText(QApplication::translate("VerbDialog", "<html><head/><body><p><span style=\" font-size:8pt; font-style:italic; color:#aa0000;\">Correct answer :</span></p></body></html>", 0));
        correct_right->setText(QApplication::translate("VerbDialog", "<html><head/><body><p><span style=\" font-size:8pt; font-style:italic; color:#aa0000;\">Correct answer :</span></p></body></html>", 0));
        good_left->setText(QApplication::translate("VerbDialog", "TextLabel", 0));
        good_right->setText(QApplication::translate("VerbDialog", "TextLabel", 0));
        end_button->setText(QApplication::translate("VerbDialog", "Got it !", 0));
        percentage->setText(QString());
        congrat_label->setText(QApplication::translate("VerbDialog", "<html><head/><body><p><span style=\" font-size:20pt; color:#aa0000;\">Finished ! Your final score :</span></p></body></html>", 0));
        label_percent->setText(QApplication::translate("VerbDialog", "<html><head/><body><p><span style=\" font-size:12pt; font-style:italic; color:#aa0000;\">Percentage :</span></p></body></html>", 0));
        highname_label->setText(QApplication::translate("VerbDialog", "<html><head/><body><p><span style=\" font-size:14pt; font-style:italic; color:#aa0000;\">by NAME</span></p></body></html>", 0));
        max_label->setText(QApplication::translate("VerbDialog", "<html><head/><body><p><span style=\" font-size:16pt; font-style:italic; color:#aa0000;\">Max. score reachable :</span></p></body></html>", 0));
        high_label->setText(QApplication::translate("VerbDialog", "<html><head/><body><p><span style=\" font-size:16pt; color:#000000;\">Highscore :</span></p></body></html>", 0));
        percent->setText(QApplication::translate("VerbDialog", "<html><head/><body><p><span style=\" font-size:18pt;\">%</span></p></body></html>", 0));
        label_image->setText(QApplication::translate("VerbDialog", "tr", 0));
        label_image_2->setText(QApplication::translate("VerbDialog", "tr", 0));
    } // retranslateUi

};

namespace Ui {
    class VerbDialog: public Ui_VerbDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VERBDIALOG_H
