#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll N = 30001;
vector<bool> prime(N, true);

void precompute_sieve(vector<bool>& prime) {
    for(int p=2; p*p<N; p++) {
        if(prime[p]==false) continue;
        for(int np=p*p; np<N; np+=p) {
            prime[np] = false;
        }
    }
}

int main() {
    precompute_sieve(prime);
    int t; cin >> t;
    while(t--) {
        ll d; cin >> d;
        ll result = 1, found, last_taken = 1;
        for(int epoch=0; epoch<2; epoch++) {
            found = 0;
            for(int num=last_taken+d; num<N; num++) {
                if(prime[num]==true) {
                    last_taken = num;
                    found = 1;
                    break;
                }
            }
            result = 1ll*result*last_taken;
        }

        cout << (found==1 ? to_string(result) : "NOT FOUND") << endl;
    }
    return 0;
}