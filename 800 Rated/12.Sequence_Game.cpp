#include <iostream>
#include <vector> 
#include <string>
#include <algorithm>
#include <queue>
#include<map>
#include<unordered_map>
#include<set>
#include <stack>
using namespace std; 

#define ll long long 
#define all(v) v.begin(),v.end() 
#define rep(i,n) for(int i=0 ; i<n ; i++)
#define vi vector<int> 
#define vc vector<char> 
#define vll vector<long long> 

//condition a[i-1] <= a[i]
void solve(){
    int n ; 
    cin>>n; 
    vector<int> b(n) ; 
    rep(i,n) cin>>b[i] ; 
    vector<int> a ; 
    a.push_back(b[0]) ; 
    for(int i=1 ; i<n ; i++){
        if(b[i-1]>b[i]){
            a.push_back(b[i]) ; 
            a.push_back(b[i]) ; 
        }
        else a.push_back(b[i]) ; 
    }
    cout<<a.size()<<endl ; 
    for(int i=0 ; i<a.size() ; i++) cout<<a[i]<<" " ; 
    cout<<endl ; 
}

int main(){
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}