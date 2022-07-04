#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget* parent = nullptr);
	~MainWindow();

private:
	Ui::MainWindow* ui;

	// add custom slot functions
	// slot_ prefix is not necessary, but it helps to identify custom slot functions
public slots:
	void slot_addItemToListWidget();
};
#endif // MAINWINDOW_H
