#include "MyListWidget.h"

MyListWidget::MyListWidget(QWidget* parent)
	: QListWidget(parent)
{
}

void MyListWidget::slot_testSlot()
{
	QListWidgetItem* item = new QListWidgetItem(QString("NEW ITEM from Test Slot"));
	this->addItem(item);
}
