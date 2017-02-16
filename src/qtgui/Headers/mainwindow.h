#ifndef mainwindow_H_INCLUDED
#define mainwindow_H_INCLUDED
#include <QMainWindow>
namespace Ui{
	class MainWindow;
}
class MainWindow: public QMainWindow{
	Q_OBJECT
	public:
		explicit MainWindow(QWidget *parent = 0);
		~MainWindow();
	private:
		Ui::MainWindow *ui;

}
#endif
