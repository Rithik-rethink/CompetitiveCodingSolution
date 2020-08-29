#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    string a , b;
    cin>>a>>b;
    if(a.size() !=b.size()){
        cout<<"No"<<endl;
        return;
    }
    ll i = 0 ;
    string res = "aeiou";
    while(i < a.size()){
        if(res.find(a[i]) == string::npos){
            if(res.find(b[i]) != string::npos){
                cout<<"No"<<endl;
                return;
            }
        }
        else if(res.find(a[i]) != string::npos){
            if(res.find(b[i]) == string::npos){
                cout<<"No"<<endl;
                return;
            }
        }
        i+=1;
    }
    cout<<"Yes"<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}