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
    string str ; 
    cin>>str ; 
    ll n = str.length() ; 
    ll o = 0 , z = 0 ; 
    for(int i=0 ; i<n ; i++){
        if(str[i]=='0'){
            z++ ; 
        }
        else o++ ; 
    }
    int idx = -1 ; 
    for(int i=0 ; i<n ; i++){
        if(str[i]=='0'){
            o-- ; 
            if(o==-1){
                break ; 
            }
            idx = i ; 
        }
        else{
            z-- ; 
            if(z==-1){
                break ;  
            }
            idx = i ;
        }
    }
    cout<<max(z,o)<<nl ; 

}

int main(){
    fastIO() ; 
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}