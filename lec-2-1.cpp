#include <iostream>

using namespace std;

int main() {
    // pattern printing: pattern 1
    // cout << "We are going to print a pattern" << endl;
    // cout << "Enter the value of number of rows: ";
    // int n;
    // cin >> n;
    // int i = 1;
    // while (i <= n) {
    //     int j = 1;
    //     while(j <= i) {
    //         cout << i;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // pattern printing example 2
    // cout << "We are goint to print a pattern" << endl;
    // cout << "Enter the number of rows: ";
    // int n;
    // cin >> n;
    // int i = 1;
    // while(i <= n) {
    //     int j = 1;
    //     while (j <= n) {
    //         cout << j << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // pattern printing example 3
    // cout << "We are going to print a pattern" << endl;
    // cout << "Enter the number of rows: ";
    // int n;
    // cin >> n;
    // int i = 1;
    // while (i <= n) {
    //     int j = n;
    //     while (j >= 1) {
    //         cout << j << " ";
    //         j--;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // pattern printing exmaple 4
    // cout << "We are going to pring a pattern" << endl;
    // cout << "Enter the number of rows: ";
    // int n;
    // cin>>n;
    // int i = 1;
    // int count = 1;
    // while (i <= n) {
    //     int j = 1;
    //     while (j <= n){
    //         cout << count << " ";
    //         count++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // pattern printing example 5
    // cout << "We are going to print a pattern" << endl;
    // cout << "Enter the number of rows: ";
    // int n;
    // cin>>n;
    // int i = 1;
    // while (i <= n) {
    //     int j = 1;
    //     while (j <= i) {
    //         cout << "* ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // pattern printint example 6
    // cout << "We are going to print a pattern" << endl;
    // cout << "Enter the number of rows: ";
    // int n;
    // cin>>n;
    // int i = 1;
    // while (i <= n) {
    //     int j = 1;
    //     while (j <= i) {
    //         cout << i << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // pattern printing example 7
    // cout << "We are going to print a pattern" << endl;
    // cout << "Enter the number of rows: ";
    // int n;
    // cin>>n;
    // int i = 1;
    // int count = 1;
    // while (i <= n) {
    //     int j = 1;
    //     while (j <= i) {
    //         cout << count << " ";
    //         count++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // pattern printing example 8
    // cout << "We are going to print a pattern" << endl;
    // cout << "Enter the number of rows: ";
    // int n;
    // cin>>n;
    // int i = 1;
    // while (i <= n) {
    //     int j = i;
    //     while (j >= 1) {
    //         cout << j << " ";
    //         j--;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // pattern printing example 9
    // cout << "We are going to print a pattern" << endl;
    // cout << "Enter the number of rows: ";
    // int n;
    // cin>>n;
    // int i = 1;
    // char j = 'A';
    // while (i <= n) {
    //     int col = 1;
    //     while (col <= n){
    //         cout << j << " ";
    //         col++;
    //     }
    //     cout << endl;
    //     j++;
    //     i++;
    // }

    // pattern printing example 10
    // cout << "We are going to print a pattern" << endl;
    // cout << "Enter the number of rows: ";
    // int n;
    // cin>>n;
    // int i = 1;
    // while (i <= n){
    //     int col = 1;
    //     char j = 'A';
    //     while (col <= n) {
    //         cout << j << " ";
    //         col++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // pattern printing example 11
    // cout << "We are going to print a pattern" << endl;
    // cout << "Enter the number of rows: ";
    // int n;
    // cin>>n;
    // int i = 1;
    // char alp = 'A';
    // while (i <= n) {
    //     int j = 1;
    //     while (j<=n) {
    //         cout << alp << " ";
    //         j++;
    //         alp++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // pattern printing example 12
    // cout << "We are going to print a pattern" << endl;
    // cout << "Enter the number of rows: ";
    // int n;
    // cin>>n;
    // int i = 1;
    // char alp = 'A';
    // while (i <= n) {
    //     int j = 1;
    //     while (j <= n) {
    //         cout << static_cast<char>(alp + i - 1 + j - 1) << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // pattern printing example 13
    // cout << "We are going to print a pattern" << endl;
    // cout << "Enter the number of rows: ";
    // int n;
    // cin>>n;
    // int i = 1;
    // char alp = 'A';
    // while (i <= n) {
    //     int j = 1;
    //     while (j <= i) {
    //         cout << alp << " ";
    //         alp++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // pattern printing exmaple 14
    cout << "We are going to print a pattern" << endl;
    cout << "Enter the no. of rows: ";
    int n;
    cin>>n;
    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= n) {
            // cout <<j;
            if (j <= n - i) {
                cout << "  ";
            }
            else {
                cout <<"* ";
            }
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
    
}