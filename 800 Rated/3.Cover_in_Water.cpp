#include <iostream>
#include <vector> 
#include <string>
#include <algorithm>
#include <queue>
#include <stack>
using namespace std; 

#define ll long long 
#define all(v) v.begin(),v.end() 
#define rep(i,n) for(int i=0 ; i<n ; i++)

void solve(){
    int n ; 
    cin>>n ; 
    string s ; 
    cin>>s ; 
    int i=0 ; 
    int ans = 0 ; 
    bool flag = false ; 
    while(i<n){
        int count = 0 ; 
        while(s[i]=='.' && i<n){
            count++ ; 
            i++ ; 
        }
        if(count<=2) ans+=count ; 
        else{
            flag = true ; 
            break ; 
        } 
        i++ ; 
    }
    if(flag) cout<<2<<endl ; 
    else cout<<ans<<endl ; 
}

int main(){
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}