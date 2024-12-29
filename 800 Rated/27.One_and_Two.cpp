#include <iostream>
#include <vector> 
#include <algorithm>
#include <string>
#include <queue>
#include<map>
#include<unordered_map>
#include<set>
#include <stack>
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
    int n; 
    cin>>n ; 
    vector<int> v(n) ; 
    long long two = 0 ;
    for(int i=0 ; i<n ; i++){
        cin>>v[i] ; 
        if(v[i]==2) two++ ; 
    }
    if(two%2==1){
        cout<<-1<<endl ; 
        return ; 
    }
    long long twos = 0 ; 
    for(int i=0 ; i<n ; i++){
        if(v[i]==2) twos++ ; 
        if(twos==two/2){
            cout<<i+1<<endl ; 
            return ; 
        }
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