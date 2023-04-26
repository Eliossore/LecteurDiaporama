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
    QFrame *frame;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_6;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
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
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMaximumSize(QSize(16777215, 50));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(210, 210, 210);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_4->addWidget(label);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout->addWidget(frame);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(300, 0));
        label_4->setFrameShape(QFrame::NoFrame);
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_4);


        verticalLayout->addLayout(horizontalLayout_5);

        frame_3 = new QFrame(centralwidget);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setMinimumSize(QSize(0, 35));
        frame_3->setMaximumSize(QSize(16777215, 30));
        frame_3->setStyleSheet(QString::fromUtf8("background-color: rgb(210, 210, 210);"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_7 = new QHBoxLayout(frame_3);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_7 = new QLabel(frame_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_7->addWidget(label_7);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);

        label_3 = new QLabel(frame_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_7->addWidget(label_3);

        label_5 = new QLabel(frame_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_7->addWidget(label_5);

        label_6 = new QLabel(frame_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_7->addWidget(label_6);


        verticalLayout->addWidget(frame_3);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setMaximumSize(QSize(16777215, 50));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(210, 210, 210);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton = new QPushButton(frame_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(28);
        pushButton->setFont(font);

        horizontalLayout_3->addWidget(pushButton);

        pushButton_2 = new QPushButton(frame_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setFont(font);

        horizontalLayout_3->addWidget(pushButton_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButton_3 = new QPushButton(frame_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout_3->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(frame_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        horizontalLayout_3->addWidget(pushButton_4);


        verticalLayout->addWidget(frame_2);


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
        label->setText(QCoreApplication::translate("MainWindow", "Titre du diaporama", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Image.png", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Mode de fonctionnement", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Intitul\303\251 de l'image", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Cat\303\251gorie de l'image", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Rang de l'image", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "<", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", ">", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Lancer", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Arr\303\252ter", nullptr));
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
