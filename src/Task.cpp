#include "Task.hpp"

namespace dgt {
Task::Task(const std::string &title, const std::string &description) {
  m_title = title;
  m_desc  = description;
}

void Task::Author(const std::string &name) { m_author = name; }

void Task::Project(const std::string &name) { m_project = name; }

void Task::Status(TaskStatus value) {
  // TODO: add filters
  m_status = value;
}

void Task::CompleteBy(Date value) { m_planned_completion = value; }
} // namespace dgt
