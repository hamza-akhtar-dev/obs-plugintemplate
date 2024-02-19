#include "ss-explorer.hpp"

TestWidget::TestWidget(QWidget *parent) : QDockWidget("Screenshot Explorer Plugin", parent) 
{
    this->parent = parent;
    QWidget *window = new QWidget;

    QPushButton *button1 = new QPushButton("One");
    QPushButton *button2 = new QPushButton("Two");

    QString prefix =  QString(CURRENT_SOURCE_DIR) + "\\images\\";
    QString imagePaths[5] = {"1.jpg", "2.jpg", "3.jpg", "4.jpg", "5.jpg"};
    
    QGridLayout *layout = new QGridLayout(window);

    // Create and add image labels to the layout

    imageLabels[0] = new QLabel(this);
    imageLabels[0]->setPixmap(QPixmap(prefix + imagePaths[0]).scaled(300, 300, Qt::KeepAspectRatio, Qt::SmoothTransformation) );

    imageLabels[1] = new QLabel(this);
    imageLabels[1]->setPixmap(QPixmap(prefix + imagePaths[1]).scaled(300, 300, Qt::KeepAspectRatio, Qt::SmoothTransformation) );

    imageLabels[2] = new QLabel(this);
    imageLabels[2]->setPixmap(QPixmap(prefix + imagePaths[2]).scaled(300, 300, Qt::KeepAspectRatio, Qt::SmoothTransformation) );

    imageLabels[3] = new QLabel(this);
    imageLabels[3]->setPixmap(QPixmap(prefix + imagePaths[3]).scaled(300, 300, Qt::KeepAspectRatio, Qt::SmoothTransformation) );

    imageLabels[4] = new QLabel(this);
    imageLabels[4]->setPixmap(QPixmap(prefix + imagePaths[4]).scaled(1000, 1000, Qt::KeepAspectRatio, Qt::SmoothTransformation) );
    

    layout->addWidget(imageLabels[0], 0, 0);
    layout->addWidget(imageLabels[1], 1, 0);
    layout->addWidget(imageLabels[2], 2, 0); 
    layout->addWidget(imageLabels[3], 3, 0); 

    layout->addWidget(imageLabels[4], 0, 1, 4, 4); 

    layout->addWidget(button1, 4, 2);
    layout->addWidget(button2, 4, 3);

    window->setLayout(layout);

    setWidget(window);

    setVisible(false);
    setFloating(true);
    resize(300, 300);
}

TestWidget::~TestWidget() {
    
}