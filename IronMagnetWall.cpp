#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array
#define mod 1000000007

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n,k;
    cin>>n>>k;
    k += 1;
    string s;
    cin>>s;
    ll iron = -1 , magnet = -1 ,res = 0 , cs = 0 , i =0;
    while(i < s.size()){
        if(s[i] == 'I' && iron == -1){
            iron = i;
        }
        else if(s[i] == 'M' && magnet == -1){
            magnet = i;
        }
        else if(s[i] == 'X'){
            iron = -1;
            magnet = -1;
            cs = 0;
        }
        else if(s[i] == ':'){
            cs += 1;
        }
        if(iron!=-1 && magnet != -1){
            ll power = k - abs(iron - magnet);
            power -= cs;
            if(power > 0){
                res += 1;
                s.erase(s.begin() + iron);
                s.erase(s.begin() + magnet);
            }
            i = min(iron,magnet );
            iron = -1;
            magnet = -1;
            cs = 0;
            continue;
        }
        i+=1;
    }
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