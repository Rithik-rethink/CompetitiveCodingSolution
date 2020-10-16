#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n , k;
    cin>>n>>k;
    map<ll,string> arr;
    ll length_less = 0 , length_equal = 0;
    for(int i = 0 ; i < n ; ++i ){
        string s;
        cin>>s;
        arr.insert({i,s});
    }
    string s ; 
    cin>>s;
    for(auto itr = arr.begin() ; itr!= arr.end() ; ++itr) {
        if(itr->second.size() < s.size()){
            length_less += 1;
        }
        else if(itr->second.size() == s.size()){
            length_equal += 1;
        }
    }
    // cout<<length_equal<<" "<<length_less<<endl;
    ll res = 0;
    ll temp = length_less/ k ;
    temp *= 5;
    res += temp;
    res += length_less;
    ll res1 = 0;
    res += 1;
    temp = (length_equal+length_less);
    if(temp % k == 0 ){
        temp -= 1;
    }
    temp /= k;
    temp *= 5;
    res1 += temp;
    res1 += length_equal + length_less;
    cout<<res<<" "<<res1<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}