#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implentation goes here
    ll n;
    cin>>n;
    vector<ll> arr(n);
    for(int i = 0 ; i < n ; ++i){
        cin>>arr[i];
    }
    ll j= 1, i,count = 0 , lcount = 1, rcount = 0;
    ll res = 0,temp = arr[0] , flag = true,flag2 = true;
    for(i = 1  ; i < n ; ++i){
        if(arr[i] == arr[i-1] && flag){
            lcount += 1;
        }
        else if(arr[i] == arr[i-1]){
            rcount += 1;
        }
        else if(flag2) {
            rcount = 1;
            flag =false;
            flag2 = false;
        }
        else{
            //cout<<lcount<<" "<<rcount<<endl;
            if(2*min(lcount,rcount) > res){
                res = 2*min(lcount,rcount);
            }
            lcount = rcount;
            rcount = 1;
        }

    }
    if(2*min(lcount,rcount) > res){
        res = 2 * min(lcount,rcount);
    }
    cout<<res<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}