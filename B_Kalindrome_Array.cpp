#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        ll arr[n]; for(ll i=0; i<n; i++) cin >> arr[i];

        ll num1 = -1, num2 = -1, i = 0, j = n-1;
        while(i<j) {
            if(arr[i]!=arr[j]) {
                num1 = arr[i];
                num2 = arr[j];
                break;
            }
            i++;
            j--;
        }

        if(num1 == -1) {
            cout << "YES\n";
            continue;
        }

        // skipping num1
        i = 0, j = n-1;
        bool flag = true;
        while(i<j) {
            if(arr[i]!=arr[j]) {
                if(arr[i]!=num1 && arr[j]!=num1) {
                    flag = false;
                    break;
                }
                i += (arr[i]==num1);
                j -= (arr[j]==num1);
            }
            else {
                i++;
                j--;
            }
        }

        if(flag) {
            cout << "YES\n";
            continue;
        }

        // skipping num2
        i = 0, j = n-1;
        flag = true;
        while(i<j) {
            if(arr[i]!=arr[j]) {
                if(arr[i]!=num2 && arr[j]!=num2) {
                    flag = false;
                    break;
                }
                i += (arr[i]==num2);
                j -= (arr[j]==num2);
            }
            else {
                i++;
                j--;
            }
        }

        cout << (flag ? "YES\n" : "NO\n");
    }
    return 0;
}