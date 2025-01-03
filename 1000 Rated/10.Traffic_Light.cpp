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
#define repl(i,n) for(ll i=0 ; i<n ; i++)
#define vi vector<int> 
#define vc vector<char> 
#define vll vector<long long> 
#define sp " "
#define nl endl 
 
void solve(){
    ll n ; cin>>n ; 
    char ch ; cin>>ch ; 
    string str ; cin>>str ; 
    str+=str ; 
    if(ch=='g'){
        cout<<0<<nl ; 
        return ; 
    }
    char prev = ch ; 
    ll maxLen = 0 ; 
    ll len = 0 ; 
    bool startCount = false ; 
    for(ll i=0 ; i < 2*n ; i++){
        if(str[i]=='g'){
            maxLen = max(maxLen,len) ; 
            len = 0 ; 
            startCount = false ;
        }
        else if(str[i]==ch && i<n){
            startCount = true ; 
        }
        if(startCount) len++ ; 
    }
    cout<<maxLen<<nl ;
}

int main(){
    fastIO() ; 
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}