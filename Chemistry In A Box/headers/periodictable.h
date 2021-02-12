#ifndef PERIODICTABLE_H
#define PERIODICTABLE_H

#include <QMainWindow>
#include <QMessageBox>
#include <QString>
#include <QFile>
#include <QTextStream>

namespace Ui {
class PeriodicTable;
}

class PeriodicTable : public QMainWindow
{
    Q_OBJECT

public:
    explicit PeriodicTable(QWidget *parent = nullptr);
    ~PeriodicTable();

private slots:
    QString getInfo(QString filename);

    void on_actionExit_triggered();

    void on_actionHelp_triggered();

    void on_heliumButton_clicked();

    void on_neonButton_clicked();

    void on_argonButton_clicked();

    void on_kryptonButton_clicked();

    void on_xenonButton_clicked();

    void on_radonButton_clicked();

    void on_oganessonButton_clicked();

    void on_actionreset_triggered();

    void on_flourineButton_clicked();

    void on_chlorineButton_clicked();

    void on_bromineButton_clicked();

    void on_iodineButton_clicked();

    void on_astatineButton_clicked();

    void on_tennessineButton_clicked();

    void on_oxygenButton_clicked();

    void on_sulfurButton_clicked();

    void on_seleniumButton_clicked();

    void on_telluriumButton_clicked();

    void on_poloniumButton_clicked();

    void on_livermoriumButton_clicked();

    void on_nitrogenButton_clicked();

    void on_phosphorusButton_clicked();

    void on_arsenicButton_clicked();

    void on_antimonyButton_clicked();

    void on_bismuthButton_clicked();

    void on_moscoviumButton_clicked();

    void on_carbonButton_clicked();

    void on_siliconButton_clicked();

    void on_germaniumButton_clicked();

    void on_tinButton_clicked();

    void on_leadButton_clicked();

    void on_fleroviumButton_clicked();

    void on_borronButton_clicked();

    void on_aluminiumButton_clicked();

    void on_galliumButton_clicked();

    void on_indiumButton_clicked();

    void on_thalliumButton_clicked();

    void on_nihoniumButton_clicked();

    void on_zincButton_clicked();

    void on_cadmiumButton_clicked();

    void on_mercuryButton_clicked();

    void on_coperniciumButton_clicked();

    void on_nickelButton_clicked();

    void on_palladiumButton_clicked();

    void on_platinumButton_clicked();

    void on_darmstadtiumButton_clicked();

    void on_copperButton_clicked();

    void on_silverButton_clicked();

    void on_goldButton_clicked();

    void on_roentgeniumButton_clicked();

    void on_cobaltButton_clicked();

    void on_rhodiumButton_clicked();

    void on_iridiumButton_clicked();

    void on_meitneriumButton_clicked();

    void on_ironButton_clicked();

    void on_rutheniumButton_clicked();

    void on_osmiumButton_clicked();

    void on_hassiumButton_clicked();

    void on_manganeseButton_clicked();

    void on_technetiumButton_clicked();

    void on_rheniumButton_clicked();

    void on_bohriumButton_clicked();

    void on_chromiumButton_clicked();

    void on_molybdenumButton_clicked();

    void on_tungstenButton_clicked();

    void on_seaborgiumButton_clicked();

    void on_vanadiumButton_clicked();

    void on_niobiumButton_clicked();

    void on_tantalumButton_clicked();

    void on_dubniumButton_clicked();

    void on_titaniumButton_clicked();

    void on_zirconiumButton_clicked();

    void on_hafniumButton_clicked();

    void on_rutherfordiumButton_clicked();

    void on_scandiumButton_clicked();

    void on_yttriumButton_clicked();

    void on_lanthanumButton_clicked();

    void on_actiniumButton_clicked();

    void on_berylliumButton_clicked();

    void on_magnesiumButton_clicked();

    void on_calciumButton_clicked();

    void on_strontiumButton_clicked();

    void on_bariumButton_clicked();

    void on_radiumButton_clicked();

    void on_hydrogenButton_clicked();

    void on_lithiumButton_clicked();

    void on_sodiumButton_clicked();

    void on_postasiumButton_clicked();

    void on_rubidiumButton_clicked();

    void on_caesiumButton_clicked();

    void on_franciumButton_clicked();

    void on_ceriumButton_clicked();

    void on_praseodymiumButton_clicked();

    void on_neodymiumButton_clicked();

    void on_promethiumButton_clicked();

    void on_samariumButton_clicked();

    void on_europiumButton_clicked();

    void on_gadoliniumButton_clicked();

    void on_terbiumButton_clicked();

    void on_dysprosiumButton_clicked();

    void on_holmiumButton_clicked();

    void on_erbiumButton_clicked();

    void on_thuliumButton_clicked();

    void on_ytterbiumButton_clicked();

    void on_lutetiumButton_clicked();

    void on_thoriumButton_clicked();

    void on_protactiniumButton_clicked();

    void on_uraniumButton_clicked();

    void on_neptuniumButton_clicked();

    void on_plutoniumButton_clicked();

    void on_americiumButton_clicked();

    void on_curiumButton_clicked();

    void on_berkeliumButton_clicked();

    void on_californiumButton_clicked();

    void on_einsteiniumButton_clicked();

    void on_fermiumButton_clicked();

    void on_mendeleviumButton_clicked();

    void on_nobeliumButton_clicked();

    void on_lawrenciumButton_clicked();

    void backToMain();

private:
    Ui::PeriodicTable *ui;
};

#endif // PERIODICTABLE_H
