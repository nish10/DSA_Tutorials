#include <iostream>
using namespace std;

int main() {
    // std::cout << "Hello, World!" << std::endl;
    // cout << "Hello, World!";
    cout << "Hello, World!" << endl;
    cout << "Hello, World! 123 \n";

    int a = 123;
    cout << "Value of a: " << a << endl;

    // char a = 'v';
    // cout << "Value of a: " << a << endl;

    char b = 'v';
    cout << "Value of b: " << b << endl;

    bool isTrue = true;
    cout << "Value of isTrue: " << isTrue << endl;

    float c = 1.2;
    cout << "Value of float: " << c << endl;

    double d = 1.23456789;
    cout << "Value of double: " << d << endl;

    int size = sizeof(d);
    cout << "Size of double d: " << size << " bytes" << endl;

    // type casting
    int e = 'a';
    cout << "Value of e after type casting: " << e << endl;

    char ch1 = 98;
    cout << "Character for ASCII 98: " << ch1 << endl;

    char ch2 = 123456;
    cout << "Character for large ASCII value 123456: " << ch2 << endl;

    cout << "Signed vs Unsigned Integers:" << endl;
    unsigned int f = 112;
    cout << "Value of unsigned int f: " << f << endl;

    unsigned int g = -112;
    cout << "Value of unsigned int g (after assigning -112): " << g << endl;

    // operators
    cout << "Arithmetic Operators:" << endl;
    int x = 5;
    int y = 2;

    cout << "x + y = " << x + y << endl;
    cout << "x - y = " << x - y << endl;
    cout << "x * y = " << x * y << endl;
    cout << "x / y = " << x / y << endl;
    cout << "x % y = " << x % y << endl;


    cout << 2/5 << endl;
    // any one of the operands is double/float
    cout << 2.0/5 << endl;
    cout << 2/5.0 << endl;
    cout << 2.0/5.0 << endl;

    // relational operators
    cout << "Relational Operators:" << endl;
    cout << (x == y) << endl;
    cout << (x != y) << endl;
    cout << (x > y) << endl;
    cout << (x < y) << endl;
    cout << (x >= y) << endl;
    cout << (x <= y) << endl;

    // logical operators
    cout << "Logical Operators:" << endl;
    cout << ((x > y) && (x != y)) << endl;
    cout << ((x > y) || (x == y)) << endl;
    cout << !(x > y) << endl;

    // bitwise operators
    cout << "Bitwise Operators:" << endl;
    cout << (5 & 3) << endl;  // AND
    cout << (5 | 3) << endl;  // OR
    cout << (5 ^ 3) << endl;  // XOR
    cout << (~5) << endl;     // NOT
    cout << (5 << 1) << endl; // Left Shift
    cout << (5 >> 1) << endl; // Right Shift
    cout << (5 >> 2) << endl; // Right Shift
    cout << (5 >> 3) << endl; // Right Shift
    cout << (5 >> 4) << endl; // Right Shift
    cout << (5 >> 5) << endl; // Right Shift

    return 0;
}