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
    string a,b;
    cin>>a>>b;
    set<char> arr;
    vector<char> arr1 , arr2;
    for(int i = 0 ; i < n ; ++i ){
        if(a[i] != b[i]){
            arr.insert(a[i]);
            arr.insert(b[i]);
            arr1.push_back(a[i]);
            arr2.push_back(b[i]);
        }
    }
    if(arr.size() == 2){
        for(auto itr = arr.begin() ; itr!= arr.end() ; ++itr){
            if(find(arr1.begin() , arr1.end() , *itr) != arr1.end()){
                if(count(arr1.begin() , arr1.end() , *itr) != 2){
                    cout<<"No"<<endl;
                    return;
                }
            }    
            else if(find(arr2.begin() , arr2.end() , *itr) != arr2.end()){
                if(count(arr2.begin() , arr2.end() , *itr) != 2){
                    cout<<"No"<<endl;
                    return;
                }
            }  
        }
        cout<<"Yes"<<endl;
        return;
    }
    cout<<"No"<<endl;
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