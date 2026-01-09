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
	ll n, m; cin >> n >> m;
	string s, x;
	cin >> x >> s;

	ll result = 0;
	bool check;
	forf(xi, 0, n) {
		ll i = xi;
		result = 1;
		check = true;
		forf(j, 0, m) {
			if(s[j]!=x[i]) {
				check = false;
				break;
			}
			if(i==n-1 && j<m-1) result++;
			i = (i+1)%n;
		}
		if(check) break;
	} 

	ll logres = log2(result);
	if(1<<logres < result) logres++;

	cout << (check == true ? logres : -1) << "\n";
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