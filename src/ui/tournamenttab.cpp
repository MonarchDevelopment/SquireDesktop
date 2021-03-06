#include "tournamenttab.h"
#include "ui_tournamenttab.h"

TournamentTab::TournamentTab(Tournament tourn, QWidget *parent) :
    AbstractTabWidget(parent),
    ui(new Ui::TournamentTab)
{
    ui->setupUi(this);
    this->tourn = tourn;
}

TournamentTab::~TournamentTab()
{
    delete ui;
}

void TournamentTab::changeEvent(QEvent *e)
{
    QWidget::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

bool TournamentTab::canExit()
{
    squire_core::close_tourn(this->tourn.id());
    return true;
}

