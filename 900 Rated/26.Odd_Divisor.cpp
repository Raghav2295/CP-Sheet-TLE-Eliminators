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
    ll n ; cin>>n ; 
    if(n%2){
        cout<<"YES"<<nl ; 
        return ; 
    }
    if(n==2){
        cout<<"NO"<<nl ; 
        return ; 
    }
    //Code
    while(n%2==0){
        n/=2 ; 
    }
    if(n==1) cout<<"NO"<<nl ;
    else cout<<"YES"<<nl; 

}

int main(){
    fastIO() ; 
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}