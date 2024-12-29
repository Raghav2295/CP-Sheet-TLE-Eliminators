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

void solve(){
    int a , b , c; 
    cin>>a>>b>>c ; 
    //a -> first
    //b ->second 
    //c ->either
    if(a>=(b+c)){
        cout<<"First"<<endl ; 
        return ; 
    }
    int sa = c/2+c%2 ;
    int sb = c-sa ; 
    if((sa+a)>(sb+b)){
        cout<<"First"<<endl ; 
    }
    else if((sa+a)<(sb+b)){
        cout<<"Second"<<endl ;
    }
    else{
        cout<<"Second"<<endl ; 
    }
}

int main(){
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}