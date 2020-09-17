#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    string n ;
    ll k;
    cin>>n>>k;
    ll count = 0 , res = 0;
    for(int i = n.size() - 1 ; i >= 0 ; --i ){
        if(count < k ){    
            if(n[i] == '0'){
                count += 1;
            }
            else{
                res += 1;
            }
        }
        else{
            break;
        }
        //cout<<count<<" "<<res<<endl;
    }
    if(count < k){
        if(n.find('0') != string::npos){
            cout<<n.size() - 1<<endl;
            return;
        }
        cout<<n.size()<<endl;
        return;
    }
    cout<<res<<endl;
    
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}