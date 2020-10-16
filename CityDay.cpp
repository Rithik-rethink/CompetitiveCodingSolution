#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n , l , r;
    cin>>n>>l>>r;
    vector<ll> arr;
    for(int i = 0 ; i < n ; ++i ){
        ll a;
        cin>>a;
        arr.emplace_back(a);
    }
    ll i = 0;
    ll L = l, R = r ,res = -1 , revert = -1;
    while( i < n){
        if(L){
            vector<ll> temp(arr.begin() + i, arr.begin() + i + L);
            vector<ll> temp2 = temp;
            sort(temp.begin() , temp.end() , greater<ll>());
            if(temp == temp2 && arr[i + l ] < temp[temp.size() - 1]){
                L = 0;
                res = i + l + 1;
                revert = i + 1;
                i = i + l ;
                continue;
            }
        }
        else if(R){
            cout<<"at "<<arr[i]<<" "<<i<<endl;
            vector<ll> temp(arr.begin() + i , arr.begin() + i + R);
            vector<ll> temp2 = temp;
            sort(temp.begin() , temp.end());
            if(temp == temp2 && temp[0] > res){
                cout<<res<<endl;
                return;
            }
            else{
                L = l;
                res = -1;
                R = r;
                i = revert;
                continue;
            }
        }

        i += 1;

    }
    cout<<res<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}