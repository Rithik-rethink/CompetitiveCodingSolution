#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n;
    cin>>n;
    string s ;
    cin>>s;
    ll out = 0, in = 0;
    bool flag = false , flag2;
    ll temp = 0 , temp2 = 0;
    for(int i = 0 ; i < n ; ++i ){
        if(s[i] == '('){
            flag = true;
            flag2 = true;
            continue;
        }
        if(s[i] == ')'){
            flag = false;
            temp = 0;
            continue;
        }
        if(flag){
            if(isalpha(s[i]) && flag2){
                in += 1;
                flag2 = false;
            }
            else if(s[i] == '_'){
                flag2 = true;
            }
        }
        else{
            if(isalpha(s[i])){
                temp += 1;
                if(temp > out){
                    out = temp;
                }
            }
            else{
                temp = 0;
            }

        }
    }
    cout<<out<<" "<<in<<endl;
}   

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}