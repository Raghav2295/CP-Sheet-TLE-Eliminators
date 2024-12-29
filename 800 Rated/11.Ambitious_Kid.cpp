#include <iostream>
#include <vector> 
#include <string>
#include <algorithm>
#include <queue>
#include<map>
#include<unordered_map>
#include<set>
#include <stack>
using namespace std; 

#define ll long long 
#define all(v) v.begin(),v.end() 
#define rep(i,n) for(int i=0 ; i<n ; i++)

int main(){
    int n ; 
    cin>>n; 
    int mn = INT_MAX ; 
    rep(i,n){
        int x ; 
        cin>>x ; 
        mn = min(mn,abs(x)) ; 
    }
    cout<<mn<<endl ; 
}