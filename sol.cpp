//#pragma GCC optimize("Ofast,no-stack-protector")
//#pragma GCC target("avx")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
using namespace __gnu_pbds;
using namespace std;
 
#define re return
#define pb push_back
#define eb emplace_back
#define all(x) (x).begin(), (x).end()
#define fi first
#define se second
#define sqrt(x) sqrt(abs(x))
#define mp make_pair
#define pi (3.14159265358979323846264338327950288419716939937510)
#define fo(i, n) for(int i = 0; i < n; ++i)
#define ro(i, n) for(int i = n - 1; i >= 0; --i)
#define unique(v) v.resize(unique(all(v)) - v.begin())
 
template <class T> T abs (T x) { re x > 0 ? x : -x; }
template <class T> T sqr (T x) { re x * x; }
template <class T> T gcd (T a, T b) { re a ? gcd (b % a, a) : b; }
template <class T> int sgn (T x) { re x > 0 ? 1 : (x < 0 ? -1 : 0); }
 
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<string> vs;
typedef double D;
typedef long double ld;
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef unsigned long long ull;
typedef tree <pair<int, char>, null_type, less<pair<int, char>>, rb_tree_tag, tree_order_statistics_node_update> _tree;
 
const int sizeFenv = (int) 1e6;
int fenv[sizeFenv];

void addFenv (int p, int value) {
	for(; p < sizeFenv; p |= p + 1)
		fenv[p] += value;
}

int getFenv (int r) {
	int res = 0;
	for(; r >= 0; r = (r & (r + 1)) - 1)
		res += fenv[r];
	return res;
}

int getSum (int l, int r) {
	return getFenv(r) - getFenv(l - 1);
}

int main() {	
	return 0;
}