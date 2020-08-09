#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implentation goes here
    string s , p;
    cin>>s;
    cin>>p;
    string re = s;
    ll r = s.size();
    for(int i = 0 ; i < p.size() ; ++i){
        auto itr = find(s.begin(),s.end(),p[i]);
        s.erase(itr);
    }
    sort(s.begin(),s.end());
    string res = "";
    //cout<<s.size()<<endl;
    for(int i = 0 ; i < s.size() ; ++i){
        //cout<<res<<endl;
        if(int(s[i]) >int(p[0])){
            res += p;
            res += s.substr(i,s.size()-1); 
            break;
        }
        res += s[i];
    }
    //cout<<res.size()<<" and "<<r<<endl;
    if(res.size() != r){
        res = res + p;
    }
    //cout<<"res "<<res<<endl;
    string res1 = "";
    bool flag = true;
    ll f = count(s.begin(),s.end(),p[0]);
    for(int i = 0 ; i < s.size() ; ++i){
        if(int(s[i]) >= int(p[0]) && flag){
            res1 += p;
            flag = false;
        }
        res1 += s[i];
    }
    if(res1.size() < r){
        res1 += p;
    }
    //cout<<"res 1 = "<<res1<<endl;
    cout<<min(res,res1)<<endl;

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