/*
Lapindrome is defined as a string which when split in the middle, gives two halves having the same characters and same frequency of each character. 
If there are odd number of characters in the string, we ignore the middle character and check for lapindrome. 
For example gaga is a lapindrome, since the two halves ga and ga have the same characters with same frequency. 
Also, abccab, rotor and xyzxy are a few examples of lapindromes. Note that abbaab is NOT a lapindrome. 
The two halves contain the same characters but their frequencies do not match.
Your task is simple. Given a string, you need to tell if it is a lapindrome.

Input:
First line of input contains a single integer T, the number of test cases.
Each test is a single line containing a string S composed of only lowercase English alphabet.

Output:
For each test case, output on a separate line: "YES" if the string is a lapindrome and "NO" if it is not.

Constraints:
1 <= T <= 100
2 <= |S| <= 1000, where |S| denotes the length of S

Example:

Input:
6
gaga
abcde
rotor
xyzxy
abbaab
ababc


Output:
YES
NO
YES
YES
NO
NO
*/

#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main() {
    int t, len, i=0, k=0, j=0, res;
    string str;
    cin>>t;
    while (t--) {
        res=0;
        cin>>str;
        len = str.length();
        
        if(len%2 == 0) {
            k = (len/2);
            string str1 = str.substr(0,k);
            string str2 = str.substr(k);
            
            sort(str1.begin(),str1.end());
            sort(str2.begin(),str2.end());
            
            if(str1!=str2)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
            
        }
        else {
            k = (len/2);
            string str1 = str.substr(0,k);
            string str2 = str.substr(k+1);
            
            sort(str1.begin(),str1.end());
            sort(str2.begin(),str2.end());
            
            if(str1!=str2)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
    }
    
	return 0;
}
