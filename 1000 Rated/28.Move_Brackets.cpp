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
    int n ; cin>>n ; 
    string str ; cin>>str ; 
    //Code
    int noOfOpen = 0 ; 
    int noOfClose = 0 ; 
    int op = 0 ; 
    for(int i=0 ; i<n ; i++){
        if(str[i]=='(') noOfOpen++ ; 
        else{
            if(noOfOpen==0){
                op++ ; 
            }
            else noOfOpen-- ; 
        }
    }
    cout<<op<<nl ; 
}

int main(){
    fastIO() ; 
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}