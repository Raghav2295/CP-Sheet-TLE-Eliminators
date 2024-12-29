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
    long long  n , k ; cin>>n>>k ;
    long long x ; cin>>x ; 
    long long minsum = (k*(k+1))/2 ; 
    long long maxsum = (n*(n+1))/2 - ((n-k+1)*(n-k))/2 ; 
    if(x>=minsum && x<=maxsum) cout<<"YES"<<nl ; 
    else cout<<"NO"<<nl ; 
}

int main(){
    fastIO() ; 
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}