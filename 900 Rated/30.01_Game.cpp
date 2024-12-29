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
    string s ; cin>>s ; 
    ll one = 0 , zero = 0 ;
    ll n = s.length() ; 
    for(int i=0 ; i<n ; i++){
        if(s[i]=='0') zero++ ; 
        else one++ ; 
    }
    //Code
    int mn = min(zero,one) ; 
    if(mn%2){
        cout<<"DA"<<nl ; 
    }
    else{
        cout<<"NET"<<nl ; 
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