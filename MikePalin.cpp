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
    ll i = 0 , j = s.size() - 1,count =0;
    while( i < j ){
        //cout<<a[i]<<' '<<a[j]<<endl;
        if(s[i] !=s[j]){
            count += 1;
        }
        if(count > 1){
            cout<<"NO"<<endl;
            return;
        }
        i+=1;
        j-=1;
    }
    //cout<<count<<endl;
    if(count == 1){
        cout<<"YES"<<endl;
        return;
    }
    
    if(count == 0 && s.size() % 2 != 0){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}