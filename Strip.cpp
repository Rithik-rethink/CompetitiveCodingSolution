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
    map<ll , ll> mp , mpe;
    for(int i = 0 ; i < n ; ++i){
        ll a;
        cin>>a;
        arr.push_back(a);
    }
    if(find(arr.begin(),arr.end(),0) == arr.end()){
        cout<<"No"<<endl;
        return;
    }
    ll zero = 0;
    for(int i = 0 ;i < n ; ++i){
        if(arr[i] == 0){
            zero += 1;
        }
        else if(zero > 0){
            if(zero % 2 != 0){
                mp[zero] += 1;
            }
            else if(zero % 2 == 0){
                mpe[zero] += 1;
            }
            zero = 0;
        }
    }
    if(zero > 0){
        if(zero % 2 != 0){
            mp[zero] += 1;
        }
        else if(zero % 2 == 0){
            mpe[zero] += 1;
        }
    }
    if(mp.empty()){
        cout<<"No"<<endl;
        return;
    }
    auto itr = mp.rbegin();
    //cout<<itr2->first<<" -> "<<itr2->second<<endl;
    //cout<<mpe.empty()<<endl;
    
    if(mpe.empty()){
        if(itr->second > 1){
            cout<<"No"<<endl;
            return;
        }
        ll r = itr->first / 2 ;
        itr++ ;
        if(itr != mp.rend()){
            if(itr->first - 1 >= r ){
                cout<<"No"<<endl;
                return;
            }
        
        }
        cout<<"Yes"<<endl;
        return;
    }
    itr = mp.rbegin();
    ll g = itr->first/2;
    ll ex = 0;
    itr++;
    if(itr != mp.rend())
        ex = itr->first - 1;
    auto itr2 = mpe.rbegin();
    ll ex1 = itr2->first - 1;
    ll h ;
    if(ex1 > ex)
        h = ex1;
    else
        h = ex;
    //cout<<"h = "<<h<<"g = "<<g<<endl;
    if(h >= g){
        cout<<"No"<<endl;
        return;
    }
    itr = mp.rbegin();
    if(itr->first < itr2->first){
        cout<<"No"<<endl;
        return;
    }

    cout<<"Yes"<<endl;

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