#include <iostream>
#include <vector> 
#include <string>
#include <algorithm>
#include <queue>
#include<map>
#include<set>
#include <stack>
using namespace std; 

#define ll long long 
#define all(v) v.begin(),v.end() 
#define rep(i,n) for(int i=0 ; i<n ; i++)

void solve(){
    int n ; 
    cin>>n ; 
    if(n%3==0) cout<<"Second"<<endl;
    else cout<<"First"<<endl ; 
}

int main(){
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}