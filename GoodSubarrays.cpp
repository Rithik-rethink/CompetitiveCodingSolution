#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n ;
    cin>>n;
    string s;
    cin>>s;
    ll a = count(s.begin(),s.end(),'1');
    ll res = a ;
    vector<ll> ans;
    for(int i = 0 ; i < s.size() ; ++i){
        ll temp = s[i] - '0';
        ans.push_back(temp);
    }
    //cout<<res<<" "<<s.size() - 1<<endl;
    ll i = 0 , j = 1 ;
    
    while( i < s.size() - 1){
        //cout<<i<<" "<<j<<" ";
        
        ll temp = accumulate(ans.begin() + i , ans.begin() + j +1, 0);
        //cout<<temp<<" "<<abs(i - j) + 1<<endl;
        if(temp == (abs(i-j) + 1)){
            res += 1;
        }
        if( j < s.size() - 1){
            j += 1;
            continue;
        }
        if( j == s.size() - 1){
            i += 1;
            j = i + 1;
        }
    }
    cout<<res<<endl;
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