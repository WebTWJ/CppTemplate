#include "Greeter.h"
#include <iostream>

void Greeter::sayHello(const std::string& name) {
    std::cout << "Hello, " << name << "!" << std::endl;
}
