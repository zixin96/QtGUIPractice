#pragma once
#include <qlistwidget.h>

//!? This class is manually created after we promote a list widget in the .ui file
class MyListWidget : public QListWidget
{
	// for custom widget class, we must add this macro at the beginning of the class declaration
	Q_OBJECT

public:
	MyListWidget(QWidget* parent = 0); // constructor declaration

	// custom slots and signals:
public slots:
	void slot_testSlot();

signals:
	//!? Notice that we don't provide definitions for signal functions b/c they are purely packets of data,
	//!? with no functionality other than sending that data to a Slot function
	void sig_testSignal(int);
};
