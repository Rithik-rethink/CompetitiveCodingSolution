#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;
bool IsZ(char ch){
    return(ch == '0');
}
void solve() {
	//implementation goes here
    string n , m;
    cin>>n>>m;
    stringstream e(n) , f(m);
    ll r ,s;
    e>>r;
    f>>s;
    ll res = r + s;
    string re = to_string(res);
    string a = "";
    for(int i = 0 ; i < n.size() ; ++i){
        if(n[i] != '0'){
            a += n[i];
        }
    }
    string b = "";
    for(int i = 0 ; i < m.size() ; ++i){
        if(m[i] != '0'){
            b += m[i];
        }
    }
    string c = "";
    //cout<<"re "<<re<<endl;
    for(int i = 0 ; i < re.size() ; ++i){
        if(re[i] != '0'){
            c += re[i];
        }
    }
    stringstream q(a) , w(b) , t(c);
    ll d , g ;
    t>>res;
    q>>d;
    w>>g;
    //cout<<d<<" "<<g<<" "<<res<<endl;

    if((d+g) == res){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}