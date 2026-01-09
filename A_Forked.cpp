#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>> createDirections(int a, int b) {
    set<pair<int,int>> directions = {
        {a,b},
        {a,-b},
        {-a,b},
        {-a,-b},
        {b,a},
        {b,-a},
        {-b,a},
        {-b,-a}
    };
    vector<pair<int,int>> result(directions.begin(), directions.end());

    return result;
}



int main() {
    int t; cin >> t;
    while(t--) {
        int a, b; cin >> a >> b;
        int qx, qy, kx, ky;
        cin >> qx >> qy;
        cin >> kx >> ky;

        vector<pair<int,int>> directions = createDirections(a,b);

        vector<pair<int,int>> possibleCoors;
        for(auto [dx, dy] : directions) {
            pair<int,int> paircoor = {qx + dx, qy + dy};
            possibleCoors.push_back(paircoor);
        }

        set<pair<int,int>> resultantCoor;
        for(auto [cx, cy] : possibleCoors) {
            if(cx==kx && cy==ky) continue;
            for(auto [dx,dy] : directions) {
                int nx = cx + dx, ny = cy + dy;
                if(nx==kx && ny==ky) resultantCoor.insert({cx, cy});
            }
        }

        cout << resultantCoor.size() << endl;
    }
}