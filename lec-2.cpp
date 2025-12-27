#include <iostream>
#include <string>
using namespace std;

int main() {
    // if else conditional statements
    // Example: Check if a number is even or odd
    // int n;
    // cin >> n;
    // if (n % 2 == 0) {
    //     cout << n << " is even" << endl;
    // } else {
    //     cout << n << " is odd" << endl;
    // }

    // example 2: a is positive, negative or zero
    // int a;
    // cin >> a;
    // if (a > 0) {
    //     cout << a << " is positive" << endl;
    // } else if (a < 0) {
    //     cout << a << " is negative" << endl;
    // } else {
    //     cout << "a is zero" << endl;
    // }

    // int a, b;
    // cin >> a >> b;
    
    // cout << "Value of a: " << a << endl;
    // cout << "Value of b: " << b << endl;

    // string a;
    // getline(cin, a);
    // cout << "Value of a: " << a << endl;

    // int n;
    // std::cin >> n;              // reads an int, skips spaces/newlines

    // std::string word;
    // std::cin >> word;           // reads one word only (no spaces)
    // std::getline(std::cin, word); // reads a whole line (with spaces)
    // std::cout << "Value of word: " << word << std::endl;

    // char f;
    // f = cin.get();
    // cout << "Value of f: " << f << endl;
    // char g;
    // cin >> g;
    // cout << "Value of g: " << g << endl;

    // string s;
    // getline(cin, s);
    // cout << "Value of s: " << s << endl;

    // int a, b;
    // // cin >> a >> b;
    // cout << "Enter the value of a: " << endl;
    // cin >> a;
    // cout << "Enter the value of b: " << endl;
    // cin >> b;
    // cout << "Value of a: " << a << endl;
    // cout << "Value of b: " << b << endl;

    // if (a > b) {
    //     cout << "a is greater than b" << endl;
    // } else {
    //     cout << "b is greater than a" << endl;
    // }

    // int n;
    // cout << "Enter the value of n: ";
    // cin >> n;
    // if (n > 0) {
    //     cout << n << " is positive" << endl;
    // } else if (n < 0) {
    //     cout << n << " is negative" << endl;
    // } else {
    //     cout << "n is zero" << endl;
    // }

    // print numbers from 1 to n
    // while loop
    // int n;
    // cout << "Enter the value of n: ";
    // cin >> n;
    // int i = 1;
    // while(i <= n) {
    //     cout << i << " ";
    //     i++;
    // }
    // cout << endl;

    // example while prime or not
    // int n;
    // cout << "Enter the value of n: ";
    // cin >> n;
    // bool isPrime = true;
    // if (n <= 1 ) {
    //     isPrime = false;
    // } else {
    //     int i = 2;
    //     while(i < n) {
    //         if (n % i == 0) {
    //             isPrime = false;
    //             break;
    //         }
    //         i++;
    //     }
    // }
    
    // if (isPrime) {
    //     cout << n << " is prime" << endl;
    // } else {
    //     cout << n << " is not prime" << endl;
    // }

    // example pattern printing: pattern 1
    int n;
    cout << "We are going to print a pattern" << endl;
    cout << "Enter the value of number of rows: ";
    cin >> n;

    int i = 1;
    while(i <= n) {
        int j = 1;
        while (j <= n) {
            cout <<"*";
            j++;
        }
        i++;
        cout << endl;
    }

    return 0;
}