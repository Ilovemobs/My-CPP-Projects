#include <iostream>

int main() {
  for (int i = 1, i < 10; ++i) // iterates integer i from 1 to 9
  {
    std::cout << "\n" << i * i; // calculate i^2
  }
 // I wonder why does it work without return 0
}
