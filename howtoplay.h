
#ifndef HOWTOPLAY_H
#define HOWTOPLAY_H

#include <QDialog>
#include <QMovie>

namespace Ui {
class howtoplay;
}

class howtoplay : public QDialog
{
    Q_OBJECT

public:
    explicit howtoplay(QWidget *parent = nullptr);
    ~howtoplay();

private slots:
    void on_howtoplay_accepted();
    void on_howtoplay_destroyed();

private:
    Ui::howtoplay *ui;

};

#endif // HOWTOPLAY_H
