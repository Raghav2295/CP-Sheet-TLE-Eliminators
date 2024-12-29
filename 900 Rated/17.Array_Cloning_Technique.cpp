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
#define vi vector<int> 
#define vc vector<char> 
#define vll vector<long long> 
#define sp " "
#define nl endl 

void solve(){
    int n ; cin>>n ; 
    vi v(n) ; rep(i,n) cin>>v[i] ; 
    //Code
    unordered_map<int,int> freq ; 
    pair<int,int> mx ; 
    rep(i,n){
        freq[v[i]]++ ; 
        if(freq[v[i]]>mx.second){
            mx.first = v[i] ;
            mx.second = freq[v[i]] ; 
        }
    }
    int a = mx.second ; 
    int cnt = 0 ; 
    while (a<n){
        a = 2*a ; 
        cnt++ ; 
    }
    
    cout<<n-mx.second+cnt<<nl ; 
}

int main(){
    fastIO() ; 
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}