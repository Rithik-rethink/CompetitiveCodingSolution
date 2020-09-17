#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    string s;
    cin>>s;
    ll count1 = 0 ,count2 = 0 , count3 = 0;
    for(int i = 0 ; i < s.size() ; ++i ){
        if(isdigit(s[i])){
            count1 += 1;
        }
        else if(isupper(s[i])){
            count2 += 1;
        }
        else if(islower(s[i])){
            count3 += 1;
        }

    }
    for(int i = 0 ; i < s.size() - 2 ; ++i ){
        cout<<s[i];
    }
    if(count1 > 0 && count2 > 0 && count3 > 0){
        cout<<s[s.size() - 2]<<s[s.size() - 1]<<endl;
        return;
    }
    if(count1 > 0 && count2 == 0 && count3 == 0){
        cout<<'A'<<'a'<<endl;
        return;
    }
    else if(count1 == 0 && count2 > 0 && count3 ==0){
        cout<<1<<'a'<<endl;
        return;
    }
    else if(count1 == 0 && count2 == 0 && count3 > 0){
        cout<<1<<'A'<<endl;
        return;
    }
    else if(count1 == 0 && count2 >0 && count3 > 0){
        if(count2 <= count3){
            if(islower(s[s.size() -2])){
                cout<<1;
                cout<<s[s.size() - 1]<<endl;
                return;
            }
            else{
                cout<<s[s.size() - 2];
                cout<<1<<endl;
                return;
            }
            
        }
        else if(count3 < count2){
            if(isupper(s[s.size() -2])){
                cout<<1;
                cout<<s[s.size() - 1]<<endl;
                return;
            }
            else{
                cout<<s[s.size() - 2];
                cout<<1<<endl;
                return;
            }
        }
    }
    else if(count1 > 0 && count2 > 0 && count3 == 0){
        if(count1 <= count2){
            if(isupper(s[s.size() -2])){
                cout<<'a';
                cout<<s[s.size() - 1]<<endl;
                return;
            }
            else{
                cout<<s[s.size() - 2];
                cout<<'a'<<endl;
                return;
            }
            
        }
        else if(count2 < count1){
            if(isdigit(s[s.size() -2])){
                cout<<'a';
                cout<<s[s.size() - 1]<<endl;
                return;
            }
            else{
                cout<<s[s.size() - 2];
                cout<<'a'<<endl;
                return;
            }
        }
    }
    else if(count1 > 0 && count2 == 0 && count3 > 0){
        if(count1 <= count3){
            if(islower(s[s.size() -2])){
                cout<<'A';
                cout<<s[s.size() - 1]<<endl;
                return;
            }
            else{
                cout<<s[s.size() - 2];
                cout<<'A'<<endl;
                return;
            }
            
        }
        else if(count3 < count1){
            if(isdigit(s[s.size() -2])){
                cout<<'A';
                cout<<s[s.size() - 1]<<endl;
                return;
            }
            else{
                cout<<s[s.size() - 2];
                cout<<'A'<<endl;
                return;
            }
        }
    }
    
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