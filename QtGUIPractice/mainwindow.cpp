#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QListWidget>

MainWindow::MainWindow(QWidget* parent)
	: QMainWindow(parent)
	, ui(new Ui::MainWindow)
{
	// initializes all of the GUI widgets
	// they cannot be accessed until after this function is invoked
	ui->setupUi(this);

	connect(ui->myPushyButton, SIGNAL(clicked(bool)), ui->spinBox, SLOT(stepUp()));
	//!? Notice that we pass "this" pointer to the receiver argument
	connect(ui->myPushyButton, SIGNAL(clicked(bool)), this, SLOT(slot_addItemToListWidget()));
}

MainWindow::~MainWindow()
{
	delete ui;
}

void MainWindow::slot_addItemToListWidget()
{
	QListWidgetItem* item = new QListWidgetItem(QString("NEW ITEM"));
	ui->listWidget->addItem(item);
}
