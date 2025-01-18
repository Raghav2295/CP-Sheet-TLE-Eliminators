#include <iostream>
#include <vector> 
#include <algorithm>
#include <string>
#include <queue>
#include<map>
#include<unordered_map>
#include<unordered_set>
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
void display(vi& v){
    int n = v.size() ; 
    rep(i,n) cout<<v[i]<<sp;
    cout<<nl ;
}
 
void solve(){
    string str ; cin>>str ; 
    ll o = 0 , mxo = 0 , n = str.length() ; 
    for(ll i=0 ; i<n ; i++){
        if(str[i]=='1'){
            o++ ; 
        }
        else o = 0 ; 
        mxo = max(mxo,o) ; 
    }
    if(mxo==n){
        cout<<n*n<<nl ; 
        return ; 
    }
    if(str[n-1]=='1' && mxo!=n){
        for(ll i=0 ; i<n ; i++){
            if(str[i]=='1') o++ ; 
            else break ; 
        }
    }
    mxo = max(o,mxo) ; 
    if(mxo%2==0){
        cout<<mxo/2*(mxo/2+1)<<nl ; 
    }
    else{
        cout<<(mxo/2+1)*(mxo/2+1)<<nl ; 
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