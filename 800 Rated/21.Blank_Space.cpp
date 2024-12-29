#include <iostream>
#include <string>
#include<climits>
using namespace std; 

#define ll long long 
#define all(v) v.begin(),v.end() 
#define rep(i,n) for(int i=0 ; i<n ; i++)
#define vi vector<int> 
#define vc vector<char> 
#define vll vector<long long> 
#define sp " "

void solve(){
    int n ; 
    cin>>n; 
    int mxZeros = 0 ; 
    int noOfZeros = 0 ; 
    for(int i=0 ; i<n ; i++){
        int x ; 
        cin>>x ; 
        if(x==0) noOfZeros++ ; 
        else{
            mxZeros = max(mxZeros,noOfZeros) ; 
            noOfZeros = 0 ; 
        }
    }
    mxZeros = max(mxZeros,noOfZeros) ; 
    cout<<mxZeros<<endl ; 
}

int main(){
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}