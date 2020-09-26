#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll A,B;
    cin>>A>>B;
    
    string maxi = to_string(B);
    set<char> st;
    for(int i = 0 ; i < maxi.size() ; ++i ){
        st.insert(maxi[i]);
    }
    if(st.size() == 1 && maxi[0] == '9'){
        cout<<A * maxi.size()<<endl;
        return;
    }
    ll temp = maxi.size() - 1;
    cout<<A*temp<<endl;

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