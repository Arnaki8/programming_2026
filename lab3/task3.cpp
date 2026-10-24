#include <iostream>

// Дана целочисленная матрица {Aij}i=1..n,j=1..m (n,m<=100). 
// Найти строку с наибольшим произведением элементов и заменить все элементы этой строки этим произведением.


int main() {

    const int NMax = 100;
    int n, m;  
    std::cin >> n >> m;

    if (n < 1 || n > NMax || m < 1 || m > NMax) {
        std::cerr << "Not valid number of elements" << std::endl;
        return 1;
    }

    int a[NMax][NMax];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cin >> a[i][j];
        }
    }




    long long best = 1;
    for (int j = 0; j < m; ++j) {
        best *= a[0][j];
    }
    int best_row = 2;


    for (int i = 1; i < n; ++i) {
        long long p = 1;
        for (int j = 0; j < m; ++j) {
            p *= a[i][j];
        }
        if (p > best) {
            best = p;
            best_row = i;
        }
    }


    for (int j = 0; j < m; ++j) {
        a[best_row][j] = best;
    }




    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << a[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;

}
