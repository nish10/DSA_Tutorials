// bitwise operator examples

#include <iostream>
using namespace std;

int main() {

  // int a = 4;
  // int b = 6;

  // cout << "a&b : " << (a&b) << endl;
  // cout << "a|b : " << (a|b) << endl;
  // cout << "~a: " << ~a << endl;
  // cout << "a^b: " << (a^b) << endl;

  // left shift operator and right shift operator
  // cout << (17>>1) << endl;
  // cout << (17>>2) << endl;
  // cout << (19<<1) << endl;
  // cout << (21<<2) <<endl;

  // pre increment and post increment

  // int i = 7;
  // cout << (++i) << endl;
  // cout << (i++) << endl;
  // cout << (i--) << endl;
  // cout << (--i) << endl;
 
  // for loop

  // int n;
  // cout << "Enter the value of n: ";
  // cin>>n;

  // cout << "Prinitng count from 1 to n" << endl;

  // for(int i = 1; i <=n; i++) {
  //   cout << i << " ";
  // }

  // cout << endl;

  // for(int a = 4, b= 5; a>=0 && b >=1; a--, b--) {
  //   cout <<a <<" "<< b << " "<< endl;
  // }

  // sum for loop
  // int n;
  // cin>>n;

  // int sum = 0;
  // for(int i = 1; i <= n; i++) {
  //   sum += i;
  // }

  // cout << sum <<endl;

  // fibonnaci number
  // cout << "enter the numbers to be pinted: ";
  // int n;
  // cin>>n;

  // int a = 0;
  // int b = 1;
  // int sum = a + b;
  // for(int i=0; i<n; i++) {
  //   sum = a + b;
  //   cout << sum << " ";
  //   a = b;
  //   b = sum;
  // }
  // cout << endl;

  // is prime number and break usage

  // cout << "Check whether the given number is prime or not: ";
  // int n;
  // cin>>n;
  // bool isPrime = true;
  // for(int i = 2; i < n; i++) {
  //   if (n%i == 0) {
  //     cout << n << " is not a prime number." << endl;
  //     isPrime = false;
  //     break;
  //   } 

  // }
  // if(isPrime) {
  //   cout << n << " is a prime number." << endl;
  // }

  // continue usage
  
  // for(int i =0; i < 5; i++) {

  //   cout << "hi" << endl;
  //   cout << "hey" << endl;

  //   continue;

  //   cout << "checking this print" << endl;

  // }

  // variables and scope

  // int a;
  // a = 3;
  // cout << a << endl; // garbage value if the value is not assigned

  // if(true) {
  //   // int a = 5;
  //   cout << a << endl;
  //   int b = 3;
  //   cout << b << endl;
  // }

  // cout << a << endl;
  // int b = 3;
  // cout << b << endl;

  // for(int i =0; i < 10; i++) {
  //   cout << "Hi" << endl;
  // }

  // operator precedence

  // questions

  // q1 - given a number find the product and sum of the number

  // cout << "Enter the number whose digit's product and sum you want: ";
  // int n;
  // cin>>n;
  // int prod = 1;
  // int sum = 0;
  
  // while(true) {
  //   prod = prod * (n%10);
  //   sum = sum + (n%10);
  //   if(n/10 == 0) {
  //     break;
  //   }
  //   n = n/10;
  // }

  // cout <<"Product of the digits of the number is: " << prod << endl;
  // cout <<"Sum of the digits of the number is: "<< sum << endl;

  // q2 - Number of 1 bits

  cout << "Enter the no. for which you want to count 1 bit: ";

  int n;
  cin>>n;
  int count = 0;
  while(n!=0) {
    if(n&1) {
      count++;
    }
    n = n>>1;
  }

  cout << count << endl;
  


  return 0;
}