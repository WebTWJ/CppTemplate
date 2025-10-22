#include "Greeter.hpp"
#include <iostream>

void Greeter::sayHello(const std::string &name) {
  std::cout << "Hello, " << name << "!" << std::endl;
}
