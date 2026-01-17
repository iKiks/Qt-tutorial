#include <QCoreApplication>
#include <QTextStream>
#include <QString>
#include <QDebug>
#include "Taskmanager.h"
#include "Task.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);



    taskManager->addTask(task1);
    taskManager->addTask(task2);
    taskManager->addTask(task3);







    return a.exec();
}
