#include "../FluControls/FluNavigationView.h"
#include "FluButtonDemo.h"
#include "FluChangeBgDemo.h"
#include "FluNavigationDemo.h"
#include "FluTabDemo.h"
#include <QApplication>
#include "FluFlowLayoutDemo.h"
#include "FluLineEditDemo.h"
#include "FluMultiLineTextDemo.h"
#include "FluTextAreaDemo.h"
#include "FluExpandDemo.h"

int main(int argc, char **argv)
{
    QApplication app(argc, argv);

    // FluChangeBackgroundWidget demo;
    // demo.show();

    // FluExampleTabWidget demo;
    // demo.show();

    // FluButtonExampleWidget demo;
    // demo.show();

    //  FluNavigationDemo demo;
    //  demo.show();

  //  FluFlowLayoutDemo demo;
  //  demo.show();

 //   FluLineEditDemo demo;
 //   demo.show();

  //  FluButtonDemo demo;
  //  demo.show();

   // FluMultiLineTextDemo demo;
   // demo.show();

   // FluTextAreaDemo demo;
   // demo.setText("Custom TextAreannLine 2nLine 3nLine 4");

    FluExpandDemo demo;
    demo.show();
    return app.exec();
}