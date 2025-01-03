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
#define repl(i,n) for(ll i=0 ; i<n ; i++)
#define vi vector<int> 
#define vc vector<char> 
#define vll vector<long long> 
#define sp " "
#define nl endl 
 
void solve() {
    string str1, str2;
    cin >> str1 >> str2;

    if (str1 == str2) {
        cout << 0 << nl; 
        return;
    }

    int n1 = str1.length(), n2 = str2.length();
    int maxLen = 0;
    for (int len = 1; len <= n1; len++) { 
        for (int i = 0; i <= n1 - len; i++) {
            string substr = str1.substr(i, len); 
            if (str2.find(substr) != string::npos) {
                maxLen = max(maxLen, len);
            }
        }
    }
    maxLen = max(0,maxLen) ; 
    cout << (n1 + n2 - 2 * maxLen) << nl;
}



int main(){
    fastIO() ; 
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
} 