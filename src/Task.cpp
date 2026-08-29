#include "Task.h"

Task::Task(int id, std::string description): id(id), description(description), done(false) {
}

/*
Task::Task(int id, std::string description) {
    this->id = id;
    this->description = description;
    done = false;
}
*/

int Task::getId() const {
    return id;
}

std::string Task::getDescription() const {
    return description;
}

bool Task::isDone() const {
    return done;
}

void Task::markDone() {
    done = true;
}