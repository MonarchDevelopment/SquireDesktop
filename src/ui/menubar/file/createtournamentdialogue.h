#pragma once
#include "../../../config.h"
#include <QDialog>

namespace Ui
{
class CreateTournamentDialogue;
}

class CreateTournamentDialogue : public QDialog
{
    Q_OBJECT

public:
    explicit CreateTournamentDialogue(config_t *config, QWidget *parent = nullptr);
    ~CreateTournamentDialogue();
signals:
    void onTournamentAdded(recent_tournament_t t);
protected:
    void changeEvent(QEvent *e);

private:
    config_t *config;
    Ui::CreateTournamentDialogue *ui;
    std::string getName();
private slots:
    void nameEditChanged(QString name);
    void changeSaveLocation();
    void onOkay();
};

