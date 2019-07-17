/********************************************************************************
** Form generated from reading UI file 'VertretungsplanCPP.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VERTRETUNGSPLANCPP_H
#define UI_VERTRETUNGSPLANCPP_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VertretungsplanCPPClass
{
public:
    QAction *actionLehrer_Abwesenheit_eintragen;
    QAction *actionRaum_blockieren;
    QAction *actionallgemeiner_Unterrichtsschluss;
    QAction *action_ffnen;
    QAction *actionSpeichern;
    QAction *actionSpeichern_unter;
    QAction *actionImportieren;
    QAction *actionPDF_exportieren;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_1;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *gb_problemStunden;
    QVBoxLayout *verticalLayout_11;
    QTableWidget *tw_problemStunden;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *gb_frei;
    QVBoxLayout *verticalLayout_10;
    QTableWidget *tw_frei;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *btn_vertretungsEintragen;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer;
    QGroupBox *gb_uebersicht;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *gb_abwesendeLehrer;
    QVBoxLayout *verticalLayout_3;
    QTableWidget *tw_abwesendeLehrer;
    QGroupBox *gb_alleLehrer;
    QVBoxLayout *verticalLayout;
    QTableWidget *tw_alleLehrer;
    QHBoxLayout *horizontalLayout_12;
    QGroupBox *gb_blockierteRaeume;
    QVBoxLayout *verticalLayout_4;
    QTableWidget *tw_blockierteRaeume;
    QGroupBox *gb_alleRaeume;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *tw_alleRaeume;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_datum;
    QSpacerItem *horizontalSpacer_4;
    QLabel *lbl_Datum;
    QDateEdit *de_mainDatum;
    QPushButton *btn_datumHeute;
    QSpacerItem *horizontalSpacer_6;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_7;
    QGroupBox *gb_Vertretungstunden;
    QVBoxLayout *verticalLayout_13;
    QTableWidget *tw_vertretungsstunden;
    QGroupBox *gb_allgInfos;
    QHBoxLayout *horizontalLayout_5;
    QTextEdit *te_allgInfos;
    QSpacerItem *verticalSpacer;
    QMenuBar *menuBar;
    QMenu *menuDatei;
    QMenu *menu_nderungen;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *VertretungsplanCPPClass)
    {
        if (VertretungsplanCPPClass->objectName().isEmpty())
            VertretungsplanCPPClass->setObjectName(QStringLiteral("VertretungsplanCPPClass"));
        VertretungsplanCPPClass->resize(1018, 835);
        actionLehrer_Abwesenheit_eintragen = new QAction(VertretungsplanCPPClass);
        actionLehrer_Abwesenheit_eintragen->setObjectName(QStringLiteral("actionLehrer_Abwesenheit_eintragen"));
        actionRaum_blockieren = new QAction(VertretungsplanCPPClass);
        actionRaum_blockieren->setObjectName(QStringLiteral("actionRaum_blockieren"));
        actionallgemeiner_Unterrichtsschluss = new QAction(VertretungsplanCPPClass);
        actionallgemeiner_Unterrichtsschluss->setObjectName(QStringLiteral("actionallgemeiner_Unterrichtsschluss"));
        action_ffnen = new QAction(VertretungsplanCPPClass);
        action_ffnen->setObjectName(QStringLiteral("action_ffnen"));
        actionSpeichern = new QAction(VertretungsplanCPPClass);
        actionSpeichern->setObjectName(QStringLiteral("actionSpeichern"));
        actionSpeichern_unter = new QAction(VertretungsplanCPPClass);
        actionSpeichern_unter->setObjectName(QStringLiteral("actionSpeichern_unter"));
        actionImportieren = new QAction(VertretungsplanCPPClass);
        actionImportieren->setObjectName(QStringLiteral("actionImportieren"));
        actionPDF_exportieren = new QAction(VertretungsplanCPPClass);
        actionPDF_exportieren->setObjectName(QStringLiteral("actionPDF_exportieren"));
        centralWidget = new QWidget(VertretungsplanCPPClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_5 = new QVBoxLayout(centralWidget);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_1 = new QHBoxLayout();
        horizontalLayout_1->setSpacing(6);
        horizontalLayout_1->setObjectName(QStringLiteral("horizontalLayout_1"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        gb_problemStunden = new QGroupBox(centralWidget);
        gb_problemStunden->setObjectName(QStringLiteral("gb_problemStunden"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(gb_problemStunden->sizePolicy().hasHeightForWidth());
        gb_problemStunden->setSizePolicy(sizePolicy);
        verticalLayout_11 = new QVBoxLayout(gb_problemStunden);
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        tw_problemStunden = new QTableWidget(gb_problemStunden);
        tw_problemStunden->setObjectName(QStringLiteral("tw_problemStunden"));
        tw_problemStunden->setContextMenuPolicy(Qt::ActionsContextMenu);
        tw_problemStunden->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tw_problemStunden->setSelectionMode(QAbstractItemView::SingleSelection);
        tw_problemStunden->setSelectionBehavior(QAbstractItemView::SelectRows);
        tw_problemStunden->horizontalHeader()->setCascadingSectionResizes(true);
        tw_problemStunden->horizontalHeader()->setStretchLastSection(true);
        tw_problemStunden->verticalHeader()->setVisible(false);

        verticalLayout_11->addWidget(tw_problemStunden);


        horizontalLayout_4->addWidget(gb_problemStunden);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setSizeConstraint(QLayout::SetDefaultConstraint);
        gb_frei = new QGroupBox(centralWidget);
        gb_frei->setObjectName(QStringLiteral("gb_frei"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(gb_frei->sizePolicy().hasHeightForWidth());
        gb_frei->setSizePolicy(sizePolicy1);
        verticalLayout_10 = new QVBoxLayout(gb_frei);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        tw_frei = new QTableWidget(gb_frei);
        tw_frei->setObjectName(QStringLiteral("tw_frei"));
        tw_frei->setContextMenuPolicy(Qt::ActionsContextMenu);
        tw_frei->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tw_frei->setSelectionMode(QAbstractItemView::SingleSelection);
        tw_frei->setSelectionBehavior(QAbstractItemView::SelectRows);
        tw_frei->horizontalHeader()->setVisible(false);
        tw_frei->horizontalHeader()->setCascadingSectionResizes(true);
        tw_frei->horizontalHeader()->setStretchLastSection(true);
        tw_frei->verticalHeader()->setVisible(false);

        verticalLayout_10->addWidget(tw_frei);


        verticalLayout_8->addWidget(gb_frei);


        horizontalLayout_4->addLayout(verticalLayout_8);


        verticalLayout_6->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        btn_vertretungsEintragen = new QPushButton(centralWidget);
        btn_vertretungsEintragen->setObjectName(QStringLiteral("btn_vertretungsEintragen"));
        QFont font;
        font.setPointSize(10);
        btn_vertretungsEintragen->setFont(font);

        horizontalLayout_3->addWidget(btn_vertretungsEintragen);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_8);


        verticalLayout_6->addLayout(horizontalLayout_3);


        horizontalLayout_1->addLayout(verticalLayout_6);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_1->addItem(horizontalSpacer);

        gb_uebersicht = new QGroupBox(centralWidget);
        gb_uebersicht->setObjectName(QStringLiteral("gb_uebersicht"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(gb_uebersicht->sizePolicy().hasHeightForWidth());
        gb_uebersicht->setSizePolicy(sizePolicy2);
        verticalLayout_7 = new QVBoxLayout(gb_uebersicht);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        gb_abwesendeLehrer = new QGroupBox(gb_uebersicht);
        gb_abwesendeLehrer->setObjectName(QStringLiteral("gb_abwesendeLehrer"));
        verticalLayout_3 = new QVBoxLayout(gb_abwesendeLehrer);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        tw_abwesendeLehrer = new QTableWidget(gb_abwesendeLehrer);
        tw_abwesendeLehrer->setObjectName(QStringLiteral("tw_abwesendeLehrer"));
        tw_abwesendeLehrer->setContextMenuPolicy(Qt::ActionsContextMenu);
        tw_abwesendeLehrer->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tw_abwesendeLehrer->setDragDropOverwriteMode(true);
        tw_abwesendeLehrer->setSelectionMode(QAbstractItemView::SingleSelection);
        tw_abwesendeLehrer->setSelectionBehavior(QAbstractItemView::SelectRows);
        tw_abwesendeLehrer->setRowCount(0);
        tw_abwesendeLehrer->horizontalHeader()->setCascadingSectionResizes(true);
        tw_abwesendeLehrer->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tw_abwesendeLehrer->horizontalHeader()->setStretchLastSection(true);
        tw_abwesendeLehrer->verticalHeader()->setVisible(false);
        tw_abwesendeLehrer->verticalHeader()->setHighlightSections(false);
        tw_abwesendeLehrer->verticalHeader()->setMinimumSectionSize(1);
        tw_abwesendeLehrer->verticalHeader()->setStretchLastSection(false);

        verticalLayout_3->addWidget(tw_abwesendeLehrer);


        horizontalLayout_2->addWidget(gb_abwesendeLehrer);

        gb_alleLehrer = new QGroupBox(gb_uebersicht);
        gb_alleLehrer->setObjectName(QStringLiteral("gb_alleLehrer"));
        verticalLayout = new QVBoxLayout(gb_alleLehrer);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tw_alleLehrer = new QTableWidget(gb_alleLehrer);
        tw_alleLehrer->setObjectName(QStringLiteral("tw_alleLehrer"));
        tw_alleLehrer->setContextMenuPolicy(Qt::ActionsContextMenu);
        tw_alleLehrer->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tw_alleLehrer->setSelectionMode(QAbstractItemView::SingleSelection);
        tw_alleLehrer->setSelectionBehavior(QAbstractItemView::SelectRows);
        tw_alleLehrer->horizontalHeader()->setVisible(false);
        tw_alleLehrer->horizontalHeader()->setStretchLastSection(true);
        tw_alleLehrer->verticalHeader()->setVisible(false);
        tw_alleLehrer->verticalHeader()->setHighlightSections(false);
        tw_alleLehrer->verticalHeader()->setStretchLastSection(false);

        verticalLayout->addWidget(tw_alleLehrer);


        horizontalLayout_2->addWidget(gb_alleLehrer);


        verticalLayout_7->addLayout(horizontalLayout_2);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        gb_blockierteRaeume = new QGroupBox(gb_uebersicht);
        gb_blockierteRaeume->setObjectName(QStringLiteral("gb_blockierteRaeume"));
        verticalLayout_4 = new QVBoxLayout(gb_blockierteRaeume);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        tw_blockierteRaeume = new QTableWidget(gb_blockierteRaeume);
        tw_blockierteRaeume->setObjectName(QStringLiteral("tw_blockierteRaeume"));
        tw_blockierteRaeume->setContextMenuPolicy(Qt::ActionsContextMenu);
        tw_blockierteRaeume->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tw_blockierteRaeume->setSelectionMode(QAbstractItemView::SingleSelection);
        tw_blockierteRaeume->setSelectionBehavior(QAbstractItemView::SelectRows);
        tw_blockierteRaeume->setRowCount(0);
        tw_blockierteRaeume->horizontalHeader()->setCascadingSectionResizes(true);
        tw_blockierteRaeume->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tw_blockierteRaeume->horizontalHeader()->setStretchLastSection(true);
        tw_blockierteRaeume->verticalHeader()->setVisible(false);
        tw_blockierteRaeume->verticalHeader()->setHighlightSections(false);
        tw_blockierteRaeume->verticalHeader()->setMinimumSectionSize(1);

        verticalLayout_4->addWidget(tw_blockierteRaeume);


        horizontalLayout_12->addWidget(gb_blockierteRaeume);

        gb_alleRaeume = new QGroupBox(gb_uebersicht);
        gb_alleRaeume->setObjectName(QStringLiteral("gb_alleRaeume"));
        verticalLayout_2 = new QVBoxLayout(gb_alleRaeume);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        tw_alleRaeume = new QTableWidget(gb_alleRaeume);
        tw_alleRaeume->setObjectName(QStringLiteral("tw_alleRaeume"));
        tw_alleRaeume->setContextMenuPolicy(Qt::ActionsContextMenu);
        tw_alleRaeume->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tw_alleRaeume->setSelectionMode(QAbstractItemView::SingleSelection);
        tw_alleRaeume->setSelectionBehavior(QAbstractItemView::SelectRows);
        tw_alleRaeume->horizontalHeader()->setVisible(false);
        tw_alleRaeume->horizontalHeader()->setStretchLastSection(true);
        tw_alleRaeume->verticalHeader()->setVisible(false);
        tw_alleRaeume->verticalHeader()->setHighlightSections(false);
        tw_alleRaeume->verticalHeader()->setStretchLastSection(false);

        verticalLayout_2->addWidget(tw_alleRaeume);


        horizontalLayout_12->addWidget(gb_alleRaeume);


        verticalLayout_7->addLayout(horizontalLayout_12);


        horizontalLayout_1->addWidget(gb_uebersicht);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_1->addItem(horizontalSpacer_5);


        verticalLayout_5->addLayout(horizontalLayout_1);

        horizontalLayout_datum = new QHBoxLayout();
        horizontalLayout_datum->setSpacing(6);
        horizontalLayout_datum->setObjectName(QStringLiteral("horizontalLayout_datum"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_datum->addItem(horizontalSpacer_4);

        lbl_Datum = new QLabel(centralWidget);
        lbl_Datum->setObjectName(QStringLiteral("lbl_Datum"));

        horizontalLayout_datum->addWidget(lbl_Datum);

        de_mainDatum = new QDateEdit(centralWidget);
        de_mainDatum->setObjectName(QStringLiteral("de_mainDatum"));
        de_mainDatum->setDateTime(QDateTime(QDate(2019, 9, 25), QTime(0, 0, 0)));
        de_mainDatum->setMinimumDateTime(QDateTime(QDate(2019, 1, 1), QTime(0, 0, 0)));
        de_mainDatum->setCurrentSection(QDateTimeEdit::YearSection);
        de_mainDatum->setCalendarPopup(true);
        de_mainDatum->setCurrentSectionIndex(2);
        de_mainDatum->setDate(QDate(2019, 9, 25));

        horizontalLayout_datum->addWidget(de_mainDatum);

        btn_datumHeute = new QPushButton(centralWidget);
        btn_datumHeute->setObjectName(QStringLiteral("btn_datumHeute"));

        horizontalLayout_datum->addWidget(btn_datumHeute);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_datum->addItem(horizontalSpacer_6);


        verticalLayout_5->addLayout(horizontalLayout_datum);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy3);
        horizontalLayout_7 = new QHBoxLayout(groupBox);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        gb_Vertretungstunden = new QGroupBox(groupBox);
        gb_Vertretungstunden->setObjectName(QStringLiteral("gb_Vertretungstunden"));
        verticalLayout_13 = new QVBoxLayout(gb_Vertretungstunden);
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setContentsMargins(11, 11, 11, 11);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        tw_vertretungsstunden = new QTableWidget(gb_Vertretungstunden);
        tw_vertretungsstunden->setObjectName(QStringLiteral("tw_vertretungsstunden"));
        tw_vertretungsstunden->setContextMenuPolicy(Qt::ActionsContextMenu);
        tw_vertretungsstunden->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tw_vertretungsstunden->setSelectionMode(QAbstractItemView::SingleSelection);
        tw_vertretungsstunden->setSelectionBehavior(QAbstractItemView::SelectRows);
        tw_vertretungsstunden->horizontalHeader()->setCascadingSectionResizes(true);
        tw_vertretungsstunden->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_13->addWidget(tw_vertretungsstunden);


        horizontalLayout_7->addWidget(gb_Vertretungstunden);

        gb_allgInfos = new QGroupBox(groupBox);
        gb_allgInfos->setObjectName(QStringLiteral("gb_allgInfos"));
        sizePolicy2.setHeightForWidth(gb_allgInfos->sizePolicy().hasHeightForWidth());
        gb_allgInfos->setSizePolicy(sizePolicy2);
        horizontalLayout_5 = new QHBoxLayout(gb_allgInfos);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        te_allgInfos = new QTextEdit(gb_allgInfos);
        te_allgInfos->setObjectName(QStringLiteral("te_allgInfos"));
        te_allgInfos->setReadOnly(true);

        horizontalLayout_5->addWidget(te_allgInfos);


        horizontalLayout_7->addWidget(gb_allgInfos);


        verticalLayout_5->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 19, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_5->addItem(verticalSpacer);

        VertretungsplanCPPClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(VertretungsplanCPPClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1018, 21));
        menuDatei = new QMenu(menuBar);
        menuDatei->setObjectName(QStringLiteral("menuDatei"));
        menu_nderungen = new QMenu(menuBar);
        menu_nderungen->setObjectName(QStringLiteral("menu_nderungen"));
        VertretungsplanCPPClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(VertretungsplanCPPClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        VertretungsplanCPPClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(VertretungsplanCPPClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        VertretungsplanCPPClass->setStatusBar(statusBar);

        menuBar->addAction(menuDatei->menuAction());
        menuBar->addAction(menu_nderungen->menuAction());
        menuDatei->addAction(action_ffnen);
        menuDatei->addAction(actionSpeichern);
        menuDatei->addAction(actionSpeichern_unter);
        menuDatei->addSeparator();
        menuDatei->addAction(actionImportieren);
        menuDatei->addSeparator();
        menuDatei->addAction(actionPDF_exportieren);
        menu_nderungen->addAction(actionLehrer_Abwesenheit_eintragen);
        menu_nderungen->addAction(actionRaum_blockieren);
        menu_nderungen->addAction(actionallgemeiner_Unterrichtsschluss);

        retranslateUi(VertretungsplanCPPClass);

        QMetaObject::connectSlotsByName(VertretungsplanCPPClass);
    } // setupUi

    void retranslateUi(QMainWindow *VertretungsplanCPPClass)
    {
        VertretungsplanCPPClass->setWindowTitle(QApplication::translate("VertretungsplanCPPClass", "VertretungsplanCPP", Q_NULLPTR));
        actionLehrer_Abwesenheit_eintragen->setText(QApplication::translate("VertretungsplanCPPClass", "Lehrer-Abwesenheit eintragen", Q_NULLPTR));
        actionRaum_blockieren->setText(QApplication::translate("VertretungsplanCPPClass", "Raum blockieren", Q_NULLPTR));
        actionallgemeiner_Unterrichtsschluss->setText(QApplication::translate("VertretungsplanCPPClass", "allgemeiner Unterrichtsschluss", Q_NULLPTR));
        action_ffnen->setText(QApplication::translate("VertretungsplanCPPClass", "\303\226ffnen", Q_NULLPTR));
        actionSpeichern->setText(QApplication::translate("VertretungsplanCPPClass", "Speichern", Q_NULLPTR));
        actionSpeichern_unter->setText(QApplication::translate("VertretungsplanCPPClass", "Speichern unter", Q_NULLPTR));
        actionImportieren->setText(QApplication::translate("VertretungsplanCPPClass", "Importieren", Q_NULLPTR));
        actionPDF_exportieren->setText(QApplication::translate("VertretungsplanCPPClass", "PDF exportieren", Q_NULLPTR));
        gb_problemStunden->setTitle(QApplication::translate("VertretungsplanCPPClass", "zu vertretende Stunden", Q_NULLPTR));
        gb_frei->setTitle(QString());
        btn_vertretungsEintragen->setText(QApplication::translate("VertretungsplanCPPClass", "Vertretung eintragen", Q_NULLPTR));
        gb_uebersicht->setTitle(QApplication::translate("VertretungsplanCPPClass", "\303\234bersicht", Q_NULLPTR));
        gb_abwesendeLehrer->setTitle(QApplication::translate("VertretungsplanCPPClass", "Abwesende Lehrer", Q_NULLPTR));
        gb_alleLehrer->setTitle(QApplication::translate("VertretungsplanCPPClass", "Alle Lehrer", Q_NULLPTR));
        gb_blockierteRaeume->setTitle(QApplication::translate("VertretungsplanCPPClass", "Blockierte R\303\244ume", Q_NULLPTR));
        gb_alleRaeume->setTitle(QApplication::translate("VertretungsplanCPPClass", "Alle R\303\244ume", Q_NULLPTR));
        lbl_Datum->setText(QApplication::translate("VertretungsplanCPPClass", "Datum", Q_NULLPTR));
        de_mainDatum->setDisplayFormat(QApplication::translate("VertretungsplanCPPClass", "dd.MM.yyyy", Q_NULLPTR));
        btn_datumHeute->setText(QApplication::translate("VertretungsplanCPPClass", "heute", Q_NULLPTR));
        groupBox->setTitle(QString());
        gb_Vertretungstunden->setTitle(QApplication::translate("VertretungsplanCPPClass", "Vertretungsstunden", Q_NULLPTR));
        gb_allgInfos->setTitle(QApplication::translate("VertretungsplanCPPClass", "Allgemeine Informationen", Q_NULLPTR));
        menuDatei->setTitle(QApplication::translate("VertretungsplanCPPClass", "Datei", Q_NULLPTR));
        menu_nderungen->setTitle(QApplication::translate("VertretungsplanCPPClass", "\303\204nderungen", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VertretungsplanCPPClass: public Ui_VertretungsplanCPPClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VERTRETUNGSPLANCPP_H
