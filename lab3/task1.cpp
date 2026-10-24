#include <iostream>


bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }

    for (int d = 2; d * d <= num; ++d) {
        if (num % d == 0) {
            return false;
        }
    }
    return true;
}



int main() {

    const int NMax = 10000;
    int n;  
    std::cin >> n;

    if (n < 1 || n > NMax) {
        std::cerr << "Not valid number of elements" << std::endl;
        return 1;
    }

    int a[NMax];
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    bool hasPrime = false;
    for (int i = 0; i < n; ++i) {
        if (isPrime(a[i])) {
            hasPrime = true;
            break;
        }
    }


    if (!hasPrime) {
        for (int i = 0; i < n - 1; ++i) {
            for (int j = 0; j < n - 1 - i; ++j) {
                if (a[j] > a[j + 1]) {
                    int p = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = p;
                }
            }
        }
    }

    for (int i = 0; i < n; i = i + 1) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;

    return 0;

}