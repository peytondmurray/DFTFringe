#ifndef UNWRAPERRORSVIEW_H
#define UNWRAPERRORSVIEW_H

#include <QDialog>
#include "wavefront.h"
#include "opencv2/imgproc/types_c.h"

namespace Ui {
class unwrapErrorsView;
}

class unwrapErrorsView : public QDialog
{
    Q_OBJECT

public:
    explicit unwrapErrorsView(const wavefront &wf, QWidget *parent = 0);
    ~unwrapErrorsView();

private slots:
    void on_save_clicked();

private:
    Ui::unwrapErrorsView *ui;
    const wavefront &m_wf;
    void createUnwrapErrors();
};

#endif // UNWRAPERRORSVIEW_H
