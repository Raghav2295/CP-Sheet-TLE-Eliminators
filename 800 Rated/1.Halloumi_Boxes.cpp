#include <iostream>
#include <vector> 
#include <string>
#include <algorithm>
#include <queue>
#include <stack>
using namespace std; 

#define ll long long 
#define all(v) v.begin(),v.end() 
#define rep(i,n) for(int i=0 ; i<n ; i++)

void solve(){
    int n , k ; 
    cin>>n>>k ; 
    vector<int> v ; 
    bool flag = true ; 
    for(int i=0 ; i<n ; i++){
        int x ; 
        cin>>x ; 
        v.push_back(x) ; 
        if(i>0 && x<v[i-1]) flag = false ; 
    }
    if(k>=2) cout<<"YES"<<endl;
    else{
        if(flag) cout<<"YES"<<endl ; 
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