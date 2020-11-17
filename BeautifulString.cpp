#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array
#define mod 1000000007

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    string s;
    cin>>s;
    for(int i = 0 ; i < s.size() ; ++i ){
        if(s[i] == s[i+1] && s[i] != '?'){
            cout<<-1<<endl;
            return;
        }
        if(s[i] == '?'){
            if(s[i-1] == 'a'){
                s[i] = 'b';
                if(s[i+1] == 'b'){
                    s[i] = 'c';
                }
            }
            else if(s[i-1]=='b'){
                s[i] = 'c';
                if(s[i+1]=='c'){
                    s[i] = 'a';
                }
            }
            else if(s[i-1]=='c'){
                s[i] = 'a';
                if(s[i+1]=='a'){
                    s[i] = 'b';
                }
            }
            else if(s[i+1]=='a'){
                s[i] = 'b';
            }
            else if(s[i+1] =='b'){
                s[i] = 'c';
            }
            else if(s[i+1]=='c'){
                s[i] = 'a';
            }
            else{
                s[i] = 'a';
            }
        }
    }
    cout<<s<<endl;
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