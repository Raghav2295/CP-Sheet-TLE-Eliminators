//Learning :- for a>0,b>0 (-a%b= -(a%b) )
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
    ll x0 , n ; cin>>x0>>n ; 
    if(abs(x0%2)==1){
        if(n%4==0){
            cout<<x0<<nl ; 
        }
        else if(n%4==2){
            cout<<x0-1<<nl ; 
        }
        else if(n%4==1){
            cout<<x0+n<<nl ; 
        }
        else{
            cout<<x0-1-n<<nl ; 
        }
    }
    else{
        if(n%4==0){
            cout<<x0<<nl ; 
        }
        else if(n%4==2){
            cout<<x0+1<<nl ; 
        }
        else if(n%4==1){
            cout<<x0-n<<nl ; 
        }
        else{
            cout<<x0+n+1<<nl ; 
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
