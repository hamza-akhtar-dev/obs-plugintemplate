#ifndef SS_EXPLORER_H
#define SS_EXPLORER_H


#include <QObject>
#include <QWidget>
#include <QDockWidget>
#include <QPushButton>
#include <QHboxLayout>
#include <QVboxLayout>
#include <QMessageBox>
#include <QLabel>
#include <QPixmap>

class TestWidget : public QDockWidget {
        Q_OBJECT
    public:
        explicit TestWidget(QWidget *parent = nullptr);
        ~TestWidget();
    private:
        void buttonClicked();
        QWidget *parent = nullptr;
        QPushButton *button = new QPushButton();
        void addImages();
        QLabel *imageLabels[5];
};

#endif