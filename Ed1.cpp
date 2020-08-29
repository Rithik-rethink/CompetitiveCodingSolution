#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n , m , t1, t2 , e , f;
    cin>>n>>m>>t1>>t2>>e>>f;
    ll strength = n + m;
    ll totalweight = (t1 * e) + (t2 * f);
    while(totalweight > strength) {
        
        if(f >= e){
            if(totalweight % e == 0){
                if(t1 > 0){
                    t1 -= 1;
                    totalweight -= e;
                }
                else if(t2 > 0){
                    t2 -= 1;
                    totalweight -= f;
                }
                else{
                    break;
                }
            }
            else{
                if(t2 > 0){
                    t2 -= 1;
                    totalweight -= f;
                }
                else if(t1 > 0){
                    t1 -= 1;
                    totalweight -= e;
                }
                else{
                    break;
                }
            }
            
        }
        else if(e > f){
            if(totalweight % f == 0){
                if(t2 > 0){
                    t2 -= 1;
                    totalweight -= f;
                }
                else if(t1 > 0){
                    t1 -= 1;
                    totalweight -= e;
                }
                else{
                    break;
                }
            }
            else{
                if(t1 > 0){
                    t1 -= 1;
                    totalweight -= e;
                }
                else if(t2 > 0){
                    t2 -= 1;
                    totalweight -= f;
                }
                else{
                    break;
                }
            }
        }
        else{
            break;
        }
    }
    ll toys = 0;
    //cout<<totalweight<<" "<<strength<<" "<<t1<<" "<<t2<<endl;
    if(strength >= totalweight){
        toys = t1 + t2;
    }
    cout<<toys<<endl;
    
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