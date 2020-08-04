#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	ll n;
    cin>>n;
    ll count = 0,x;
    

    for(int i = 0 ; i < n ; ++i){
        string s ;
        cin>>s;
        //cout<<s<<endl;
        if(isalpha(s[0])){
            if(s == "ABSINTH" ||s == "BEER" ||s == "BRANDY" ||s == "CHAMPAGNE" ||s == "GIN" ||s == "RUM" ||s == "SAKE" ||s == "TEQUILA" ||s == "VODKA" ||s == "WHISKEY" ||s == "WINE" )
                count+=1;
        }
        else{
            x = 0; 
            stringstream a(s); 
            a >> x; 
            if(x < 18){
                count+=1;
            }
        }
        //cout<<count<<endl;
    }
    cout<<count<<endl;
    
    
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}