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
 
#define ll long long 
#define all(v) v.begin(),v.end() 
#define rep(i,n) for(int i=0 ; i<n ; i++)
#define repl(i,n) for(ll i=0 ; i<n ; i++)
#define vi vector<int> 
#define vc vector<char> 
#define vll vector<long long> 
#define sp " "
#define nl endl 

ll gcd(ll a, ll b){ if (b == 0)return a ; return gcd(b, a % b);} 
void fastIO(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
void display(vi& v){ int n = v.size() ; rep(i,n) cout<<v[i]<<sp;cout<<nl ;}
void displayll(vll& v){ll n=v.size();repl(i,n)cout<<v[i]<<sp;cout<<nl;}
 
bool solve(){
    ll n , k ; cin>>n>>k ; 
    vll v(n) ; repl(i,n) cin>>v[i] ; 
    //Code
    sort(all(v)) ; 
    ll i=0 , j=1 ; 
    while(i<n && j<n){
        if(v[i]+k == v[j]) return true ; 
        else if(v[i]+k < v[j]) i++ ; 
        else j++ ;  
    }
    return false ; 
}

int main(){
    fastIO() ; 
    int t ; 
    cin>>t ; 
    while(t--){
        bool flag = solve() ;
        flag ? cout<<"YES"<<nl : cout<<"NO"<<nl ; 
    }
}