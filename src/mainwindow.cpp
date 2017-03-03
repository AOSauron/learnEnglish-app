#include "mainwindow.h"

mainwindow::mainwindow() : QWidget()
{
  setFixedSize(900, 600);

  m_quitbutton = new QPushButton("Save and quit", this);

  m_quitbutton->setFont(QFont("Times", 10, QFont::Bold));
  m_quitbutton->setCursor(Qt::PointingHandCursor);
  m_quitbutton->setIcon(QIcon("resources/bomb.jpg"));
  m_quitbutton->move(500,500);

  QObject::connect(m_quitbutton, SIGNAL(clicked()), qApp, SLOT(quit()));
}
