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
    int n ; cin>>n ; 
    string s ; cin>>s ; 
    //Code
    int con = 1 ; 
    int maxConsecutive = 0 ; 
    for(int i=0 ; i<n ; i++){
        if(s[i]==s[i+1]){
            con++ ; 
        }
        else{
            maxConsecutive = max(maxConsecutive,con) ; 
            con = 1 ; 
        }
    }
    cout<<maxConsecutive+1<<nl ; 
}

int main(){
    fastIO() ; 
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}