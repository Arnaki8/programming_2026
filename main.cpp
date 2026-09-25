#include <iostream>
#include <limits>
using namespace std;

int main() {
    cout << "=== ЦЕЛОЧИСЛЕННЫЕ ТИПЫ ===" << endl;
    
    cout << "short:" << endl;
    cout << "  Размер: " << sizeof(short) << " байт" << endl;
    cout << "  Мин: " << numeric_limits<short>::min() << endl;
    cout << "  Макс: " << numeric_limits<short>::max() << endl << endl;
    
    cout << "int:" << endl;
    cout << "  Размер: " << sizeof(int) << " байт" << endl;
    cout << "  Мин: " << numeric_limits<int>::min() << endl;
    cout << "  Макс: " << numeric_limits<int>::max() << endl << endl;
    
    cout << "long:" << endl;
    cout << "  Размер: " << sizeof(long) << " байт" << endl;
    cout << "  Мин: " << numeric_limits<long>::min() << endl;
    cout << "  Макс: " << numeric_limits<long>::max() << endl << endl;
    
    cout << "long long:" << endl;
    cout << "  Размер: " << sizeof(long long) << " байт" << endl;
    cout << "  Мин: " << numeric_limits<long long>::min() << endl;
    cout << "  Макс: " << numeric_limits<long long>::max() << endl << endl;

    cout << "unsigned short:" << endl;
    cout << "  Размер: " << sizeof(unsigned short) << " байт" << endl;
    cout << "  Мин: " << numeric_limits<unsigned short>::min() << endl;
    cout << "  Макс: " << numeric_limits<unsigned short>::max() << endl << endl;
    
    cout << "unsigned int:" << endl;
    cout << "  Размер: " << sizeof(unsigned int) << " байт" << endl;
    cout << "  Мин: " << 0 << endl;
    cout << "  Макс: " << numeric_limits<unsigned int>::max() << endl << endl;
    
    cout << "unsigned long long:" << endl;
    cout << "  Размер: " << sizeof(unsigned long long) << " байт" << endl;
    cout << "  Мин: " << 0 << endl;
    cout << "  Макс: " << numeric_limits<unsigned long long>::max() << endl << endl;
    

    cout << "=== СИМВОЛЬНЫЙ ТИП ===" << endl;
    
    cout << "char:" << endl;
    cout << "  Размер: " << sizeof(char) << " байт" << endl;
    cout << "  Мин: " << (int)numeric_limits<char>::min() << endl;
    cout << "  Макс: " << (int)numeric_limits<char>::max() << endl << endl;
    

    cout << "=== ВЕЩЕСТВЕННЫЕ ТИПЫ ===" << endl;
    
    cout << "float:" << endl;
    cout << "  Размер: " << sizeof(float) << " байт" << endl;
    cout << "  Мин: " << numeric_limits<float>::min() << endl;
    cout << "  Макс: " << numeric_limits<float>::max() << endl << endl;
    
    cout << "double:" << endl;
    cout << "  Размер: " << sizeof(double) << " байт" << endl;
    cout << "  Мин: " << numeric_limits<double>::min() << endl;
    cout << "  Макс: " << numeric_limits<double>::max() << endl << endl;
    
    cout << "long double:" << endl;
    cout << "  Размер: " << sizeof(long double) << " байт" << endl;
    cout << "  Мин: " << numeric_limits<long double>::min() << endl;
    cout << "  Макс: " << numeric_limits<long double>::max() << endl << endl;
    

    cout << "=== ЛОГИЧЕСКИЙ ТИП ===" << endl;
    
    cout << "bool:" << endl;
    cout << "  Размер: " << sizeof(bool) << " байт" << endl;
    cout << "  Значения: 0 (false) или 1 (true)" << endl;
    
    return 0;
}