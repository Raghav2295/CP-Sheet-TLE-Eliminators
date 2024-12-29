#include <iostream>
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
    int n ; 
    cin>>n ; 
    if(n<=10){
        cout<<n<<nl;  
    }
    else if(n<=100){
        cout<<9+n/10<<nl ; 
    }
    else if(n<=1000){
        cout<<18+n/100<<nl ; 
    }
    else if(n<=10000){
        cout<<27+n/1000<<nl ; 
    }
    else if(n<=100000){
        cout<<36+n/10000<<nl ; 
    }
    else if(n<=1000000){
        cout<<45+n/100000<<nl ; 
    }
    else{
        cout<<54+n/1000000<<nl ; 
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