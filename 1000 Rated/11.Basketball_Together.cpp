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

int main(){
    fastIO() ; 
    ll n , d ; cin>>n>>d ; 
    vector<ll> v(n) ; rep(i,n) cin>>v[i] ; 
    //Code
    sort(all(v)) ; 
    ll left = -1 ; 
    ll win = 0 ; 
    ll right = n-1 ; 
    while(left<right){
        if(v[right]>d){
            right-- ; 
            win++ ; 
        }
        else{
            ll len = 1 ; 
            while((v[right])*len<=d){
                left++ ; 
                len++ ; 
                if(left>=right) break ; 
            }
            if(left<right){
                win++ ; 
                right-- ; 
            }
        }
    }
    cout<<win<<nl ; 
}