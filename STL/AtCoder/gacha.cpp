#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n; 
    cin >> n; 
    unordered_set<string> s; 

    for(int i = 0; i < n; i++) {
        string str; 
        cin >> str; 
        s.insert(str); 
    }
    cout << s.size() << "\n"; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();     
    return 0;
}
