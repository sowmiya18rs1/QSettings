#ifndef WIDGET_H
#define WIDGET_H

#include <QtCore/qglobal.h>
#if QT_VERSION >= 0x050000
#include <QtWidgets/QWidget>
#else
#include <QtGui/QWidget>
#endif
#include<QList>

#include<QColor>
#include<QPushButton>
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_Botton_1_clicked();

    void on_Button_2_clicked();

    void on_Button_3_clicked();

    void on_Button_4_clicked();

    void on_Button_5_clicked();

    void on_Button_6_clicked();

    void on_Button_7_clicked();

    void on_Button_8_clicked();

    void on_Button_9_clicked();

    void on_savecolor_clicked();

    void on_loadcolor_clicked();

private:
    Ui::Widget *ui;
     QList<QColor>ColorList;
     void SaveColor(QString key,QColor color);
      QColor loadColor(QString key);
      void setLoadedColor(QString key,int index,QPushButton *button);
};
#endif // WIDGET_H
