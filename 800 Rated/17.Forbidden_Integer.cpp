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
    int n , k , x ; 
    cin>>n>>k>>x ; 
    //Code
    if(x!=1){
        cout<<"YES"<<endl ; 
        cout<<n<<endl ; 
        for(int i=1 ; i<=n ; i++) cout<<1<<" ";
        cout<<endl ; 
        return ; 
    }
    if(k==1){
        cout<<"NO"<<endl ; 
        return ; 
    }
    if(k==2 && n%2!=0 ){
        cout<<"NO"<<endl ; 
        return ;
    }
    if(n%2==0){//n is even
        cout<<"YES"<<endl ;
        cout<<n/2<<endl ;
        for(int i=1 ; i<=n/2 ; i++) cout<<2<<" ";
        cout<<endl;
        return ; 
    }
    else{
        cout<<"YES"<<endl ;
        cout<<n/2<<endl ; 
        for(int i=1 ; i<=(n/2-1) ; i++) cout<<2<<" ";
        cout<<3<<endl ; 
    }
}

int main(){
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}