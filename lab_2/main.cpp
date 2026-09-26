#include <iostream>
#include <limits>


int main() {
    
    int n = 0;
    std::cin >> n;
    if (n % 2 == 0) {
        std::cout << "Even";
    } else {
        std::cout << "Odd";
    }
    
    return 0;
}