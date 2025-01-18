#include <iostream>
#include <vector> 
#include <algorithm>
#include <string>
#include <queue>
#include<map>
#include<unordered_map>
#include<unordered_set>
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
void display(vi& v){
    int n = v.size() ; 
    rep(i,n) cout<<v[i]<<sp;
    cout<<nl ;
}

//Advance version of Kadane's Algorithm
void solve(){
    ll n ; cin>>n ; 
    vll v(n) ; repl(i,n) cin>>v[i] ; 
    //Code
    ll mx = v[0] ; 
    ll curr_sum = v[0] ; 
    bool parity_odd = abs(v[0])%2 ; 
    for(ll i=1 ; i<n ; i++){
        if(curr_sum<0) curr_sum = 0 ; 
        if(v[i]%2==0 && parity_odd){
            curr_sum+=v[i] ; 
            mx = max(mx,curr_sum) ; 
            if(curr_sum<0){
                curr_sum = 0 ;
            }
            parity_odd = !parity_odd ; 
        }
        else if(abs(v[i])%2==1 && !parity_odd){
            curr_sum+=v[i] ; 
            mx = max(mx,curr_sum) ; 
            if(curr_sum<0){
                curr_sum = 0; 
            }
            parity_odd = !parity_odd ; 
        }
        else{
            curr_sum = v[i] ; 
            mx = max(mx,curr_sum) ; 
        }
    }
    cout<<mx<<nl ; 
}

int main(){
    fastIO() ; 
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}