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
    int n ; 
    string s ; 
    cin>>n>>s ; 
    int i=0 , j=n-1 ; 
    while(i<=j){
        if((s[i]=='0' && s[j]=='1') || (s[i]=='1' && s[j]=='0')){
            i++ ;
            j-- ; 
        }
        else break ; 
    }
    cout<<j-i+1<<endl ; 
}

int main(){
    fastIO() ; 
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}