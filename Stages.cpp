#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implentation goes here
    ll n , m;
    cin>>n>>m;
    string s ;
    cin>>s;
    sort(s.begin(),s.end());
    //cout<<s<<endl;
    if(m == 1){
        cout<<s[0] - 'a' + 1 <<endl;
        return;
    }
    ll temp = m;
    bool flag = true;
    ll sum , res = mxN;
    for(int i = 0 ; i < n ; ++i){
        if(s[i+1] - s[i] < 1){
            continue;
        }
        vector<char> charset;
        charset.push_back(s[i]);
        char d = s[i];
        m = temp;
        sum = s[i] - 'a' + 1;
        //cout<<s[i]<<" ";
        m-=1;
        for(int j = i+1;j<n;++j){
            //cout<<s[j]<<" "<<m<<" ";
            if(m > 0 && find(charset.begin(),charset.end(),s[j]) == charset.end() && s[j] - d >1){
                m-=1;
                
                sum += s[j] - 'a' + 1;
                
                charset.push_back(s[j]);
                d = s[j];
            }
            //cout<<" "<<sum<<" ";
            if(m==0){
                if(sum < res){
                    res = sum;
                }
                flag = false;
                break;
            }
        }
            //cout<<endl;
    }
    if(flag){
        cout<<-1<<endl;
        return;
    }
    cout<<res<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}