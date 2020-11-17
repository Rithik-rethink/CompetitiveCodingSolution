#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array
#define mod 1000000007

const int mxN=2e5;
int n, a[mxN], k;

// void solve() {
// 	//implementation goes here
// }

void arr(){
    for(int i = 0 ; i < 5 ; ++i ){
        a[i] = i;
    }
}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
    arr();
	int t;
	cin >> t;
	for(int i=1; i<=t; ++i) {
		cout << "Case #" << i << ": ";
        cout<<a[2]<<endl;
	}
}