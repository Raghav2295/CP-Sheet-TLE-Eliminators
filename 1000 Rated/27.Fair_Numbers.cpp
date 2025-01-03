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

bool checkFiar(ll n){
    string str = to_string(n) ; 
    int m = str.length() ; 
    for(int i=0 ; i<m ; i++){
        if(str[i]=='0') continue; 
        if(n%(str[i]-'0')!=0){
            return false ; 
        }
    }
    return true ; 
}

void solve(){
    ll n ; cin>>n ; 
    string str = to_string(n) ;
    int m = str.length() ;
    //Code
    ll superFair = 0 ; 
    if(n%2520!=0){
        superFair = (n/2520+1)*2520 ; 
    }
    else{
        cout<<n<<nl ; 
        return ; 
    }
    for(ll i=n ; i<=superFair ; i++){
        if(checkFiar(i)){
            cout<<i<<nl ; 
            return ; 
        }
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