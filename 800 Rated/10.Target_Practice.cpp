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
    vector< vector<int> > v ; 
    for(int i=0 ; i<10 ; i++){
        for(int j=0 ; j<10 ; j++){
            char ch ;
            cin>>ch ;
            if(ch=='X'){
                vector<int> temp ; 
                if(i>4) temp.push_back(9-i) ; 
                else temp.push_back(i) ; 
                if(j>4) temp.push_back(9-j) ; 
                else temp.push_back(j) ; 
                v.push_back(temp) ; 
            }
        }
    }
    int n = v.size() ; 
    int ans = 0 ; 
    for(int i=0 ; i<n ; i++){
        if(v[i][1]==0 || v[i][0]==0) ans+=1 ; 
        else if((v[i][1]==1 && v[i][0]!=0) || v[i][0]==1) ans+=2 ; 
        else if((v[i][1]==2 && v[i][0]!=1) || v[i][0]==2) ans+=3 ; 
        else if((v[i][1]==3 && v[i][0]!=2) || v[i][0]==3) ans+=4 ; 
        else ans+=5 ; 
    }
    cout<<ans<<endl ;
}

int main(){
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}