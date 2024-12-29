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
    int n,x ; 
    cin>>n>>x ; 
    vector<int> a(n) ;
    int mx = 0 ;
    rep(i,n){
        cin>>a[i] ;
        if(i>0){
            mx = max(mx,a[i]-a[i-1]) ; 
        } 
        else{
            mx = max(mx,a[i]-0) ; 
        }
    }
    if(mx==0) mx = n ; 
    cout<<max(mx,2*(x-a[n-1]))<<endl ; 
    
}

int main(){
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}