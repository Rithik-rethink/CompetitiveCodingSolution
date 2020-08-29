#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    string s;
    cin>>s;
    string res = "";
    char temp = s[0];
    ll count = 1;
    for(int i = 1 ; i < s.size() ; ++i){
        if(s[i] == temp){
            count += 1;
        }
        else{
            if(count % 2 != 0){
                if(res.find(temp) ==string::npos)
                    res += temp;
            }
            temp = s[i];
            count = 1;
        }
    }
    if(count % 2 != 0){
        if(res.find(temp) ==string::npos)
            res += temp;
    }
    sort(res.begin(),res.end());

    cout<<res<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	for(int i=1; i<=t; ++i) {
		//cout << "Case #" << i << ": ";
		solve();
	}
}