#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n;
    cin>>n;
    vector<string> arr;
    ll N;
    for(int i = 0 ; i < n ; ++i ){
        string s;
        cin>>s;
        N = s.size();
        arr.emplace_back(s);
    }
    ll code = 0;
    for(int i = 0 ; i < N ; ++i ){
        ll temp = 1;
        for(int j = 0 ; j < n-1; ++j ){
            if(arr[j][i] == arr[j+1][i]){
                temp += 1;
            }
        }
        if(temp == n){
            code += 1;
        }
        else{
            break;
        }
    }
    cout<<code<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}