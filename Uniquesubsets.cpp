#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void magic(string op , string ip , set<string> &sett){
    if(ip == ""){
        sett.insert(op);    
        return ;
    }
    string op1 = op;
    string op2 = op;
    op2.push_back(ip[0]);
    //cout<<op1<<" "<<op2<<endl;
    ip.erase(ip.begin() + 0);
    magic(op1 , ip , sett);
    magic(op2 , ip , sett);
    
    return ;

}

void solve() {
	//implementation goes here
    string s;
    cin>>s;
    string op = "";
    set<string> sett;
    magic(op,s,sett);
    for(auto itr = sett.begin() ; itr != sett.end() ; ++itr){
        cout<<*itr<<endl;
    }    
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}