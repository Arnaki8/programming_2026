#include <iostream>
#include <limits>


bool isPrime(int n) {
        if (n <= 1) return false;

        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) return false;
        }
        return true;
    }


int main() {
    
    int n = 0;
    std::cout << "Введите число" << std::endl;
    std::cin >> n;

    
    if (n % 2 == 0) {
        std::cout << "Четное" << std::endl;
    } else {
        std::cout << "Нечетное" <<std::endl;
    }
    

    if (isPrime(n)) {
        std::cout << "Простое" << std::endl;
    } else {
        std::cout << "Сложное" <<std::endl;
    }





    return 0;
}