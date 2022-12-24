#include <iostream>
#include "abc.hpp"

int main(int, char**) {
    int x, y;
    std::cin >> x >> y;

    std::cout << "Result is: " << sqr_plus(x, y);
}
