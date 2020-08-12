#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n,m,x,y;
    cin>>n>>m>>x>>y;
    ll count = 0,colcount = 0;
    ll r =x , s = y;
    bool flag = true;
    cout<<x<<" "<<y<<endl;
    count += 1;
    ll i;
    for(i = 1 ; i <= m ; ++i){
        if( i != s){
            cout<<x<<" "<<i<<endl;
            count += 1;
        }
    }
    if(x < n){
        x += 1;
    }
    else{
        x = 1;
    }
    y = i - 1;
    //cout<<x<<" and "<<y<<endl;
    
    while(count < n*m){
        cout<<x<<" "<<y<<endl;
        colcount += 1;
        count += 1;
        if(y == m && colcount == m){
            if(x < n)
                x += 1;
            else{
                x = 1;
            }
            colcount = 0;
            if(count < n*m){
                cout<<x<<" "<<y<<endl;
                count += 1;
            }
            colcount += 1;
            flag = false;
        }
        else if( y == 1 && colcount == m){
            if(x < n)
                x += 1;
            else{
                x = 1;
                
            }
            colcount = 0;
            if(count < n*m){
                cout<<x<<" "<<y<<endl;
                count += 1;
            }
            colcount += 1;
            flag = true;
        }
        if(y == m && colcount != m){
            flag = false;
        }
        else if(y == 1 && colcount != m){
            flag = true;
        }
        if(flag){
            y+=1;

        }
        else
            y -= 1;

    }
    
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}