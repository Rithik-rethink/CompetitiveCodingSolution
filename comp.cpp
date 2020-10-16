#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    string a , b;
    cin>>a>>b;
    a.erase(0, a.find_first_not_of('0'));
    b.erase(0, b.find_first_not_of('0'));
    // cout<<a.size()<<" "<<b.size()<<endl;
    if(a.size() < b.size()){
        cout<<"<"<<endl;
        return;
    }
    else if(a.size()>b.size()){
        cout<<">"<<endl;
        return;
    }
    if(a > b){
        cout<<">"<<endl;
        return;
    }
    else if(a < b){
        cout<<"<"<<endl;
        return;
    }
    cout<<"="<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}