#ifndef _TASK_HPP_
#define _TASK_HPP_

#include <ctime>
#include <iostream>
#include <string>
#include <set>

enum TaskStatus {
  Pending = -1, Stopped, Active, Done
};

class Task {
  private:
    int _id; // Recalculated based on age of all available tasks
    std::string _guid; // Unique id for this task
    time_t _created; // Unix timestamp of the task creation date
    char _priority; // Priority: L, M, H
    time_t _due; // Unix timestamp of the task due date
    std::string _description; // Text description of task
    double _urgency; // Calculated urgency metric
    TaskStatus _status; // Task status e.g. pending, active, completed
    std::set<std::string> _tags; // List of string tags
    std::string _listGuid; // Reference to this tasks unique list
};

#endif
