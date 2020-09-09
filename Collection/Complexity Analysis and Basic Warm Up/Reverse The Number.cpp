/*
Given an Integer N, write a program to reverse it.

Input
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.

Output
For each test case, display the reverse of the given number N, in a new line.

Constraints
1 <= T <= 1000
1 <= N <= 1000000

Example

Input
4
12345
31203
2123
2300

Output
54321
30213
3212
32
*/
#include<iostream>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--) {
    int n, a = 0;
    cin>>n;
    while(n != 0) {
      a *= 10;
      a += (n%10);
      n /= 10;
    }
    cout<<a<<endl;
  }
  return 0;
}
