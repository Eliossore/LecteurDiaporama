/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuitter;
    QAction *actionChargerDiaporama;
    QAction *actionEnleverDiaporama;
    QAction *actionVitesseDeDeplacement;
    QAction *actionAProposDe;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QFrame *fTitre;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QLabel *lTitre;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *lImage;
    QFrame *fInfo;
    QHBoxLayout *horizontalLayout_7;
    QLabel *lMode;
    QSpacerItem *horizontalSpacer_4;
    QLabel *lIntitule;
    QLabel *lCategorie;
    QLabel *lRang;
    QFrame *fBoutons;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *bPrecedent;
    QPushButton *bSuivant;
    QSpacerItem *horizontalSpacer;
    QPushButton *bLancer;
    QPushButton *bArreter;
    QMenuBar *menubar;
    QMenu *menue;
    QMenu *menuf;
    QMenu *menuAide;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(960, 573);
        MainWindow->setContextMenuPolicy(Qt::NoContextMenu);
        actionQuitter = new QAction(MainWindow);
        actionQuitter->setObjectName(QString::fromUtf8("actionQuitter"));
        actionChargerDiaporama = new QAction(MainWindow);
        actionChargerDiaporama->setObjectName(QString::fromUtf8("actionChargerDiaporama"));
        actionEnleverDiaporama = new QAction(MainWindow);
        actionEnleverDiaporama->setObjectName(QString::fromUtf8("actionEnleverDiaporama"));
        actionVitesseDeDeplacement = new QAction(MainWindow);
        actionVitesseDeDeplacement->setObjectName(QString::fromUtf8("actionVitesseDeDeplacement"));
        actionAProposDe = new QAction(MainWindow);
        actionAProposDe->setObjectName(QString::fromUtf8("actionAProposDe"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        fTitre = new QFrame(centralwidget);
        fTitre->setObjectName(QString::fromUtf8("fTitre"));
        fTitre->setMaximumSize(QSize(16777215, 50));
        fTitre->setStyleSheet(QString::fromUtf8("background-color: rgb(210, 210, 210);"));
        fTitre->setFrameShape(QFrame::StyledPanel);
        fTitre->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(fTitre);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        lTitre = new QLabel(fTitre);
        lTitre->setObjectName(QString::fromUtf8("lTitre"));

        horizontalLayout_4->addWidget(lTitre);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout->addWidget(fTitre);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        lImage = new QLabel(centralwidget);
        lImage->setObjectName(QString::fromUtf8("lImage"));
        lImage->setMinimumSize(QSize(300, 0));
        lImage->setFrameShape(QFrame::NoFrame);
        lImage->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(lImage);


        verticalLayout->addLayout(horizontalLayout_5);

        fInfo = new QFrame(centralwidget);
        fInfo->setObjectName(QString::fromUtf8("fInfo"));
        fInfo->setMinimumSize(QSize(0, 35));
        fInfo->setMaximumSize(QSize(16777215, 30));
        fInfo->setStyleSheet(QString::fromUtf8("background-color: rgb(210, 210, 210);"));
        fInfo->setFrameShape(QFrame::StyledPanel);
        fInfo->setFrameShadow(QFrame::Raised);
        horizontalLayout_7 = new QHBoxLayout(fInfo);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        lMode = new QLabel(fInfo);
        lMode->setObjectName(QString::fromUtf8("lMode"));

        horizontalLayout_7->addWidget(lMode);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);

        lIntitule = new QLabel(fInfo);
        lIntitule->setObjectName(QString::fromUtf8("lIntitule"));

        horizontalLayout_7->addWidget(lIntitule);

        lCategorie = new QLabel(fInfo);
        lCategorie->setObjectName(QString::fromUtf8("lCategorie"));

        horizontalLayout_7->addWidget(lCategorie);

        lRang = new QLabel(fInfo);
        lRang->setObjectName(QString::fromUtf8("lRang"));

        horizontalLayout_7->addWidget(lRang);


        verticalLayout->addWidget(fInfo);

        fBoutons = new QFrame(centralwidget);
        fBoutons->setObjectName(QString::fromUtf8("fBoutons"));
        fBoutons->setMaximumSize(QSize(16777215, 50));
        fBoutons->setStyleSheet(QString::fromUtf8("background-color: rgb(210, 210, 210);"));
        fBoutons->setFrameShape(QFrame::StyledPanel);
        fBoutons->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(fBoutons);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        bPrecedent = new QPushButton(fBoutons);
        bPrecedent->setObjectName(QString::fromUtf8("bPrecedent"));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(28);
        bPrecedent->setFont(font);

        horizontalLayout_3->addWidget(bPrecedent);

        bSuivant = new QPushButton(fBoutons);
        bSuivant->setObjectName(QString::fromUtf8("bSuivant"));
        bSuivant->setFont(font);

        horizontalLayout_3->addWidget(bSuivant);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        bLancer = new QPushButton(fBoutons);
        bLancer->setObjectName(QString::fromUtf8("bLancer"));

        horizontalLayout_3->addWidget(bLancer);

        bArreter = new QPushButton(fBoutons);
        bArreter->setObjectName(QString::fromUtf8("bArreter"));

        horizontalLayout_3->addWidget(bArreter);


        verticalLayout->addWidget(fBoutons);


        horizontalLayout_2->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 960, 22));
        menue = new QMenu(menubar);
        menue->setObjectName(QString::fromUtf8("menue"));
        menuf = new QMenu(menubar);
        menuf->setObjectName(QString::fromUtf8("menuf"));
        menuAide = new QMenu(menubar);
        menuAide->setObjectName(QString::fromUtf8("menuAide"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menue->menuAction());
        menubar->addAction(menuf->menuAction());
        menubar->addAction(menuAide->menuAction());
        menue->addAction(actionQuitter);
        menuf->addAction(actionChargerDiaporama);
        menuf->addAction(actionEnleverDiaporama);
        menuf->addSeparator();
        menuf->addAction(actionVitesseDeDeplacement);
        menuAide->addAction(actionAProposDe);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionQuitter->setText(QCoreApplication::translate("MainWindow", "Quitter", nullptr));
        actionChargerDiaporama->setText(QCoreApplication::translate("MainWindow", "Charger diaporama", nullptr));
        actionEnleverDiaporama->setText(QCoreApplication::translate("MainWindow", "Enlever diaporama", nullptr));
        actionVitesseDeDeplacement->setText(QCoreApplication::translate("MainWindow", "Vitesse de d\303\251placement", nullptr));
        actionAProposDe->setText(QCoreApplication::translate("MainWindow", "A propos de...", nullptr));
        lTitre->setText(QCoreApplication::translate("MainWindow", "Titre du diaporama", nullptr));
        lImage->setText(QCoreApplication::translate("MainWindow", "Image.png", nullptr));
        lMode->setText(QCoreApplication::translate("MainWindow", "Mode de fonctionnement", nullptr));
        lIntitule->setText(QCoreApplication::translate("MainWindow", "Intitul\303\251 de l'image", nullptr));
        lCategorie->setText(QCoreApplication::translate("MainWindow", "Cat\303\251gorie de l'image", nullptr));
        lRang->setText(QCoreApplication::translate("MainWindow", "Rang de l'image", nullptr));
        bPrecedent->setText(QCoreApplication::translate("MainWindow", "<", nullptr));
        bSuivant->setText(QCoreApplication::translate("MainWindow", ">", nullptr));
        bLancer->setText(QCoreApplication::translate("MainWindow", "Lancer", nullptr));
        bArreter->setText(QCoreApplication::translate("MainWindow", "Arr\303\252ter", nullptr));
        menue->setTitle(QCoreApplication::translate("MainWindow", "Ficher", nullptr));
        menuf->setTitle(QCoreApplication::translate("MainWindow", "Param\303\250tres", nullptr));
        menuAide->setTitle(QCoreApplication::translate("MainWindow", "Aide", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
