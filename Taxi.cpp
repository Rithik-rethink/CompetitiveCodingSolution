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
    vector<ll> arr;
    set<ll> st;
    for(int i = 0 ; i < n ; ++i ){
        ll a;
        cin>>a;
        arr.push_back(a);
        st.insert(a);
    }
    if(st.size() == 1){
        if(st.find(1) != st.end()){
            ll res = n / 4 ;
            if(n % 4 != 0){
                res += 1;
            }
            cout<<res<<endl;
            return;
        }
        if(st.find(2) != st.end()){
            ll res= n /2;
            if(res % 4 != 0){
                res += 1;
            }
            cout<<resCar<<endl;
            return;
        }
    }
    ll i = 0;
    ll res = 0;
    sort(arr.begin() , arr.end());
    while(i < arr.size()){
        // cout<<arr[i]<<endl;
        ll temp = accumulate(arr.begin() + i, arr.end() , 0);
        if(temp <= 4){
            res += 1;
            break;
        }
        if(arr[i] == 1 && find(arr.begin() , arr.end() , 3) != arr.end()){
            i += 1;
            res += 1;
            auto itr = find(arr.begin() , arr.end() , 3) ;
            ll ind = distance(arr.begin() , itr);
            arr.erase(arr.begin() + ind);
        }
        else if( arr[i] == 1 && arr[i + 1] == 1 && arr[i + 2] == 1 && arr[i + 3] == 1 && i < arr.size() - 3){
            i +=  4;
            res += 1;
        }
        else if( arr[i] == 1 && arr[i + 1] == 1 && arr[i + 2] == 1 && i < arr.size() - 2){
            i +=  3;
            res += 1;
        }
        else if(arr[i] == 1 && arr[i + 1] == 1 && arr[i + 2] == 2 && i < arr.size() - 2){
            //cout<<"here"<<endl;
            i += 3;
            res += 1;
        }
        else if( arr[i] == 1 && arr[i + 1] == 1 && i < arr.size() - 1){
            i +=  2;
            res += 1;
        }
        else if(arr[i] == 1 && arr[i+1] == 2 && i < arr.size() - 1){
            i += 2;
            res += 1;
        }
        else if(arr[i] == 2 && arr[i+1] == 2 && i < arr.size() - 1){
            i +=2;
            res += 1;
        }
        else{
            i += 1;
            res += 1;
        }
    }
    cout<<res<<endl;
}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}

