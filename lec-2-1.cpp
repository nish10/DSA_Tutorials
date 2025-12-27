#include <iostream>

using namespace std;

int main() {
    // pattern printing: pattern 1
    cout << "We are going to print a pattern" << endl;
    cout << "Enter the value of number of rows: ";
    int n;
    cin >> n;
    int i = 1;
    while (i <= n) {
        int j = 1;
        while(j <= i) {
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
    
}