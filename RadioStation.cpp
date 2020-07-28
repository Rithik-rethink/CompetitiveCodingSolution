#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implentation goes here
    ll n , m ;
    cin>>n>>m;
    map<string,string> arr1;

    for(int i = 0 ; i < n ; ++i){
        string a,b;
        cin>>a>>b;
        arr1[b] = a;
    }
    
    for(int i = 0 ; i < m ; ++i){
        string a ,b;
        cin>>a>>b;
        string g = b;
        g.pop_back();
        //cout<<b<<endl;
        auto itr = arr1.find(g);
        cout<<a<<" "<<b<<" "<<"#"<<itr->second<<endl;
    }
}

int main() {
	ios::sync_with_stdio(0);
	
    cin.tie(0);

	solve();
}