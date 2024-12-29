#include <iostream>
#include <vector> 
#include <algorithm>
#include <string>
#include <queue>
#include<map>
#include<unordered_map>
#include<set>
#include <stack>
#include<deque>
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
    deque<int> dq ; 
    for(int i=0 ; i<n ; i++){
        long long x ; 
        cin>>x ; 
        if(x%2) dq.push_back(1) ;  
        else dq.push_back(0) ; 
    }
    //Code
    int i=0 ; 
    long long count = 0 ; 
    while(dq.size()){
        int t = dq.front() ; 
        dq.pop_front() ; 
        if(dq.size()==0) break ; 
        int s = dq.front() ; 
        if(s==t){
            dq.pop_front() ; 
            dq.push_front(s*t) ; 
            count++ ; 
        }
    }
    cout<<count<<endl ; 
}

int main(){
    fastIO() ; 
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}