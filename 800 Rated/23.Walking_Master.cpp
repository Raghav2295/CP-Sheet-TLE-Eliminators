#include <iostream>
#include <vector> 
#include <algorithm>
#include<climits>
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

void solve(){
    int a , b , c , d ; 
    cin >> a >> b >> c >> d ; 
    // ( a , b ) && ( c , d )
    int limit_x = a+(d-b) ; 
    if(d<b || limit_x<c){
        cout<<-1<<endl ;
        return ; 
    }
    cout << (d-b) + (limit_x-c) << endl ; 
}

int main(){
    fastIO() ; 
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}