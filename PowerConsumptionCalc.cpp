#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n , p1,p2,p3,t1,t2;
    cin>>n>>p1>>p2>>p3>>t1>>t2;
    ll power = 0 , prev;
    for(int i = 0 ; i < n ; ++i ){
        ll a, b ;
        cin>>a>>b;
        power += abs(a-b) * p1;
        if( i > 0){
            ll prev2 = a - prev;
            ll temp = prev +t1;
            if(temp <= a){
                prev2 -= t1;
                ll temp2 = temp - prev;
                power += (temp2 * p1);
                prev = temp;
                temp = temp + t2;
                if(temp <= a){
                    prev2 -= t2;
                    temp2 = temp - prev; 
                    power += (temp2 * p2);
                    if(prev2 > 0){
                        power += (prev2 * p3);
                    }
                }
                else{
                    power += (p2 * prev2);
                }
            }
            else{
                
                power += (prev2 * p1);
            }
        }
        prev = b;

    }
    cout<<power<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}