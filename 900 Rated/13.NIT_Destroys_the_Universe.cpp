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
    vector<int> v(n) ; 
    rep(i,n) cin>>v[i] ;
    //Code
    int intervalSize = 0 ; 
    int noOfIntervals = 0 ; 
    for(int i=0 ; i<n ; i++){
        if(v[i]==0){
            if(intervalSize!=0) noOfIntervals++ ; 
            intervalSize = 0 ; 
        }
        else{
            intervalSize++ ; 
        }
        if(i==n-1){
            if(intervalSize!=0) noOfIntervals++ ; 
        }
    }
    cout<<min(2,noOfIntervals)<<nl ; 
}

int main(){
    fastIO() ; 
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}