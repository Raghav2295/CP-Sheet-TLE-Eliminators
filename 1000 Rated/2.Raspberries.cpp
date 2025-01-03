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
#include<numeric>
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
    int n , k ; cin>>n>>k ; 
    vi v(n) ; rep(i,n) cin>>v[i] ; 
    //Code
    if(k==2){
        int noOfDivisibleBy2 = 0 ; 
        for(int i=0 ; i<n ; i++){
            if(v[i]%2==0) noOfDivisibleBy2++ ; 
        }
        if(noOfDivisibleBy2==0) cout<<1<<nl ; 
        else cout<<0<<nl ; 
    }
    else if(k==3){
        int rem2 = 0 ; 
        for(int i=0 ; i<n ; i++){
            if(v[i]%3==0){
                cout<<0<<nl ; 
                return ; 
            }
            else if(v[i]%3==2){
                rem2++ ; 
            }
        }
        if(rem2==0){
            cout<<2<<nl ; 
        }
        else{
            cout<<1<<nl ; 
        }
    }
    else if(k==4){
        int rem1 = 0 , rem2 = 0 , rem3 = 0 ;
        for(int i=0 ; i<n ; i++){
            if(v[i]%4==0){
                cout<<0<<nl ; 
                return ;
            }
            else if(v[i]%4==1){
                rem1++ ; 
            }
            else if(v[i]%4==2){
                rem2++ ; 
            }
            else if(v[i]%4==3){
                rem3++ ; 
            }
        }
        if(rem2>=2){
            cout<<0<<nl ; 
        }
        else if(rem3){
            cout<<1<<nl ; 
        }
        else if(rem1){
            if(rem2==1){
                cout<<1<<nl ; 
            }
            else if(rem1>=2){
                cout<<2<<nl ;  
            }
            else{
                cout<<3<<nl ; 
            }
        }
    }
    else if(k==5){
        int rem4 = 0 , rem3 = 0 , rem2 = 0  , rem1 = 0 ; 
        for(int i=0 ; i<n ; i++){
            if(v[i]%5==0){
                cout<<0<<nl ;
                return ;
            }
            else if(v[i]%5==1) rem1++ ;
            else if(v[i]%5==2) rem2++ ; 
            else if(v[i]%5==3) rem3++ ;
            else if(v[i]%5==4) rem4++ ; 
        }
        if(rem4) cout<<1<<nl ; 
        else if(rem3) cout<<2<<nl ; 
        else if(rem2) cout<<3<<nl ;
        else if(rem1) cout<<4<<nl ; 
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