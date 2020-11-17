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
    ll l , r;
    cin>>l>>r;
    ll ans = 0;
    string s = "";
    ll i = l;
    while(i <= r){
        s = to_string(i);
        ll y = 0;
        // cout<<s<<endl;
        string ex = "";
        ll q = 0;
        bool flag = true;
        for(int j = 0 ; j < s.size() ; ++j ){
            ll k = j + 1;
            ll o = s[j] - '0';
            // cout<<k<<" "<<o<<endl;
            if(k % 2 == 0 && o % 2 != 0){
                break;
                flag = false;
            }
            else if(k % 2 != 0 && o % 2 == 0){
                break;
                flag = false;
            }
            q += 1;
            ex += to_string(s[i]);
            y += 1;
        }
        if(y == s.size() && flag){
            // cout<<i<<endl;
            ans += 1;
            if(s[s.size() - 1] - '0' < 9)
                i+=2;
            else{
                i+=1;
            }
        }
        else{
            if(ex == ""){
                stringstream y(s);
                ll temp ;
                y>>temp;
                temp += pow(10,s.size() - 1);
                i = temp;
            }
            else{
                q += 1;
                stringstream y(s);
                ll temp ;
                y>>temp;
                temp += pow(10,s.size() - q);
                s = to_string(temp);
                for(int u = q ; u < s.size() ; ++u ){
                    s[u] = '0';
                }
                stringstream h(s);
                h>>temp;
                i = temp;
            }
        }
    }
    cout<<ans<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	for(int i=1; i<=t; ++i) {
		cout << "Case #" << i << ": ";
		solve();
	}
}