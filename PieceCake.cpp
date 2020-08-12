#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    vector<ll> arr;
    for(int i = 0 ; i < n ; ++i){
        if(i > 0 && s[i] == s[i-1]){
            continue;
        }
        ll temp = count(s.begin(),s.end(),s[i]);
        arr.push_back(temp);
    }
    sort(arr.begin(),arr.end());
    for(int i = arr.size()-1 ; i >= 0 ; --i){
        if(find(arr.begin(),arr.end(),arr[i] - arr[0]) != arr.end()){
            cout<<"YES"<<endl;
            return;
        }
        else if(arr[i] - arr[0] == 0){
            cout<<"YES"<<endl;
            return;
        }

    }
    cout<<"NO"<<endl;

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