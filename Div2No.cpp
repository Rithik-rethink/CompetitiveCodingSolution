#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    int n;
	cin >> n;
	multiset<int> a;
	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		a.insert(x);
	}
	
	int x = *prev(a.end());
	for (int i = 1; i <= x; ++i) {
		if (x % i == 0) {
			a.erase(a.find(i));
		}
	}
	
	cout << x << " " << *prev(a.end()) << endl;
	
}   

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
