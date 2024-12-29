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
    int k , n ; cin>>n>>k ; 
    vi v(n*k) ; rep(i,n*k) cin>>v[i] ;  
    //Code
    sort(all(v)) ; 
    int midx = n/2 + n%2 ; 
    int a = n - midx + 1 ; 
    ll sum = 0 ; 
    int j = n*k-a ; 
    for(int i=1 ; i<=k ; i++){
        sum+=v[j] ; 
        j-=a ; 
    }
    cout<<sum<<nl ; 
}

int main(){
    fastIO() ; 
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}