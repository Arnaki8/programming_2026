#include <iostream>
#include <limits>


int main() {
    std::cout << "=== ЦЕЛОЧИСЛЕННЫЕ ТИПЫ ===" << std::endl;
    
    std::cout << "short" << std::endl;
    std::cout << "  Размер: " << sizeof(short) << " байт" << std::endl;
    std::cout << "  Мин: " << std::numeric_limits<short>::min() << std::endl;
    std::cout << "  Макс: " << std::numeric_limits<short>::max() << std::endl << std::endl;
    
    std::cout << "int" << std::endl;
    std::cout << "  Размер: " << sizeof(int) << " байт" << std::endl;
    std::cout << "  Мин: " << std::numeric_limits<int>::min() << std::endl;
    std::cout << "  Макс: " << std::numeric_limits<int>::max() << std::endl << std::endl;
    
    std::cout << "long long" << std::endl;
    std::cout << "  Размер: " << sizeof(long long) << " байт" << std::endl;
    std::cout << "  Мин: " << std::numeric_limits<long long>::min() << std::endl;
    std::cout << "  Макс: " << std::numeric_limits<long long>::max() << std::endl << std::endl;

    std::cout << "unsigned short" << std::endl;
    std::cout << "  Размер: " << sizeof(unsigned short) << " байт" << std::endl;
    std::cout << "  Мин: " << std::numeric_limits<unsigned short>::min() << std::endl;
    std::cout << "  Макс: " << std::numeric_limits<unsigned short>::max() << std::endl << std::endl;
    
    std::cout << "unsigned int" << std::endl;
    std::cout << "  Размер: " << sizeof(unsigned int) << " байт" << std::endl;
    std::cout << "  Мин: " << 0 << std::endl;
    std::cout << "  Макс: " << std::numeric_limits<unsigned int>::max() << std::endl << std::endl;
    
    std::cout << "unsigned long long" << std::endl;
    std::cout << "  Размер: " << sizeof(unsigned long long) << " байт" << std::endl;
    std::cout << "  Мин: " << 0 << std::endl;
    std::cout << "  Макс: " << std::numeric_limits<unsigned long long>::max() << std::endl << std::endl;
    

    std::cout << "=== СИМВОЛЬНЫЙ ТИП ===" << std::endl;
    
    std::cout << "char" << std::endl;
    std::cout << "  Размер: " << sizeof(char) << " байт" << std::endl;
    std::cout << "  Мин: " << (int)std::numeric_limits<char>::min() << std::endl;
    std::cout << "  Макс: " << (int)std::numeric_limits<char>::max() << std::endl << std::endl;
    

    std::cout << "=== ВЕЩЕСТВЕННЫЕ ТИПЫ ===" << std::endl;
    
    std::cout << "float" << std::endl;
    std::cout << "  Размер: " << sizeof(float) << " байт" << std::endl;
    std::cout << "  Мин: " << std::numeric_limits<float>::lowest() << std::endl;
    std::cout << "  Макс: " << std::numeric_limits<float>::max() << std::endl << std::endl;
    
    std::cout << "double" << std::endl;
    std::cout << "  Размер: " << sizeof(double) << " байт" << std::endl;
    std::cout << "  Мин: " << std::numeric_limits<double>::lowest() << std::endl;
    std::cout << "  Макс: " << std::numeric_limits<double>::max() << std::endl << std::endl;
    
    std::cout << "long double" << std::endl;
    std::cout << "  Размер: " << sizeof(long double) << " байт" << std::endl;
    std::cout << "  Мин: " << std::numeric_limits<long double>::lowest() << std::endl;
    std::cout << "  Макс: " << std::numeric_limits<long double>::max() << std::endl << std::endl;
    

    std::cout << "=== ЛОГИЧЕСКИЙ ТИП ===" << std::endl;
    
    std::cout << "bool" << std::endl;
    std::cout << "  Размер: " << sizeof(bool) << " байт" << std::endl;
    std::cout << "  Значения: 0 (false) или 1 (true)" << std::endl << std::endl;


    int a = 9;
    int b = 2;

    std::cout << a + b << std::endl;
    std::cout << a - b << std::endl;
    std::cout << a * b << std::endl;
    std::cout << a / b << std::endl;
    std::cout << a % b << std::endl << std::endl;

    float c = 11.f;
    float d = 4.f;
    
    std::cout << c / d << std::endl << std::endl;

    bool m = true;
    bool n = false;

    std::cout << (m && n) << std::endl;
    std::cout << (m || n) << std::endl;
    std::cout << (!n) << std::endl << std::endl;

    std::cout << (a == b) << std::endl;
    std::cout << (a != b) << std::endl;
    std::cout << (a < b) << std::endl;
    std::cout << (a > b) << std::endl;

    
    return 0;
}
