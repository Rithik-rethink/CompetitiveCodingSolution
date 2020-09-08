#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    string s = "";
    ll n ;
    cin>>n;
    for(int i = 0 ; i < n ;++i){
        string a ;
        cin>>a;
        s += a;
    }
    //cout<<" n = "<<n<<endl;
    for(int i = 0 ; i < s.size() ;++i ){
        ll temp = 0;
    
        if( i - n >= 0){
            if(s[i-n] == 'o'){
                temp += 1;
            }
        }
        if( i+n < n*n){
            if(s[i+n] == 'o'){
                temp += 1;
            }
        }
        if( (i+1) < n*n && (i+1) % n != 0){
            if(s[i+1] == 'o'){
                temp += 1;
            }
        }
        if((i-1) >= 0 && i % n !=0 ){
            if(s[i-1] == 'o'){
                temp += 1;
            }
        }
        //cout<<temp<<" for "<<s[i]<<i<<endl;
        if(temp % 2 != 0){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}