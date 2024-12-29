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

void solve(){
    int n; 
    cin>>n ; 
    vector<int> v(n) ; 
    rep(i,n) cin>>v[i] ; 
    unordered_map<int,int> mp ; 
    for(int i=0 ; i<n ; i++){
        mp[v[i]]++ ; 
    }
    if(mp.size()>2) cout<<"NO"<<endl ; 
    else if(mp.size()==1) cout<<"YES"<<endl ; 
    else{
        vector<int> freq(2) ; 
        int i = 0 ;
        for(pair<int,int> p : mp){
            freq[i++] = p.second ; 
        }
        if(abs(freq[0]-freq[1])<=1) cout<<"YES"<<endl ; 
        else cout<<"NO"<<endl ; 
    }
}

int main(){
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}