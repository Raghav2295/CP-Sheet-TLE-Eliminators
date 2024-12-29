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

void solve(){
    int n ; 
    cin>>n; 
    vi v(n) ; 
    int noOfone = 0 ; 
    rep(i,n){
        cin>>v[i] ; 
        if(v[i]==1) noOfone++ ;
    }
    int noOfminusOne = n - noOfone ; 
    if(noOfminusOne <= noOfone){
        if(noOfminusOne%2==0) cout<<0<<endl ; 
        else cout<<1<<endl ; 
    }
    else{ // noOfminusOne > noOfone
        int minChanges = noOfminusOne - noOfone ;
        if(minChanges%2==0) minChanges/=2 ; 
        else minChanges = minChanges/2+1 ; 
        noOfminusOne-=minChanges ; 
        if(noOfminusOne%2==0) cout<<minChanges<<endl ; 
        else cout<<minChanges+1<<endl ;
    }
}

int main(){
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}