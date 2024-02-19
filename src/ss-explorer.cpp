#include "ss-explorer.hpp"

TestWidget::TestWidget(QWidget *parent) : QDockWidget("Screenshot Explorer Plugin", parent) {
    this->parent = parent;

    QWidget *widget =  new QWidget();
    
    this->button->setText("Press me!");

    QHBoxLayout *layout = new QHBoxLayout();

    QString prefix =  QString(CURRENT_SOURCE_DIR) + "\\images\\";

    QString imagePaths[5] = {"1.jpg", "2.jpg", "3.jpg", "4.jpg", "5.jpg"};

    // Create and add image labels to the layout
    for(int i = 0; i < 5; ++i) {
        imageLabels[i] = new QLabel(this);
        imageLabels[i]->setPixmap(QPixmap(prefix + imagePaths[i]));

        resize(100, 100);
        layout->addWidget(imageLabels[i]);
        
    }

    layout->addWidget(this->button);
    widget->setLayout(layout);

    setWidget(widget);

    setVisible(false);
    setFloating(true);
    resize(300, 300);

    QObject::connect(button, SIGNAL(clicked()), SLOT(ButtonClicked()));
}

TestWidget::~TestWidget() {
}

void TestWidget::ButtonClicked() {
    QMessageBox::information(this, "Information", "You clicked on a box");
}