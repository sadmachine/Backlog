#include <iostream>
#include "controller/cli.hpp"

using namespace std;

short handle_args(int argc, char ** argv) {
  if (argc > 1) {
    if (argv[1] == "config") {
      cout << "Time to configurate, mate." << endl;
    } else {
      cout << "Dunno 'bout that." << endl;
    }
  } else if (argc > 2) {

  } else if (argc > 3) {

  } else if (argc > 4) {

  }
  return 1;
}

int main(int argc, char ** argv) {
  short handle_args_status = handle_args(argc, argv);
  return 0;
}
