#include "QtGuiApplication1.h"

#include <QCoreApplication>

QtGuiApplication1::QtGuiApplication1(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	// Create the button, make "this" the parent
	m_button = new QPushButton("My Button", this);
	// set size and location of the button
	m_button->setGeometry(QRect(QPoint(100, 100),
		QSize(200, 50)));

	// Connect button signal to appropriate slot
	connect(m_button, SIGNAL(released()), this, SLOT(handleButton()));
	
}

void QtGuiApplication1::handleButton()
{
	// change the text
	m_button->setText("Example");
	// resize button
	m_button->resize(100, 100);
}
