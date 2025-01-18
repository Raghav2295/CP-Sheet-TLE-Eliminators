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
//Good Thinking but giving memory limit exceeded error
// void helper(string str , unordered_set<string>& s){
//     int n = str.length() ; 
//     if(n==1){
//         s.insert(str) ; 
//         return ; 
//     }
//     string t = str[0]+str.substr(2,n-2) ;
//     if(s.find(t)==s.end()) helper(t,s) ;
//     if(s.find(str.substr(1,n-1))==s.end()) helper(str.substr(1,n-1),s) ;
//     s.insert(str.substr(1,n-1));
//     s.insert(t) ; 
// }
void solve(){
    int n ; cin>>n ; 
    string str ; cin>>str ; 
    //Code
    //n2 cant run becoz t -> 10^4 and n->10^5 therefore i have to write order of n algorithm 
    // unordered_set<string> s ; 
    // s.insert(str) ; 
    // helper(str,s) ; 
    // cout<<s.size()<<nl ; 
    unordered_set<char> s ; 
    ll ans = 0 ; 
    for(int i=0 ; i<n ; i++){
        if(s.find(str[i])==s.end()){
            s.insert(str[i]) ;
            ans+=(ll)(n-i) ; 
        }
    }
    cout<<ans<<nl ; 
}

int main(){
    fastIO() ; 
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}