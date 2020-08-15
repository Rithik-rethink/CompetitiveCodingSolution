#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n;
    cin>>n;
    vector<ll> arr;
    for(int i = 0 ; i < n ; ++i){
        ll a;
        cin>>a;
        arr.push_back(a);
    }
    sort(arr.begin(),arr.end());
    ll a = arr[n-1];
    ll b = arr[n-2];
    for(int i = 0 ; i < n - 2 ; ++i){
        if( a + arr[i] > b && arr[i] != b && arr[i] != a) {
            if( b + arr[i] > a){
                if(a + b > arr[i]){
                    cout<<"YES"<<endl;
                    return;
                }
            }
        }
        if(arr[i] + arr[i+1] > arr[i+2]){
            if(arr[i+1] + arr[i+2] > arr[i]){
                if(arr[i] + arr[i+2]>arr[i+1]){
                    cout<<"YES"<<endl;
                    return;
                }
            }
        }
    }
    ll i;
    bool flag =true;
    for(i = 0 ; i < n ; ++i){
        if( arr[i] == arr[i-1] && i > 0){
            a = arr[i];
            b = arr[i-1];
            flag = false;
            break;
        }
    }
    if(flag){
        cout<<"NO"<<endl;
        return;
    }
    ll c;
    if( i > 1)
        c = arr[i - 2];
    else
        c = arr[i + 1];
    if( a + c > b) {
        if( b + c > a){
            if(a + b > c){
                cout<<"YES"<<endl;
                return;
            }
        }
    }
    cout<<"NO"<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}