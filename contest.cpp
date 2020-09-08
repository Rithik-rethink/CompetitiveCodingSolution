#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    string s , e;
    cin>>s>>e;
    string sh, sm ;
    string eh , em ;
    sh.push_back(s[0]);
    sh.push_back(s[1]);
    sm.push_back(s[3]);
    sm.push_back(s[4]);
    eh.push_back(e[0]);
    eh.push_back(e[1]);
    em.push_back(e[3]);
    em.push_back(e[4]);
    //cout<<sh<<":"<<sm<<" and "<<eh<<":"<<em<<endl;
    int SH , SM , EH , EM;
    stringstream w(sh) , x(sm) , y(eh) , z(em);
    w>>SH;
    x>>SM;
    y>>EH;
    z>>EM;
    //cout<<SH<<":"<<SM<<" and "<<EH<<":"<<EM<<endl;
    if(EH > 11){
        EH -= 12;
    }
    if(SH > 11){
        SH -= 12;
    }
    int hours = EH - SH;
    int mins = EM - SM;
    //cout<<hours<<":"<<mins<<endl;
    mins /= 2;
    if(hours%2 == 0)
        hours /= 2;
    else
    {
        if(hours > 1){
            hours -= 2;
        }
        else{
            hours = 0;
        }
        mins +=30;
    }
    
    SH += hours;
    SM += mins;
    if(SH > 23){
        SH -= 24;
    }
    if(SM > 59){
        SM -= 60;
    }
    cout<<SH<<":"<<SM<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}