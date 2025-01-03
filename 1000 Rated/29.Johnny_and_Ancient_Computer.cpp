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
    ll a , b ; cin>>a>>b ; 
    //Code
    if(a>b && (a%b!=0 || a%2==1) ){
        cout<<-1<<nl ; 
        return ;
    }
    if(b>a && (b%a!=0 || b%2==1) ){
        cout<<-1<<nl ; 
        return ; 
    }
    ll mn = min(a,b) , mx = max(a,b) ; 
    a = mx , b = mn ; 
    ll op = 0 ; 
    ll t = a/b ; 
    while(t!=1){
        if(t%8==0){
            t = t/8 ; 
            op++ ;
        }
        else if(t%4==0){
            t = t/4 ; 
            op++ ; 
        }
        else if(t%2==0){
            t = t/2 ; 
            op++ ; 
        }
        else{
            cout<<-1<<nl ; 
            return ; 
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