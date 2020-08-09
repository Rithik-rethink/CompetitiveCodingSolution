#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

ll counting(vector<ll> re){
    ll sum = 0;
    vector<ll> qwerty;
    for(int j = 0 ; j < re.size() ; ++j){
        if(find(qwerty.begin(),qwerty.end(),re[j]) == qwerty.end()){
            if(count(re.begin(),re.end(),re[j]) > 1){    
                sum += count(re.begin(),re.end(),re[j]);
            }
        }
        qwerty.push_back(re[j]);
    }
    return sum;
}
void solve() {
	//implentation goes here
    ll n,k;
    cin>>n>>k;
    map<ll,ll> arr;
    vector<ll> arr2,arr4;
    ll res = 0;
    ll a;
    for(int i = 0 ; i < n ; ++i){
        cin>>a;
        arr4.push_back(a);
        arr[a]+= 1;
        if(find(arr2.begin(),arr2.end(),a) != arr2.end()){
            arr2.clear();
            res += 1;
            
            arr2.push_back(a);
            continue;
        }
        arr2.push_back(a);
    } 
    res += 1;
    //cout<<"res= "<<res<<endl;
    if(res == 0){
        res =1;
    }
    res = res * k;
    vector<ll> arr3;
    ll rep = 0;
    for(auto itr = arr.begin() ; itr != arr.end() ; ++itr){
        if(itr->second > 1){
            rep += itr->second;
        }
    }
    ll mini = rep;
    for(int i = 0 ; i < n - 1 ; ++i){
        arr3.push_back(arr4[0]);
        arr4.erase(arr4.begin() + 0);
        ll e = counting(arr3);
        ll f = counting(arr4);
        //cout<<"e & f == "<<e<<' '<<f<<endl;
        //cout<<e+f<<endl;
        if((e + f) < mini){
            mini = e+f;
        }
    }
    ll onemore = 2*k + mini;
    ll ineff = k + rep;
    //cout<<ineff<<' '<<res<<' '<<onemore<<endl;
    cout<<min(ineff,min(res,onemore))<<endl;
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