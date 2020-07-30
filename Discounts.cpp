#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;
long long res[mxN];
void solve() {
	//implentation goes here
    long long sum = 0;
	scanf("%d", &n);	
	for(int i = 0; i < n; ++i){
		scanf("%d", a + i);
		sum += a[i];	
	}
	sort(a, a + n);
	
	memset(res, -1, sizeof res);
	int m;
	scanf("%d", &m);
	for(int i = 0; i < m; ++i){
		int c;
		scanf("%d", &c);
		if(res[c] == -1){
			res[c] = sum - a[n - c];
		}	

		printf("%lld\n", res[c]);
	}
    

}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}