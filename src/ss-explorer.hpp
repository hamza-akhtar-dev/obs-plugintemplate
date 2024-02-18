#ifndef SS_EXPLORER_H
#define SS_EXPLORER_H


#include <QObject>
#include <QWidget>
#include <QDockWidget>
#include <QPushButton>
#include <QHboxLayout>
#include <QMessageBox>

class TestWidget : public QDockWidget {
        Q_OBJECT
    public:
        explicit TestWidget(QWidget *parent = nullptr);
        ~TestWidget();
    private:
        void buttonClicked();
        QWidget *parent = nullptr;
        QPushButton *button = new QPushButton();
    private slots:
        void ButtonClicked();
};

#endif