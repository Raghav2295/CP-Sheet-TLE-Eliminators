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
    if(n%2==0){
        cout<<2<<nl ; 
        cout<<1<<sp<<n<<endl ; 
        cout<<1<<sp<<n<<endl ; 
    }
    else{
        cout<<4 <<nl ; 
        cout<<1<<sp<<n<<nl ; 
        cout<<1<<sp<<n-1<<nl ;
        cout<<n-1<<sp<<n<<nl ; 
        cout<<n-1<<sp<<n<<nl ;  
    }
}

int main(){
    fastIO() ; 
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}