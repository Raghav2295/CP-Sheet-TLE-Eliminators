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
 
void solve() {
    int n; cin >> n;
    vi v(n); rep(i, n) cin >> v[i];
    vi prevSmall(n, -1), nextSmall(n, -1);
    stack< pair<int, int> > s;
    for (int i = 0; i < n; i++) {
        while (!s.empty() && s.top().first >= v[i]) {
            s.pop();
        }
        if (!s.empty()) {
            prevSmall[i] = s.top().second;
        }
        pair<int,int> c ; 
        c.first = v[i] ; 
        c.second = i ; 
        s.push(c);
    }

    stack< pair<int, int> > st;
    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && st.top().first >= v[i]) {
            st.pop();
        }
        if (!st.empty()) {
            nextSmall[i] = st.top().second;
        }
        pair<int,int> c ; 
        c.first = v[i] ; 
        c.second = i ; 
        st.push(c);
    }

    for (int i = 0; i < n; i++) {
        if (prevSmall[i] != -1 && nextSmall[i] != -1 && prevSmall[i] < i && nextSmall[i] > i) {
            cout << "YES" << nl;
            cout << prevSmall[i] + 1 << sp << i + 1 << sp << nextSmall[i] + 1 << nl;
            return;
        }
    }

    cout << "NO" << nl;
}


int main(){
    fastIO() ; 
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}