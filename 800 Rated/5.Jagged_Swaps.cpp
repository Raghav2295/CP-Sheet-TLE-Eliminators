#include <iostream>
#include <vector> 
#include <string>
#include <algorithm>
#include <queue>
#include<map>
#include<set>
#include <stack>
using namespace std; 

#define ll long long 
#define all(v) v.begin(),v.end() 
#define rep(i,n) for(int i=0 ; i<n ; i++)

void solve(){
    int n ; 
    cin>>n ; 
    vector<int> v(n) ; 
    rep(i,n) cin>>v[i] ; 
    if(v[0]!=1) cout<<"NO"<<endl ;  
    else cout<<"YES"<<endl ; 
}

int main(){
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}