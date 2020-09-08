#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n , m , x , y , a;
    cin>>n>>m>>x>>y>>a;
    if( a == 0){
        cout<<n*m<<endl;
        return;
    }
    ll r = n;
    ll s = m;
    vector<ll> arr;
    if(x <= y){
        //cout<<"a";
        if(x <= n - a){
            n -= a;
        }
        else{
            a = abs(a - abs( n - x ));
            //cout<<a<<endl;
            if( y <= m - a){
                m -= a;
                arr.push_back(x*m);
            }
            else{
                arr.push_back(x*y);
            }
        }
    }
    else if( x > y){
        //cout<<'b';
        if(y <= m - a){
            m -= a;
        }
        else{
            a = abs(a - abs( m - y ));
            if( x <= n - a){
                n -= a;
                arr.push_back(n*y);
            }
            else{
                arr.push_back(x*y);
            }
        }   
    }
    arr.push_back(n*m);
    n = r;
    m = s;
    if(n <= m){
        if(x <= n - a){
            n -= a;
        }
        else{
            a = abs(a - abs( n - x ));
            //cout<<a<<endl;
            if( y <= m - a){
                m -= a;
                arr.push_back(x*m);
            }
            else{
                arr.push_back(x*y);
            }
            
        }
        //cout<<n<<" "<<m<<endl;
    }
    else if( n > m){
        if(y <= m - a){
            m -= a;
        }
        else{
            a = abs(a - abs( m - y ));
            if( x <= n - a){
                n -= a;
                arr.push_back(n*y);
            }
            else{
                arr.push_back(x*y);
            }
        }
    }
    //cout<<n<<" "<<m<<endl;
    arr.push_back(n * m);
    
    cout<<*min_element(arr.begin() , arr.end())<<endl;

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