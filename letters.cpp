#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;
ll arr[200001];
void solve() {
	ll n,m,i,j,lb,room,a,b;

    while (scanf ("%llu %llu",&n,&m) != EOF)
    {
        memset (arr,0,n);

        for (i=0; i<n; i++)
        {
            scanf ("%llu",&a);

            if (i == 0)
                arr[i] = a;
            else
                arr[i] = arr[i-1]+a;
        }

        for (i=0; i<m; i++)
        {
            scanf ("%llu",&b);

            lb = lower_bound(arr,arr+n,b)-arr;

            if (lb == 0)
                room = b;
            else
                room = b-arr[lb-1];

            printf ("%llu %llu\n",lb+1,room);
        }
        return ;
    }

}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}