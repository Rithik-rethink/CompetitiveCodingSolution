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
    vector<pair<ll ,ll>> arr;

    for(int i = 0 ; i < n ; ++i ){
        ll a , b;
        cin>>a>>b;
        arr.push_back(make_pair(a,b));
    }
    ll res = 0 ,temp ;
    for(int i = 0 ; i < n ;++i){
        temp = 0;
        ll up = 0 , down = 0,left= 0 , right = 0;
        for(int j = 0 ; j < n ; ++j){
            if(arr[j].first > arr[i].first && up == 0){
                if(arr[j].second == arr[i].second){
                    up += 1;
                }
            }
            else if(arr[j].first < arr[i].first && down == 0){
                if(arr[j].second == arr[i].second){
                    down += 1;
                }
            }
            else if(arr[j].second > arr[i].second && right == 0){
                if(arr[j].first == arr[i].first){
                    right += 1;
                }
            }
            else if(arr[j].second < arr[i].second && left == 0){
                if(arr[j].first == arr[i].first){
                    left += 1;
                }
            }
            else if(up == 1 && down == 1 && left == 1 && right == 1){
                break;
            }
        }
        temp = up + down + left + right ;
        if(temp == 4){
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