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
#include<cmath>
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
    vi v(n) ;
    ll noOfZeros = 0 , noOfOnes = 0 ; 
    rep(i,n){
        cin>>v[i] ; 
        if(v[i]==1){
            noOfOnes++ ; 
        }
        else if(v[i]==0){
            noOfZeros++ ; 
        }
    }
    cout<<noOfOnes*(1LL<<noOfZeros  )<<nl ;
}

int main(){
    fastIO() ; 
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}