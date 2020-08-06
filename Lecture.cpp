#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implentation goes here
    ll n,m;
    cin>>n>>m;
    vector<string> lang1,lang2;
    for(int i = 0 ; i < m ; ++i){
        string a , b;
        cin>>a>>b;
        lang1.push_back(a);
        lang2.push_back(b);    
    }
    string res = "";
    for(int i = 0 ; i < n ; ++i){
        string c;
        if(res.size() > 0){
            res += ' ';
        }
        cin>>c;
        
        if(find(lang1.begin(),lang1.end(),c) != lang1.end()){
            auto itr = find(lang1.begin(),lang1.end(),c);
            ll j = itr - lang1.begin();
            if(lang1[j].size() <= lang2[j].size()){
                res += lang1[j];
            }
            else{
                res += lang2[j];
            }

        }
        else{
            auto itr = find(lang2.begin(),lang2.end(),c);
            ll j = itr - lang2.begin();
            if(lang1[j].size() <= lang2[j].size()){
                res += lang1[j];
            }
            else{
                res += lang2[j];
            }
        }
    }
    cout<<res<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}