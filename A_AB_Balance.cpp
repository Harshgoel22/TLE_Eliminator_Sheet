#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        string input; cin >> input;
        int ab_count = 0, ba_count = 0, n = input.size();

        for(int i=1; i<n; i++) {
            if(input[i-1]=='a' && input[i]=='b') ab_count++;
            if(input[i-1]=='b' && input[i]=='a') ba_count++;
        }

        if(ab_count > ba_count) input[n-1]='a';
        else if(ba_count > ab_count) input[0] = 'a';
        
        cout << input << endl;
    }
    return 0;
}