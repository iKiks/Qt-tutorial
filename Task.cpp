#include "Task.h"


Task::Task(QString description, QObject *parent)
    : QObject{parent}, m_description(description), m_completed(false)
{}

void Task::complete() {

    if (!m_completed) {
        m_completed = true;
        emit taskCompleted(m_description);
    }
}

QString Task::get_description() {
    return m_description;
}

bool Task::is_completed() {
    return m_completed;
}
