#include<bits/stdc++.h>
using namespace std;

#define ll long long

class RangeCreater{
    public:
    ll minr, maxr;
    RangeCreater(ll minr, ll maxr) {
        this->minr = max(1ll,minr);
        this->maxr = min(1ll*1000000000, maxr);
    }

    RangeCreater findIntersection(RangeCreater other) {
        return RangeCreater(max(minr,other.minr), min(maxr, other.maxr));
    }

    bool isEmpty() {
        return (minr > maxr) ? true : false;
    }

    void print() {
        cout << "[ " << minr << " , " << maxr << " ]\n";
    }
};


int main() {
    int t; cin >> t;
    while(t--) {
        ll n, k; cin >> n >> k;
        ll arr[n]; for(int i=0; i<n; i++) cin >> arr[i];

        ll result = 0;
        RangeCreater rc = RangeCreater(arr[0]-k, arr[0]+k);
        for(int i=1; i<n; i++) {
            // rc.print();
            RangeCreater other = RangeCreater(arr[i]-k, arr[i]+k);
            // other.print();
            rc = rc.findIntersection(other);
            if(rc.isEmpty()) {
                result++;
                rc = other;
            }
        }

        cout << result << endl;
    }
    return 0;
}