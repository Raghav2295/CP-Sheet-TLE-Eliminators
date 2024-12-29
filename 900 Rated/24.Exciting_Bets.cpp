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
    ll a , b ; cin>>a>>b ; 
    //code 
    cout<< abs(a-b) <<sp ; 
    ll hcf = abs(a-b) ; 
    if(hcf==0){
        cout<<0<<nl ;
        return ; 
    }
    ll mx = max(a,b) ; 
    ll rem = mx%hcf ; 
    cout<<min(rem,hcf-rem)<<nl ; 
    
    
}

int main(){
    fastIO() ; 
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}