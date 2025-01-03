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
#include<cmath>
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
    ll n , p ; cin>>n>>p ; 
    vll a(n) ; rep(i,n) cin>>a[i] ; //maxPeople
    vll b(n) ; rep(i,n) cin>>b[i] ; //price
    //Code
    vector< pair<ll,ll> > priceForEach_maxPeople ; 
    priceForEach_maxPeople.push_back(make_pair(p,n+1)) ; 
    for(int i=0 ; i<n ; i++){
        pair<ll,ll> pi ; 
        pi.first = b[i] ; 
        pi.second = a[i] ; 
        priceForEach_maxPeople.push_back(pi) ; 
    }
    sort(priceForEach_maxPeople.begin(),priceForEach_maxPeople.end()) ; 
    int people = 1 ; 
    ll totalCost = p ;
    for(int i=0 ; i<n ; i++){
        if(people>=n) break ; 
        pair<ll,ll> pi = priceForEach_maxPeople[i] ; 
        ll price = pi.first ; 
        ll maxPeople = pi.second ;
        totalCost += price*(min(maxPeople,n-people)) ; 
        people += min(maxPeople,n-people) ; 
    }
    cout<<totalCost<<nl ;
}

int main(){
    fastIO() ; 
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}