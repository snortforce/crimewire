/********************************************************************************
** Form generated from reading UI file 'crimewavemain.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRIMEWAVEMAIN_H
#define UI_CRIMEWAVEMAIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_crimewaveMain
{
public:
    QAction *actionHelp_Contents;
    QAction *actionAbout_CrimeWire;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *searchTab;
    QGroupBox *searchGroupBox;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QGroupBox *resultsGroupBox;
    QGroupBox *filterGroupBox;
    QWidget *tab;
    QWidget *libraryTab;
    QMenuBar *menubar;
    QMenu *menu_File;
    QMenu *menu_View;
    QMenu *menu_Navigation;
    QMenu *menu_Resources;
    QMenu *menu_Tools;
    QMenu *menuFilter_s;
    QMenu *menu_Help;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *crimewaveMain)
    {
        if (crimewaveMain->objectName().isEmpty())
            crimewaveMain->setObjectName(QString::fromUtf8("crimewaveMain"));
        crimewaveMain->resize(800, 600);
        actionHelp_Contents = new QAction(crimewaveMain);
        actionHelp_Contents->setObjectName(QString::fromUtf8("actionHelp_Contents"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("res/helpbook.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionHelp_Contents->setIcon(icon);
        actionHelp_Contents->setShortcutContext(Qt::WindowShortcut);
        actionHelp_Contents->setIconVisibleInMenu(true);
        actionAbout_CrimeWire = new QAction(crimewaveMain);
        actionAbout_CrimeWire->setObjectName(QString::fromUtf8("actionAbout_CrimeWire"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("res/help-browser.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout_CrimeWire->setIcon(icon1);
        centralwidget = new QWidget(crimewaveMain);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setEnabled(true);
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 810, 640));
        tabWidget->setMinimumSize(QSize(640, 640));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        tabWidget->setFont(font);
        searchTab = new QWidget();
        searchTab->setObjectName(QString::fromUtf8("searchTab"));
        searchTab->setAutoFillBackground(true);
        searchGroupBox = new QGroupBox(searchTab);
        searchGroupBox->setObjectName(QString::fromUtf8("searchGroupBox"));
        searchGroupBox->setGeometry(QRect(0, 10, 180, 60));
        lineEdit = new QLineEdit(searchGroupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 20, 113, 30));
        pushButton = new QPushButton(searchGroupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(130, 20, 40, 30));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("res/search.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon2);
        resultsGroupBox = new QGroupBox(searchTab);
        resultsGroupBox->setObjectName(QString::fromUtf8("resultsGroupBox"));
        resultsGroupBox->setGeometry(QRect(190, 10, 600, 520));
        resultsGroupBox->setAutoFillBackground(true);
        resultsGroupBox->setFlat(false);
        filterGroupBox = new QGroupBox(searchTab);
        filterGroupBox->setObjectName(QString::fromUtf8("filterGroupBox"));
        filterGroupBox->setGeometry(QRect(0, 80, 180, 450));
        tabWidget->addTab(searchTab, icon2, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("res/downloads.svg"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab, icon3, QString());
        libraryTab = new QWidget();
        libraryTab->setObjectName(QString::fromUtf8("libraryTab"));
        libraryTab->setAutoFillBackground(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("res/library.svg"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(libraryTab, icon4, QString());
        crimewaveMain->setCentralWidget(centralwidget);
        menubar = new QMenuBar(crimewaveMain);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        menu_View = new QMenu(menubar);
        menu_View->setObjectName(QString::fromUtf8("menu_View"));
        menu_Navigation = new QMenu(menubar);
        menu_Navigation->setObjectName(QString::fromUtf8("menu_Navigation"));
        menu_Resources = new QMenu(menubar);
        menu_Resources->setObjectName(QString::fromUtf8("menu_Resources"));
        menu_Tools = new QMenu(menubar);
        menu_Tools->setObjectName(QString::fromUtf8("menu_Tools"));
        menuFilter_s = new QMenu(menubar);
        menuFilter_s->setObjectName(QString::fromUtf8("menuFilter_s"));
        menu_Help = new QMenu(menubar);
        menu_Help->setObjectName(QString::fromUtf8("menu_Help"));
        crimewaveMain->setMenuBar(menubar);
        statusbar = new QStatusBar(crimewaveMain);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        crimewaveMain->setStatusBar(statusbar);

        menubar->addAction(menu_File->menuAction());
        menubar->addAction(menu_View->menuAction());
        menubar->addAction(menu_Navigation->menuAction());
        menubar->addAction(menu_Resources->menuAction());
        menubar->addAction(menu_Tools->menuAction());
        menubar->addAction(menuFilter_s->menuAction());
        menubar->addAction(menu_Help->menuAction());
        menu_Help->addAction(actionHelp_Contents);
        menu_Help->addSeparator();
        menu_Help->addAction(actionAbout_CrimeWire);

        retranslateUi(crimewaveMain);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(crimewaveMain);
    } // setupUi

    void retranslateUi(QMainWindow *crimewaveMain)
    {
        crimewaveMain->setWindowTitle(QCoreApplication::translate("crimewaveMain", "CrimeWire | A Gnew Gnutella Client", nullptr));
        actionHelp_Contents->setText(QCoreApplication::translate("crimewaveMain", "Help Contents", nullptr));
#if QT_CONFIG(shortcut)
        actionHelp_Contents->setShortcut(QCoreApplication::translate("crimewaveMain", "F1", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAbout_CrimeWire->setText(QCoreApplication::translate("crimewaveMain", "About CrimeWire", nullptr));
#if QT_CONFIG(tooltip)
        searchTab->setToolTip(QCoreApplication::translate("crimewaveMain", "<html><head/><body><p>test</p><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        searchTab->setAccessibleDescription(QCoreApplication::translate("crimewaveMain", "test", nullptr));
#endif // QT_CONFIG(accessibility)
        searchGroupBox->setTitle(QCoreApplication::translate("crimewaveMain", "Search for files...", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit->setToolTip(QCoreApplication::translate("crimewaveMain", "<html><head/><body><p>Your search goes in this box</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        pushButton->setToolTip(QCoreApplication::translate("crimewaveMain", "<html><head/><body><p>Click here to search!</p><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton->setText(QString());
        resultsGroupBox->setTitle(QCoreApplication::translate("crimewaveMain", "Search Results", nullptr));
        filterGroupBox->setTitle(QCoreApplication::translate("crimewaveMain", "Filter Results", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(searchTab), QCoreApplication::translate("crimewaveMain", "Search ", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("crimewaveMain", "Downloading", nullptr));
#if QT_CONFIG(accessibility)
        libraryTab->setAccessibleDescription(QString());
#endif // QT_CONFIG(accessibility)
        tabWidget->setTabText(tabWidget->indexOf(libraryTab), QCoreApplication::translate("crimewaveMain", "Library", nullptr));
        menu_File->setTitle(QCoreApplication::translate("crimewaveMain", "&File", nullptr));
        menu_View->setTitle(QCoreApplication::translate("crimewaveMain", "&View", nullptr));
        menu_Navigation->setTitle(QCoreApplication::translate("crimewaveMain", "&Navigation", nullptr));
        menu_Resources->setTitle(QCoreApplication::translate("crimewaveMain", "&Resources", nullptr));
        menu_Tools->setTitle(QCoreApplication::translate("crimewaveMain", "&Tools", nullptr));
        menuFilter_s->setTitle(QCoreApplication::translate("crimewaveMain", "Filter&s", nullptr));
        menu_Help->setTitle(QCoreApplication::translate("crimewaveMain", "&Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class crimewaveMain: public Ui_crimewaveMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRIMEWAVEMAIN_H
