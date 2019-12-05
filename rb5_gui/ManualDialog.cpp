#include "ManualDialog.h"
#include "ui_ManualDialog.h"

ManualDialog::ManualDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ManualDialog)
{
    ui->setupUi(this);

    connect(&timer, SIGNAL(timeout()),this, SLOT(threadManual()));
    timer.start(10);
    //RB5 = new RB5connect;
}

ManualDialog::~ManualDialog()
{
    delete ui;
}

void ManualDialog::threadManual()
{
    if(FLAG_gripper == true)
    {
        if(Count > Gripper_ms/10)
        {
            Count = 0;
            FLAG_gripper = false;
            printf("stop\n");
            RB5->ToolOut(0, LOW, LOW);
        }
        printf("%d\n",Count);
        Count++;
    }
}

void ManualDialog::on_BTN_SUCTION_RESET_clicked()
{
    RB5->Suction(0);
}

void ManualDialog::on_BNT_SUCTION_clicked()
{
    RB5->Suction(1);
}

void ManualDialog::on_BTN_SUCTION_RELEASE_clicked()
{
    RB5->Suction(2);
}

void ManualDialog::on_BTN_MOTION_MOVE_clicked()
{
    if(ui->RB_JOINT->isChecked())
    {
        float coordinate[6] = {0.,};

        coordinate[0] = ui->LE_COORDINATE1->text().toFloat();
        coordinate[1] = ui->LE_COORDINATE2->text().toFloat();
        coordinate[2] = ui->LE_COORDINATE3->text().toFloat();
        coordinate[3] = ui->LE_COORDINATE4->text().toFloat();
        coordinate[4] = ui->LE_COORDINATE5->text().toFloat();
        coordinate[5] = ui->LE_COORDINATE6->text().toFloat();

        float spd,acc = 0.;

        spd = ui->LE_SPEED->text().toFloat();
        acc = ui->LE_ACC->text().toFloat();

        RB5->MoveJoint(coordinate, spd, acc);
    }else if(ui->RB_TCP->isChecked())
    {
        float coordinate[6] = {0.,};

        coordinate[0] = ui->LE_COORDINATE1->text().toFloat();
        coordinate[1] = ui->LE_COORDINATE2->text().toFloat();
        coordinate[2] = ui->LE_COORDINATE3->text().toFloat();
        coordinate[3] = ui->LE_COORDINATE4->text().toFloat();
        coordinate[4] = ui->LE_COORDINATE5->text().toFloat();
        coordinate[5] = ui->LE_COORDINATE6->text().toFloat();

        float spd,acc = 0.;

        spd = ui->LE_SPEED->text().toFloat();
        acc = ui->LE_ACC->text().toFloat();

        RB5->MoveTCP(coordinate,spd,acc);
    }
}

void ManualDialog::on_BTN_MOTION_PAUSE_clicked()
{
    RB5->MotionPause();
}

void ManualDialog::on_BTN_MOTION_HALT_clicked()
{
    printf("Manual Dialog : Motion Halt\n");
    RB5->MotionHalt();
}

void ManualDialog::on_BTN_COL_RESUME_clicked()
{
    RB5->CollisionResume();
}

void ManualDialog::on_BTN_MOTION_RESUME_clicked()
{
    RB5->MotionResume();
}

void ManualDialog::on_BTN_CHANGE_SPEED_clicked()
{
    float spd = (float)ui->SB_SPEED->value()/100.;

    RB5->BaseSpeedChange(spd);
}

void ManualDialog::on_BTN_GRIPPER_STOP_clicked()
{
    RB5->ToolOut(0, LOW, LOW);
}

void ManualDialog::on_BTN_GRIPPER_OPEN_clicked()
{
    printf("open\n");
    RB5->ToolOut(24, 0, 1);
    FLAG_gripper = true;
    Count = 0;
    Gripper_ms = ui->LE_GRIPPER_TIME->text().toInt();

}

void ManualDialog::on_BTN_GRIPPER_CLOSE_clicked()
{
    printf("close\n");
    RB5->ToolOut(24, 1, 0);
    FLAG_gripper = true;
    Count = 0;
    Gripper_ms = ui->LE_GRIPPER_TIME->text().toInt();

}

void ManualDialog::on_pushButton_clicked()
{
    printf("real button cliecked\n");
    RB5->ProgramMode_Real();
}

void ManualDialog::on_pushButton_2_clicked()
{
    RB5->ProgramMode_Simulation();
}

void ManualDialog::on_BTN_GET_JOINT_clicked()
{
    ui->LE_COORDINATE1->setText(QString().sprintf("%.2f",RB5->systemStat.sdata.jnt_ang[0]));
    ui->LE_COORDINATE2->setText(QString().sprintf("%.2f",RB5->systemStat.sdata.jnt_ang[1]));
    ui->LE_COORDINATE3->setText(QString().sprintf("%.2f",RB5->systemStat.sdata.jnt_ang[2]));
    ui->LE_COORDINATE4->setText(QString().sprintf("%.2f",RB5->systemStat.sdata.jnt_ang[3]));
    ui->LE_COORDINATE5->setText(QString().sprintf("%.2f",RB5->systemStat.sdata.jnt_ang[4]));
    ui->LE_COORDINATE6->setText(QString().sprintf("%.2f",RB5->systemStat.sdata.jnt_ang[5]));
}

void ManualDialog::on_BTN_GET_TCP_clicked()
{
    ui->LE_COORDINATE1->setText(QString().sprintf("%.2f",RB5->systemStat.sdata.tcp_pos[0]));
    ui->LE_COORDINATE2->setText(QString().sprintf("%.2f",RB5->systemStat.sdata.tcp_pos[1]));
    ui->LE_COORDINATE3->setText(QString().sprintf("%.2f",RB5->systemStat.sdata.tcp_pos[2]));
    ui->LE_COORDINATE4->setText(QString().sprintf("%.2f",RB5->systemStat.sdata.tcp_pos[3]));
    ui->LE_COORDINATE5->setText(QString().sprintf("%.2f",RB5->systemStat.sdata.tcp_pos[4]));
    ui->LE_COORDINATE6->setText(QString().sprintf("%.2f",RB5->systemStat.sdata.tcp_pos[5]));
}

void ManualDialog::on_BTN_GO_HOME_clicked()
{
    float coordinate[6] = {0.,};

    coordinate[0] = -77.185;
    coordinate[1] = -77.396;
    coordinate[2] = 134.561;
    coordinate[3] = -55.864;
    coordinate[4] = 67.807;
    coordinate[5] = 0.243;

    float spd,acc = 0.;

    spd = ui->LE_SPEED->text().toFloat();
    acc = ui->LE_ACC->text().toFloat();

    RB5->MoveJoint(coordinate, spd, acc);
}
