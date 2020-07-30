#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implentation goes here
    float n;
    char a;
    cin>>n>>a;
    float afloatow;
    if(a == 'A'){
        afloatow = 1700;
    }
    else if(a == 'B'){
        afloatow = 1500;
    }
    else{
        afloatow = 1300;
    }
    float hra = 0.2 * n;
    float da = 0.5 * n;
    float pf = 0.11 * n;
    float totalSalary = n + hra + da + afloatow - pf;
    cout<<llround(totalSalary)<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}