#include <iostream>
#include <vector> 
#include <algorithm>
#include <string>
#include <queue>
#include<map>
#include<unordered_map>
#include<set>
#include <stack>
#include<deque>
#include<climits>
using namespace std; 

void fastIO(){
    ios_base::sync_with_stdio(false) ; 
    cin.tie(NULL) ; 
}

#define ll long long 
#define all(v) v.begin(),v.end() 
#define rep(i,n) for(int i=0 ; i<n ; i++)
#define repl(i,n) for(ll i=0 ; i<n ; i++)
#define vi vector<int> 
#define vc vector<char> 
#define vll vector<long long> 
#define sp " "
#define nl endl 

void solve(){
    ll a , b , n ; 
    cin>>a>>b>>n ; 
    vll v(n) ; 
    for(ll i=0 ; i<n ; i++){
        cin>>v[i] ; 
    }
    //Code
    if(n==0){
        cout<<b<<nl ; 
        return ; 
    }
    sort(v.begin(),v.end()) ; 
    ll i = 0 ; 
    ll time = 1 ; 
    while(b>0){
        while(i<n && b+v[i]<=a){
            b+=v[i] ; 
            i++ ; 
        }
        ll diff = b-1 ; 
        b=1 ; 
        time+=diff ; 
        if(b==1 && i<n){
            b = min(b+v[i],a) ; 
            i++ ; 
        }
        else b-- ;                                   
    }                                   
    cout<<time<<nl ;                                    
}                                   
                                   
int main(){                                   
    fastIO() ;                                    
    int t ;                                    
    cin>>t ;                                    
    while(t--){                                   
        solve() ;                                   
    }                                   
}                                   