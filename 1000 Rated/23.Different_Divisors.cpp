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
#include<numeric>
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

bool isPrime(ll n){
    if(n==2) return true ; 
    for(ll i=2 ; i*i<=n ; i++){
        if(n%i==0) return false ; 
    }
    return true ; 
}

void solve(){
    ll d ; cin>>d ; 
    ll l1 = 1+d ; 
    ll l2= l1+d ; 
    ll mina = l2+d ; 
    if(mina%l1==0 && mina%l2==0){
        cout<<mina<<nl ; 
        return ; 
    }
    while(true){
        if(isPrime(l1)){
            break ; 
        }
        else{
            l1++ ;
        }
    } 
    l2 = l1+d ; 
    while(true){
        if(isPrime(l2)){
            break ; 
        }
        else{
            l2++ ;
        }
    } 
    cout<<l1*l2<<nl ; 

}

int main(){
    fastIO() ; 
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}