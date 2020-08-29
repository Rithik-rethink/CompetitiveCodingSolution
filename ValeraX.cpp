#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n ;
    cin>>n;
    bool flag = false;
    ll j = 0;
    ll counts = 0;
    char prev ,prev2;
    bool ok = true;
    for(int i = 0 ;i < n ; ++i) {
        set<char> arr;
        string s; 
        cin>>s;
        arr.insert(s.begin() , s.end());
        if(arr.size() != 2){
            flag = true;
        }

        if(s[j] != s[n - j - 1]){
            flag = true;
        }
        else{
            if(ok){
                prev = s[j];
                prev2 = s[j+1];
                ok = false;
            }
            //cout<<"prev "<<prev2<<endl;
            if(prev == s[j])
                counts += count(s.begin() , s.end() ,s[j] );
                
            if(find(arr.begin(),arr.end() , prev2 ) == arr.end()){
                flag = true;
            }
        }
        //cout<<"count "<<counts<<endl;
        j += 1;
    }
    if(flag || counts != (2*n - 1)) {
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}