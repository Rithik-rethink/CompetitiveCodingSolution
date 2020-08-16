#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    char ch;
    cin>>ch;
    if(isalpha(ch)){
        if(isupper(ch)){
            cout<<1<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    else{
        cout<<-1<<endl;
    }
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}