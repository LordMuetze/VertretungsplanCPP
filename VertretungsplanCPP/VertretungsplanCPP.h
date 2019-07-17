#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_VertretungsplanCPP.h"

class VertretungsplanCPP : public QMainWindow
{
	Q_OBJECT

public:
	VertretungsplanCPP(QWidget *parent = Q_NULLPTR);

private:
	Ui::VertretungsplanCPPClass ui;
};
