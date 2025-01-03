#include "FluMultiLineTextDemo.h"

FluMultiLineTextDemo::FluMultiLineTextDemo(QWidget* parent /*= nullptr*/) : FluWidget(parent)
{
    // auto mainLayout = new QVBoxLayout;
    // setLayout(mainLayout);

    resize(600, 400);

    auto textEdit = new QTextEdit(this);
    // textEdit->resize(120, 30);
    textEdit->setFixedWidth(120);
    textEdit->setLineWrapMode(QTextEdit::WidgetWidth);
    textEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    textEdit->setReadOnly(true);
    textEdit->setText("-----------------------------------------------------------\n--------------------------------------------------------------");
    //  mainLayout->addWidget(textEdit);

    textEdit->move(100, 100);
    connect(textEdit, &QTextEdit::textChanged, [=]() {
        QTextDocument* doc = textEdit->document();
        doc->setTextWidth(textEdit->viewport()->width());
        int newHeight = doc->size().height() + textEdit->document()->documentMargin();
        textEdit->setMinimumHeight(newHeight);
    });

    //   {
    //       QTextDocument* doc = textEdit->document();
    //       doc->setTextWidth(textEdit->viewport()->width());
    //       int newHeight = doc->size().height() + textEdit->document()->documentMargin();
    //        textEdit->setMinimumHeight(newHeight);
    //    }
}
