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
    n = 2*n;
    vector<ll> arr;
    set<ll> sett;
    for(int i = 0 ; i < n ; ++i ){
        ll a;
        cin>>a;
        arr.push_back(a);
        sett.insert(a);
    }
    if(sett.size() == 1){
        cout<<-1<<endl;
        return;
    }
    ll res2 = accumulate(arr.begin() , arr.begin() + n/2 , 0);
    ll res3 = accumulate(arr.begin() + n/2 , arr.end() , 0);
    if(res2 != res3){
        string s = "";
        for(int j = 0 ; j < n ;++j){
            s += to_string(arr[j]);
            s += " ";
        }
        s.pop_back();
        cout<<s<<endl;
        return;
    }
    for(int i = 0 ; i < n ; ++i){
        ll temp = arr[0];
        arr.erase(arr.begin() + 0);
        arr.push_back(temp);
        ll res = accumulate(arr.begin() , arr.begin() + n/2 , 0);
        ll res1 = accumulate(arr.begin() + n/2 , arr.end() , 0);
        //cout<<res<<" "<<res1<<endl;
        if(res != res1){
            string s = "";
            for(int j = 0 ; j < n ;++j){
                s += to_string(arr[j]);
                s += " ";
            }
            s.pop_back();
            cout<<s<<endl;
            return;
        }
    }
    sort(arr.begin() , arr.end());
    string s = "";
    for(int j = 0 ; j < n ;++j){
        s += to_string(arr[j]);
        s += " ";
    }
    s.pop_back();
    cout<<s<<endl;

}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}