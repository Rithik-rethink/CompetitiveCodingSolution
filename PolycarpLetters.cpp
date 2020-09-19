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
    string s;
    cin>>s;
    set<char> st;
    ll maxi = 0;
    ll temp = 0;
    for(int i = 0 ; i < n ; ++i ){
        if(islower(s[i])){
            st.insert(s[i]);
        }
        else{
            temp = st.size();
            if(temp > maxi){
                maxi = temp;
            }
            st.clear();
        }
    }
    temp = st.size();
    if(temp > maxi){
        maxi = temp;
    }
    cout<<maxi<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}

