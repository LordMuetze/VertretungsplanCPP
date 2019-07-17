#pragma once
#include <QtWidgets/QMainWindow>
#include "ui_VertretungsplanCPP.h"

#include "Stunde.h"
#include "Tag.h"
#include "Blockierung.h"
#include "Raum.h"
#include "Lehrer.h"
#include "Model.h"
#include "Klasse.h"
#include "Fach.h"


class VertretungsplanCPP : public QMainWindow
{
	Q_OBJECT

public:
	VertretungsplanCPP(QWidget *parent = Q_NULLPTR);

private:
	Ui::VertretungsplanCPPClass ui;
};