#include <iostream>
#include <vector> 
#include <string>
#include <algorithm>
#include <queue>
#include<map>
#include<unordered_map>
#include<set>
#include <stack>
#include<climits>
using namespace std; 

#define ll long long 
#define all(v) v.begin(),v.end() 
#define rep(i,n) for(int i=0 ; i<n ; i++)
#define vi vector<int> 
#define vc vector<char> 
#define vll vector<long long> 

void solve(){
    int x , k ; 
    cin>>x>>k ; 
    //reach x and distance not divisble by k
    if(x%k!=0){
        cout<<1<<endl<<x<<endl ; 
    }
    else{
        cout<<2<<endl<<x-1<<" "<<1<<endl ; 
    }

}

int main(){
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}