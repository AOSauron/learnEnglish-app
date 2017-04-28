#include "mainwindow.h"

mainwindow::mainwindow() : QWidget()
{
  setFixedSize(900, 600);

  // Instanciate buttons
  m_quitbutton = new QPushButton("Save and quit", this);
  m_launchbutton = new QPushButton("Launch training", this);

  /* Setting buttons */
  m_quitbutton->setFont(QFont("Times", 10, QFont::Bold));
  m_quitbutton->setCursor(Qt::PointingHandCursor);
  m_quitbutton->setIcon(QIcon("resources/bomb.jpg"));
  m_quitbutton->move(500,500);

  m_launchbutton->setFont(QFont("Times", 10, QFont::Bold));
  m_launchbutton->setCursor(Qt::PointingHandCursor);
  m_launchbutton->setIcon(QIcon("resources/bomb.jpg"));
  m_launchbutton->move(350,500);
  /* End settings */

  // Button listeners
  QObject::connect(m_quitbutton, SIGNAL(clicked()), qApp, SLOT(quit()));
  QObject::connect(m_launchbutton, SIGNAL(clicked()), qApp, SLOT(quit()));
}
