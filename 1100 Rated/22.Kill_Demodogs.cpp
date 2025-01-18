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
 
ll mod_exp(ll base, ll exp, ll mod) {
    ll res = 1;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return res;
}
//Basically the formula for this is ((n*(n+1)*(4n-1)/6)*2022)%MOD 
void solve() {
    ll n; cin >> n;
    ll MOD = 1e9 + 7 ;
    ll inv6 = mod_exp(6, MOD - 2, MOD);
    ll term1 = (n * (n + 1)) % MOD;
    ll term2 = (4 * n - 1 + MOD) % MOD; // Add MOD to ensure no negatives
    ll numerator = ((term1 % MOD) * (term2 % MOD)) % MOD;
    ll result = (((numerator * inv6) % MOD) * 2022) % MOD;
    cout << result << nl;
}


int main(){
    fastIO() ; 
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}