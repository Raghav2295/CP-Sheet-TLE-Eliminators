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

void solve(){
    int n ; 
    cin>>n ; 
    vector<int> v(n) ; 
    bool flag = false ; 
    cin>>v[0] ; 
    int ele = v[0] ; 
    for(int i=1 ; i<n ; i++){
        cin>>v[i] ; 
        if(!flag && v[i]!=ele){
            flag = true ; 
        }
    }
    if(!flag){
        cout<<"NO"<<endl ; 
        return ; 
    }
    else cout<<"YES"<<endl ; 
    sort(v.rbegin(),v.rend()) ; 
    swap(v[1],v[n-1]) ; 
    for(int i=0 ; i<n ; i++){
        cout<<v[i]<<sp;
    }
    cout<<endl ; 
}

int main(){
    fastIO() ; 
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}