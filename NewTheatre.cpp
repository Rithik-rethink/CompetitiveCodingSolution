#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;
ll countt(string a){
    ll i = 0,res = 0;
    while( i < a.size()-1){
        if( a[i] == a[i+1] && a[i] == '.' ){
            res += 1;
            i+=2;
        }
        else{
            i+=1;
        }
    }
    return(res);
}
void solve() {
	//implementation goes here
    ll n, m , a ,b;
    cin>>n>>m>>a>>b;
    ll indi = 0,counts = 0;
    for(int i = 0 ; i < n ; ++i){
        string s; 
        cin>>s;
        indi += count(s.begin(),s.end(),'.');
        counts += countt(s); 
    }
    ll temp =indi;
    indi *=a;
    //cout<<indi<<" and "<<counts<<endl;
    temp = temp - (2 * counts);
    temp *= a;
    counts *= b;
    cout<<min(indi,temp + counts)<<endl; 
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