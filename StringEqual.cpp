#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    string a,b;
    cin>>a>>b;
    for(int i = 0 ; i < a.size() ; ++i){
        if(find(b.begin() , b.end() , a[i]) != b.end()){
            cout<<"Yes"<<endl;
            return;
        }

    }
    cout<<"No"<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	for(int i=1; i<=t; ++i) {
		solve();
	}
}