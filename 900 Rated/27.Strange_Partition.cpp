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
#define vi vector<int> 
#define vc vector<char> 
#define vll vector<long long> 
#define sp " "
#define nl endl 
 
void solve(){
    ll n , x ; cin>>n>>x ; 
    ll sum = 0 ; 
    vector<ll> v(n) ; 
    ll mx = 0 ; 
    rep(i,n){
        cin>>v[i] ; 
        sum+=v[i] ;
        mx += v[i]/x ;
        if(v[i]%x!=0){
            mx++ ; 
        } 
    }
    //Code
    ll mn = sum/x ;       
    if(sum%x!=0) mn++ ; 
    cout<<mn<<sp<<mx<<nl ; 

}

int main(){
    fastIO() ; 
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}