#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll  n;
    cin>>n;
    if(n < 3){
        string s(n , 'a');
        cout<<s<<endl;
        return;
    }
    string one = "baa";
    string two = "bba";
    ll end = n / 3;
    string res = "";
    bool flag = true;
    ll count1 = 0, count2 = 0;
    for(int i = 1 ; i<= end ; ++i){
        if(count1 < 2){
            if(flag){
                res += one;
                flag = false;
            }
            else{
                res += two;
                flag = true;
            }
            count1 += 1;
        }
        else{
            if(flag){
                res += "abb";
                flag = false;
            }
            else{
                res += "aab";
                flag = true;
            }
            count2 += 1;
            if(count2 == 2){
                count1 = 0;
                count2 = 0;
            }
        }
    }
    end *= 3;
    
    if(res[res.size() - 1] == 'b' && res[res.size() - 2] == 'b'){
        string res2(abs(n - end) , 'a');
        res += res2;
    }
    else if(res[res.size() - 1] == 'a' && res[res.size() - 2] == 'a'){
        string res2(abs(n - end) , 'b');
        res += res2;
    }
    else if(res[res.size() - 1] == 'b' && res[res.size() - 2] == 'a'){
        if(abs(n-end) > 0){
            res += "b";
        }
        if(abs(n-end) == 2){
            res += "a";
        }
    }
    else if(res[res.size() - 1] == 'a' && res[res.size() - 2] == 'b'){
        //cout<<" "<<res<<endl;
        if(abs(n-end) >0){
            res += "a";
        }
        if(abs(n-end) == 2){
            res += "b";
        }
    }
    cout<<res<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}