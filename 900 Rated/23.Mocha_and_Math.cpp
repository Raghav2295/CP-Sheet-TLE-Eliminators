#include <iostream>
#include <vector> 
#include<numeric> 
using namespace std; 

void fastIO(){
    ios_base::sync_with_stdio(false) ; 
    cin.tie(NULL) ; 
}

#define ll long long 
#define all(v) v.begin(),v.end() 
#define rep(i,n) for(int i=0 ; i<n ; i++)
#define vi vector<int> 
#define vc vector<char> 
#define vll vector<long long> 
#define sp " "
#define nl endl 
 
void solve(){
    ll n ; cin>>n ; 
    vll v(n) ; rep(i,n) cin>>v[i] ; 
    //Code
    cout<<accumulate(v.begin(),v.end(),v[0],bit_and<ll>())<<nl ;  
}

int main(){
    fastIO() ; 
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}