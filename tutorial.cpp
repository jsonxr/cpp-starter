// A simple program that computes the square root of a number
#include <cmath>
#include <iostream>
#include <span>
#include <vector>

#include "TutorialConfig.h"

auto main(int argc, char* argv[]) -> int {
  std::span<char*> args(argv, argc);

  char* name = args[0];

  if (argc < 2) {
    // report version
    std::cout << name << " Version " << Tutorial_VERSION_MAJOR << "."
              << Tutorial_VERSION_MINOR << std::endl;
    std::cout << "Usage: " << name << " number" << std::endl;
    return 1;
  }

  // convert input to double
  char* arg = args[1];
  const double inputValue = atof(arg);

  // calculate square root
  const double outputValue = sqrt(inputValue);
  std::cout << "The square root of " << inputValue << " is " << outputValue
            << std::endl;
  return 0;
}
