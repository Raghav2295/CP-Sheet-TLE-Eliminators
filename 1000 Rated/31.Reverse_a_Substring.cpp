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
void display(vi& v){
    int n = v.size() ; 
    rep(i,n) cout<<v[i]<<sp;
    cout<<nl ;
}
int main(){
    fastIO() ; 
    ll n ; cin>>n ; 
    string str ; cin>>str ; 
    string demo = str ; 
    sort(all(demo)) ; 
    if(demo==str){
        cout<<"NO"<<nl ; 
        return 0 ;
    }
    else cout<<"YES"<<nl ; 
    for(ll i=0 ; i<n-1 ; i++){
        if(str[i]>str[i+1]){
            cout<<i+1<<sp<<i+2<<nl ;
            return 0; 
        }
    }
}