#include <Paindor.hpp>

#include <iostream>

int main() {
    Paindor paindor;
    std::cout << paindor.getText() << std::endl;
    paindor.init();
    std::cout << paindor.getText() << std::endl;
}
