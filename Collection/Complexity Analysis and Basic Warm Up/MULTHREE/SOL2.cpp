#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        long long k, d0, d1;
        cin>>k>>d0>>d1;
        long long sum = d0 + d1;
        sum += (sum % 10);
        if ((sum % 10) != 0) {
            long long cycles = (k-3)/4;
            sum += (cycles * 20);
            long long remaining = k - (4 * cycles + 3);
            while (remaining--) {
                sum += (sum % 10);
            }
        }
        if (sum % 3 == 0) 
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
    }
}

/* gives TLE (don't know why)

analysis:
k = 13, d0 = 8, d1 = 1
digits in number = 13
2 given, remaining 11.
number = 8198624862486

if number is divided in groups 
number = 819 8624 8624 86

there are repeating cycles of
8624 after first three digits.

---------------------------
k = 13, d0 = 3, d1 = 2
digits in number = 13
2 given, remaining 11.
number = 3250000000000

here cycles of 0s are repeated.
number = 325 0000 0000 00

so, either this cycles consists
of 2, 4, 6, 8 or all of zeroes.

take sum of first three digits.
and do sum % 10 and check if it 0.
if zero then all digits after it
will be zero. so, skip further 
process. else, do following.

number of such cycles  = (k-3)/4;
because cycle is of size 4 and
first three digits are skipped.

the cycle will consists of 2, 4, 6, 8
in any order, but their sum is 20.
so, (20 * number of cycles) is 
added to sum. now, some digits may
be left. like 8, 6 in above example.

add remaining to sum. it can be 
calculated like (sum % 10). add it 
until no digits remains. test sum
is divisible by 3 or not.

if divisible print yes, else no.
*/
