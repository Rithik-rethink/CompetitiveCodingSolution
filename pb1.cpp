#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implentation goes here
    ll n ;
    cin>>n;
        string s;
        cin>>s;
        if(s.size() == 1){
            cout<<s<<endl;
            return;
        }
        string r = s;
        sort(r.begin(),r.end());
        char ch = r[s.size() - 1];
        int itr = s.find(ch);
        s.erase(s.begin() + itr);
        cout<<s<<endl;

}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}