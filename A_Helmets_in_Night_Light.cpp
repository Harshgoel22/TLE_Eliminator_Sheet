#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    long long conn, cost;
    Node(long long conn, long long cost) {
        this->conn = conn;
        this->cost = cost;
    }
};

int main() {
    int t; cin >> t;
    while(t--) {
        long long n, p; cin >> n >> p;
        long long a[n]; for(int i=0; i<n; i++) cin >> a[i];
        long long b[n]; for(int i=0; i<n; i++) cin >> b[i];

        vector<Node> pairs;
        for(int i=0; i<n; i++) {
            pairs.emplace_back(a[i], b[i]);
        } 

        sort(pairs.begin(), pairs.end(), [](const Node& node1, const Node& node2){
            return node1.cost < node2.cost;
        });

        long long notcovered = n - 1;
        long long mincost = p;

        for(int i=0; i<n; i++) {
            if(pairs[i].cost >= p) break;
            long long to_be_covered = pairs[i].conn;
            to_be_covered = min(to_be_covered, notcovered);
            mincost += (to_be_covered * pairs[i].cost);
            notcovered -= to_be_covered;
        }

        mincost += (notcovered * p);
        cout << mincost << endl;
    }
    return 0;
}