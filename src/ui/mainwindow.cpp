#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "./coinsflipdialogue.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Init menu bar
    QMenu *rndMenu = ui->menubar->addMenu(tr("RNG"));
    QAction *coinsAction = rndMenu->addAction(tr("Flip Coins"));
    connect(coinsAction, &QAction::triggered, this, &MainWindow::coinFlipUtility);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::coinFlipUtility()
{
    CoinsFlipDialogue *dlg = new CoinsFlipDialogue();
    dlg->exec();
}
