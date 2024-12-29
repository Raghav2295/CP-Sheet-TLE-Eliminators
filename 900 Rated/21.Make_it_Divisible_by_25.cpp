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
    ll n ; cin>>n ; 
    string s = to_string(n) ; 
    int m = s.length() ; 
    stack<int> st ; 
    int noOfZeros = 0 ; 
    int idx00  = -1 ; 
    for(int i=m-1 ; i>=0 ; i--){
        if(s[i]=='0'){
            noOfZeros++ ; 
        }
        if(noOfZeros==2){
            idx00 = i ; 
            break ; 
        }
    }
    bool is5Found = false ; 
    int idx25 = -1 ; 
    for(int i=m-1 ; i>=0 ; i--){
        if(s[i]=='5' && is5Found==false){
            is5Found = true ; 
        }
        if(is5Found && s[i]=='2'){
            idx25 = i ; 
            break ;
        }
    }
    is5Found = false ; 
    int idx75 = -1 ; 
    for(int i=m-1 ; i>=0 ; i--){
        if(s[i]=='5' && is5Found==false){
            is5Found = true ; 
        }
        if(is5Found && s[i]=='7'){
            idx75 = i ; 
            break ;
        }
    }
    bool is0Found = false ; 
    int idx50 = -1 ; 
    for(int i=m-1 ; i>=0 ; i--){
        if(s[i]=='0' && is0Found==false){
            is0Found = true ;
        }
        if(is0Found && s[i]=='5'){
            idx50 = i ; 
            break ; 
        }
    }
    int op00 = 0 , op25 = 0 , op50 = 0 , op75 = 0 ; 
    int mnOp = INT_MAX ; 
    if(idx00!=-1){
        op00 = m-idx00-2 ;
        mnOp = min(mnOp,op00) ;  
    }
    if(idx25!=-1){
        op25 = m-idx25 - 2 ; 
        mnOp = min(mnOp,op25) ;  
    }
    if(idx75!=-1){
        op75 = m-idx75 - 2 ; 
        mnOp = min(mnOp,op75) ;
    }
    if(idx50!=-1){
        op50 = m-idx50 - 2 ; 
        mnOp = min(mnOp,op50) ;
    }
    cout<<mnOp<<nl ; 
}

int main(){
    fastIO() ; 
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}