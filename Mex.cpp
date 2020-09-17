#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n ;
    cin>>n;
    vector<ll> arr;
    map<ll , ll> mp;
    set<ll> st;
    for(int i = 0 ; i < n ; ++i ){
        ll a;
        cin>>a;
        arr.push_back(a);
        mp[a] += 1;
        st.insert(a);
    }
    ll zero = count(arr.begin() , arr.end() , 0);
    sort(arr.begin() , arr.end());
    if(zero == 0){
        cout<<0<<endl;
        return;
    }
    else if(zero == 1){
        ll prev = 1;
        for(int i = 1 ; i < n ; ++i){
            if(arr[i] != prev){
                cout<<prev<<endl;
                return;
            }
            prev += 1;
        }
        cout<<prev<<endl;
        return;
    }
    else{
        bool f1 = true , f2 = false;
        ll prev = 0;
        ll res1 = -1 , res2 = -1;
        for(auto itr = mp.begin() ; itr!= mp.end() ; ++itr){
            if(itr->first != prev){
                if(f1){
                    res1 = prev;
                    res2 = prev;
                }
                else{
                    res1 = prev;
                }
                break;
            }
            
            if(itr->second < 2 && f1){
                res2 = itr->first;
                f1= false;
            }
            prev += 1;
                 
        }
        //cout<<res1<<" "<<prev<<" "<<res2<<endl;
        if(res1 == -1 && res2 == -1){
            cout<<2*prev<<endl;
            return;
        }
        else if(res1 == -1 ){
            cout<<prev + res2<<endl;
            return;
        }
        cout<<res1+res2<<endl;
    }
    
    
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
