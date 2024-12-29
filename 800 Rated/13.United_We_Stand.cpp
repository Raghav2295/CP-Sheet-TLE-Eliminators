#include <iostream>
#include <vector> 
#include <string>
#include <algorithm>
#include <queue>
#include<map>
#include<unordered_map>
#include<set>
#include <stack>
#include<climits>
using namespace std; 

#define ll long long 
#define all(v) v.begin(),v.end() 
#define rep(i,n) for(int i=0 ; i<n ; i++)

void solve(){
    int n ; 
    cin>>n ; 
    vector<int> v(n) ; 
    unordered_map<int,int> m ; 
    for(int i=0 ; i<n ; i++){
        cin>>v[i] ;
        m[v[i]]++ ; 
    }
    if(m.size()==1){
        cout<<-1<<endl ; 
        return ; 
    }
    vector<int> a , b ; 
    int mx = INT_MIN ; 
    for(auto p : m){
        mx = max(mx,p.first) ; 
    }
    for(auto p : m){
        if(mx!=p.first){
            for(int i=1 ; i<=p.second ; i++){
                a.push_back(p.first) ; 
            }
        } 
        else{
            for(int i=1 ; i<=p.second ; i++){
                b.push_back(p.first) ; 
            }
        } 
    }
    
    cout<<a.size()<<" "<<b.size()<<endl ; 
    for(int i=0 ; i<a.size() ; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl; 
    for(int i=0 ; i<b.size() ; i++){
        cout<<b[i]<<" ";
    }
    cout<<endl; 
}

int main(){
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}