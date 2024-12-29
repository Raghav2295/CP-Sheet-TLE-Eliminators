#include <iostream>
#include <vector>
#include <algorithm>
#include<climits>
using namespace std; 

#define ll long long 
#define all(v) v.begin(),v.end() 
#define rep(i,n) for(int i=0 ; i<n ; i++)
#define vi vector<int> 
#define vc vector<char> 
#define vll vector<long long> 
#define sp " "

void fastIO(){
    ios_base::sync_with_stdio(false) ; 
    cin.tie(NULL) ; 
}
void solve(){
    ll n,k; 
    cin>>n>>k; 
    if(n%2==0) cout<<"YES"<<endl ; 
    else{
        if(k%2!=0){
            cout<<"YES"<<endl ; 
        }
        else cout<<"NO"<<endl ; 
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