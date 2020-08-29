#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n , a ,b;
    cin>>n>>a>>b;
    ll e = b;
    while(b != 0){

        //Reccout<<a<<endl;
        if(e > 0){
            if(a == n){
                a = 1;
            }
            else
                a += 1;

            b -= 1;
        }
        else if(e < 0){
            a-=1;
            if(a == 0){
                a = n;
            }
            b += 1;
        }
    }
    cout<<a<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}