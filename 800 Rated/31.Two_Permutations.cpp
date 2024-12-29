#include <iostream>
#include <vector> 
#include <algorithm>
#include <string>
#include <queue>
#include<map>
#include<unordered_map>
#include<set>
#include <stack>
#include<climits>
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
    int n , a , b ; 
    cin>>n>>a>>b ; 
    if(a==b && b==n){
        cout<<"YES"<<nl ;
        return ; 
    }
    else if(a+b>=n){
        cout<<"NO"<<endl ; 
        return ; 
    }
    else if(n-a-b==1){
        cout<<"NO"<<nl ; 
        return ; 
    }
    else{
        cout<<"YES"<<nl ; 
        return ; 
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