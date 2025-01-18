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
#include<cmath>
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

void solve() {
    ll n, c; 
    cin >> n >> c; 
    vll v(n); 
    ll smn = -1 ; 
    repl(i, n){
        cin>>v[i] ; 
        smn = max(smn,v[i]) ; 
    } 
    
    //Complete mathematical approach using (-b+sqrt(b^2-4ac))/2*a
    // ll sum = 0, sum_sq = 0; 
    // for (ll i = 0; i < n; i++) {
    //     sum += v[i]; 
    //     sum_sq += v[i] * v[i]; 
    // }
    // double temp = sqrt(1.0 * (sum * sum + c * n - sum_sq * n)); 
    // double ans = (temp - sum) / (2.0 * n); 
    // cout << (ll)floor(ans) << nl;

    //Binary Search Approach
    ll low = 0 , high = 1e9 ;
    while(low<=high){
        ll mid = low + (high-low)/2 ; 
        ll area = 0; 
        for(ll i=0 ; i<n ; i++){
            ll len = 2*mid+v[i] ; 
            area+=len*len ; 
            if(area>c) break ; 
        }
        if(area == c) {
            cout<<mid<<nl ; 
            return ; 
        }
        if(area<c) low = mid+1 ; 
        else high = mid-1 ; 
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