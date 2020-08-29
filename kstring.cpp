#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll k;
    cin>>k;
    string s;
    cin>>s;
    set<char> sett;
    for(int i = 0 ; i < s.size() ; ++i){
        sett.insert(s[i]);
    }
    string res = "";
    for(auto itr = sett.begin() ; itr!=sett.end() ; ++itr){
        ll temp = count(s.begin(),s.end(),*itr);
        if(temp % k != 0 && temp != k){
            cout<<-1<<endl;
            return;
        }
        ll r = temp / k;
        res += string(r,*itr);
        //cout<<res<<endl;
    }
    for(int i = 0 ; i < k ; ++i){
        cout<<res;
    }
    cout<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}