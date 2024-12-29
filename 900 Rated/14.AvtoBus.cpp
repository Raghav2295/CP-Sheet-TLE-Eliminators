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
    long long n ; cin>>n ; 
    if(n==4 || n==6){
        cout<<1<<sp<<1<<nl ; 
        return ; 
    }
    if(n<6){
        cout<<-1<<nl ; 
        return ;  
    }
    if(n==10){
        cout<<2<<sp<<2<<nl ; 
        return ; 
    }
    long long mx = n/4 ; 
    if(n%4==1 || n%4==3){
        cout<<-1<<nl ; 
        return ; 
    }
    // if(n%4==2){
    //     mx++ ; 
    // }
    long long mn = n/6 ; 
    if(n%6==2) mn++ ; 
    if(n%6==4) mn++ ; 
    cout<<mn<<sp<<mx<<nl ; 
}

int main(){
    fastIO() ; 
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}