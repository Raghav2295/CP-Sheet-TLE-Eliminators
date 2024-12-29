#include <iostream>
#include <vector> 
#include <algorithm>
#include<climits>
using namespace std; 

#define ll long long 
#define all(v) v.begin(),v.end() 
#define rep(i,n) for(int i=0 ; i<n ; i++)
#define vi vector<int> 
#define vc vector<char> 
#define vll vector<long long> 
#define sp " "

void solve(){
    int n ; 
    cin>>n ; 
    vi a(n) ; 
    rep(i,n) cin>>a[i] ; 
    rep(i,n) cout<<n+1-a[i]<<sp ; 
    cout<<endl ;
}

int main(){
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}