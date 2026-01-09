#include<bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll,ll> pll;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pll> vll;
typedef vector<pii> vii;
typedef vector<ll> vl;
typedef vector<vl> vvl;

#define endl "\n"
#define forf(i, a, b) for (ll i = (a); (i) < (b); ++(i))
#define forr(i, b, a) for (ll i = (b); (i) > (a); --(i))
#define sqr(x) ((LL)(x) * (x))
#define reset(a, b) memset(a, b, sizeof(a))
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define all(v) v.begin(), v.end()
#define alla(arr, sz) arr, arr + sz
#define sz(v) (int)v.size()
#define permute(v) next_permutation(all(v))
#define lb(v,num) lower_bound(all(v),num)
#define ub(v,num) upper_bound(all(v),num)

void solve(){
	//write your code here
	ll n; cin >> n;
	vl arr(n); forf(i, 0, n) cin >> arr[i];

	ll count = 0, result = 0;
	forf(i, 0, n) {
		if(arr[i]==0) count++;
		else count = 0;
		result = max(result, count);
	}
	cout << result << endl;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll t;
	cin >> t;
	while(t--) solve();

	return 0;
}

// g++ -std=c++11 -O2 -Wall test.cpp -o test