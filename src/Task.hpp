#pragma once

#include "Date.hpp"
#include "TaskStatus.hpp"
#include <string>

namespace dgt {
class Task {
private:
  std::string m_author;
  std::string m_title;
  std::string m_desc;
  Date m_date_added;
  Date m_date_completed;
  Date m_planned_completion;
  std::string m_project;
  TaskStatus m_status;

public:
  // This will have a big constructor if we want to go that way...
  explicit Task(const std::string &title, const std::string &description);

  void Author(const std::string &name);
  std::string Author() const { return m_author; }

  void Project(const std::string &name);
  std::string Project() const { return m_project; }

  void Status(TaskStatus value);
  TaskStatus Status() const { return m_status; }

  void CompleteBy(Date value);
  Date CompletionDate() const { return m_planned_completion; }
};
} // namespace dgt
