#ifndef _PROGRESS_HPP_
#define _PROGRESS_HPP_

#include <vector>

struct Tracked {
  time_t start;
  time_t end;
};

class Progress {
  private:
    std::string _guid;
    std::string _taskGuid;
    std::vector<Tracked> _tracked;
    time_t total;
}

#endif