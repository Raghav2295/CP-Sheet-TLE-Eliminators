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

void solve(){
    int n , r , b ; cin>>n>>r>>b ; 
    int t = r/(b+1) ; 
    int rem = r%(b+1) ; 
    string ans ; 
    for(int i=0 ; i<b ; i++){
        for(int j=0 ; j<t ; j++){
            ans.push_back('R') ; 
        }
        if(rem){
            ans.push_back('R') ;
            rem-- ; 
        }
        ans.push_back('B') ; 
    }
    for(int i=0 ; i<t ; i++) ans.push_back('R') ; 
    cout<<ans<<nl ; 
}

int main(){
    fastIO() ; 
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}