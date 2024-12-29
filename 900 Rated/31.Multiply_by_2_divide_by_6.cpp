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
    ll n ; cin>>n ; 
    ll cnt = 0 ; 
    while(n%6==0){
        n = n/6 ; 
        cnt++ ; 
    }
    while(n%3==0){
        n = n/3 ; 
        cnt+=2 ; 
    }
    if(n==1){
        cout<<cnt<<nl ;
        return ; 
    }
    cout<<-1<<nl ; 
}

int main(){
    fastIO() ; 
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}