#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;
string dectobin(ll temp){
    string a = "";
    while(temp > 0){
        //cout<<"in";
        a += to_string(temp % 2);
        //cout<<temp<<" "<<a<<endl;
        temp /= 2;
    }

    reverse(a.begin(),a.end());
    return a;
}
lll counting(lll number){
    return (lll)log2(number) + 1;
}
void solve() {
	//implementation goes here
    string s ; cin >> s;
	ll sz = s.size(), cnt = 0 ;
	ll ans = (sz)/2;
	if(sz%2==0){
		cout << ans << endl;
		return;
	}
	for(ll i = 1 ; i < sz; i ++){
		if(s[i]=='1')
			cnt ++;
	}
	if(cnt > 0)
		cnt = 1;
	cout << ans + cnt << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}