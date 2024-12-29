#include <iostream>
#include <vector> 
#include <string>
#include <algorithm>
#include <queue>
#include<map>
#include<unordered_map>
#include<set>
#include <stack>
using namespace std; 

#define ll long long 
#define all(v) v.begin(),v.end() 
#define rep(i,n) for(int i=0 ; i<n ; i++)

void solve(){
    int n , k ; 
    cin>>n>>k ; 
    bool flag = false ; 
    rep(i,n){
        int x ; 
        cin>>x ; 
        if(x==k) flag = true ;  
    }
    if(flag) cout<<"YES"<<endl ; 
    else cout<<"NO"<<endl ;
}

int main(){
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}