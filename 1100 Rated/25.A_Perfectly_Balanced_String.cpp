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
    string str ; cin>>str ; 
    ll n = str.length() ; 
    unordered_map< char,ll> m ; 
    repl(i,n){
        m[str[i]]++ ;
    } 
    if(m.size()==1 || m.size()==n) return true ;
    unordered_map<char,vll> m2 ; 
    repl(i,n){
        m2[str[i]].push_back(i) ; 
    }
    unordered_map<char,vll> :: iterator it ; 
    for(it=m2.begin() ; it!=m2.end() ;it++){
        for(ll i=0 ; i<it->second.size()-1 ; i++){
            if(it->second[i+1]-it->second[i] < m.size()) return false ; 
        }
    }
    return true ; 
}

int main(){
    fastIO() ; 
    int t ; 
    cin>>t ; 
    while(t--){
        bool flag = solve() ;
        flag ? cout<<"YES" : cout<<"NO" ;
        cout<<nl ; 
    }
}