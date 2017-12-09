#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtGuiApplication1.h"
#include <QPushButton>
#include <QMainWindow>
namespace Ui {
	class MainWindow;
}

class QtGuiApplication1 : public QMainWindow
{
	Q_OBJECT

public:
	//QtGuiApplication1(QWidget *parent = Q_NULLPTR);
	explicit QtGuiApplication1(QWidget *parent = 0);
private slots:
	void handleButton();

private:
	Ui::QtGuiApplication1Class ui;
	QPushButton *m_button;


};
