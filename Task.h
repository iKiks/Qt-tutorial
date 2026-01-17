#ifndef TASK_H
#define TASK_H

#include <QObject>
#include <QString>
#include <QDebug>

class Task : public QObject
{
    Q_OBJECT
public:
    explicit Task(QString description, QObject *parent = nullptr);

    void complete();

    QString get_description();
    bool is_completed();

signals:
    void taskCompleted(const QString& description);

private:
    QString m_description;
    bool m_completed;

};

#endif // TASK_H
