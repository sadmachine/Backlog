#ifndef _LIST_HPP_
#define _LIST_HPP_

#include "res/uuid.hpp"
#include <set>


class List {
  private:
    std::string _guid;
    std::string _name;
    time_t _created;
    std::set<std::string> _tags;
    std::string _context;
  
  public:
    std::string isComplete();
};


#endif