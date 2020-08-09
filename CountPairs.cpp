#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implentation goes here
    ll n,k;
    cin>>n>>k;
    vector<ll> arr,arr1,spe;
    for(int i = 0 ; i < n ; ++i){
        ll a;
        cin>>a;
        if(find(arr.begin(),arr.end(),a) == arr.end())
            arr.push_back(a);
        else{
            spe.push_back(a);
        }
    }
    ll happy = 0;
    sort(arr.begin(),arr.end());
    for(int i = 0 ; i < n ; ++i){
        if(arr[i+1] - arr[i] <= k && arr[i+1] - arr[i] > 0 && i < n){
            happy+=1;
            if(find(spe.begin(),spe.end(),arr[i]) != spe.end()){
                happy+= count(spe.begin(),spe.end(),arr[i]);
            }
        }
        else if(arr[i] - arr[i-1] <= k && arr[i] - arr[i-1] > 0 && i >0){
            happy+= 1;
            if(find(spe.begin(),spe.end(),arr[i]) != spe.end()){
                happy+= count(spe.begin(),spe.end(),arr[i]);
            }
        }

    }
    cout<<happy<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}







