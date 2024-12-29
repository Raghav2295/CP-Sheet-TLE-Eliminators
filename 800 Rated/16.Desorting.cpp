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
    cin>>n ; 
    vi a(n) ; 
    int minDiff = INT_MAX ;
    cin>>a[0] ; 
    int idx = -1 ; 
    bool notSorted = false ; 
    for(int i=1 ; i<n ; i++){
        cin>>a[i] ; 
        if(a[i]<a[i-1]){
            notSorted = true ;
        }
        int diff = a[i] - a[i-1] ; 
        if(diff<minDiff){
            minDiff = diff ; 
            idx = i ; 
        }
    }
    if(notSorted){
        cout<<0<<endl ; 
        return ; 
    }
    cout<<minDiff/2+1<<endl ; 
}

int main(){
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}