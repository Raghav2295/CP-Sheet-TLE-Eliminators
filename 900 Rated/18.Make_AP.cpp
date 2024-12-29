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
#define nl endl 

void solve(){
    int a , b , c ; cin >> a >> b >> c ; 
    //Code
    int diff1 = b-a ; 
    int ass = b+diff1 ; 
    if(ass>0 && ass%c==0){
        cout<<"YES"<<nl ;
        return ;
    }
    diff1 = c-b ; 
    ass = b-diff1 ; 
    if(ass>0 && ass%a==0){
        cout<<"YES"<<nl ;
        return ;
    }
    if(a%2==c%2){
        int av = (a+c)/2 ; 
        if(av%b==0){
            cout<<"YES"<<nl ; 
            return ; 
        }
    }
    cout<<"NO"<<nl ; 
    return ;
}

int main(){
    fastIO() ; 
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}