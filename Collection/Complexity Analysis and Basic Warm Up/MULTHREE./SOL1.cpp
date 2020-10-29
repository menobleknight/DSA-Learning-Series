#include <iostream>
#define ll long long
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        ll k;
        int d0, d1;
        cin>>k>>d0>>d1;
        
        int sum = d0 + d1;
        int cycle_sum = ((2*sum) % 10) + ((4*sum) % 10) + ((8*sum) % 10) + ((6*sum) % 10);
        
        ll cycles = (k-3)/4;
        ll total = 0;
        
        if (k == 2) {
            total = sum;
        }
        else {
            total = sum + (sum % 10)  + (cycle_sum * 1LL * cycles);
            int left_over = (k - 3) - (cycles * 4);
            
            int p = 2;
            for (int i=1; i <= left_over; i++) {
                total += ((p*sum) % 10);
                p = (2*p) % 10;
            }
        }
        if ((total % 3) == 0)
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
    }
}
