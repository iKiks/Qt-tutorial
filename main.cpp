#include <QCoreApplication>
#include <QTextStream>
#include <QString>
#include <QDebug>
#include "Taskmanager.h"
#include "Task.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QTextStream inputStream(stdin);

    qInfo() << "Enter your babes name: ";

    QString username =  inputStream.readLine();

    qInfo() << "Hello" << username << "Ïm gonna fuck your babe";

    TaskManager* taskManager = new TaskManager(&a);

    Task* task1 = new Task("Task1", taskManager);
    Task* task2 = new Task("Task2", taskManager);
    Task* task3 = new Task("Task3", taskManager);

    taskManager->addTask(task1);
    taskManager->addTask(task2);
    taskManager->addTask(task3);

    taskManager->completeAllTasks();





    // Set up code that uses the Qt event loop here.
    // Call a.quit() or a.exit() to quit the application.
    // A not very useful example would be including
    // #include <QTimer>
    // near the top of the file and calling
    // QTimer::singleShot(5000, &a, &QCoreApplication::quit);
    // which quits the application after 5 seconds.

    // If you do not need a running Qt event loop, remove the call
    // to a.exec() or use the Non-Qt Plain C++ Application template.

    return a.exec();
}
