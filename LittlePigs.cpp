#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n , m;
    cin>>n>>m;
    vector<ll> s;
    for(int i = 0 ; i < n*m ; ++i ){
        char a;
        cin>>a;
        s.emplace_back(a);
    }
    ll res = 0;
    for(int i = 0 ; i < s.size() ; ++i ){
        ll temp = i + 1;
        if(s[i] != 'W')
            continue;
        if(temp % m == 1 ){
            if(s[i + 1] == 'P'){
                res += 1;
                s[i + 1] = '.';
                // cout<<i<<" ";
                continue;
            }
            if(temp > m && s[i-m] == 'P'){
                res += 1;
                s[i-m] = '.';
                // cout<<i<<" ";

                continue;
            }
            ll x = n * m - m;
            if(temp < x && s[i + m]=='P'){
                res += 1;
                s[i+m] = '.';
                // cout<<i<<" ";

                continue;
            }
        }
        else if(temp % m == 0){
            if(s[i-1] == 'P'){
                res += 1;
                s[i-1] = '.';
                // cout<<i<<" ";

                continue;
            }
            if(temp > m && s[i-m] == 'P'){
                res += 1;
                s[i-m] = '.';
                // cout<<i<<" ";

                continue;
            }
            ll x = n * m - m;
            if(temp <= x && s[i + m]=='P'){
                res += 1;
                s[i + m] = '.';
                // cout<<i<<" ";

                continue;
            }
        }
        else{
            if(s[i+1] == 'P' || s[i-1] == 'P'){
                res += 1;
                s[i - 1] = '.';
                // cout<<i<<" ";

                continue;
            }
            if( i + m < n*m && s[i+m] == 'P'){
                res += 1;
                s[i + m] = '.';
                // cout<<i<<" ";

                continue;
            }
            if( i - m >= 0 && s[i - m ] == 'P'){
                res += 1;
                s[i - m] = '.';
                // cout<<i<<" ";

                continue;
            }
        }
    }
    cout<<res<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}