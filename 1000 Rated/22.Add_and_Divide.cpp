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
    if(a<b) cout<<1<<nl ; 
    else if(a==b) cout<<2<<nl ; 
    else{
        ll ans = 1e9 ; 
        //f(x) = x - b + ln(a)/ln(x) 
        //Upon differentiating x(ln(x))^2 = ln(a)
        //max ln(a) = ln(1e9) --> 20 , Therefore max value of x is 6.29 something , to be on safer side i am taking 7
        for(int i=0 ; i<=7 ; i++){
            ll x = a ; 
            if((b+i)>1){
                ll turns = i ;
                while(x){
                    x = x/(b+i) ; 
                    turns++ ; 
                } 
                ans = min(ans,turns) ; 
            }
        }
        cout<<ans<<nl ; 
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