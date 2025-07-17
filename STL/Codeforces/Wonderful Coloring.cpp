#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    string s;
    cin >> s; 
    sort(s.begin(), s.end()); 

    unordered_set<char> set1; 
    unordered_set<char> set2; 
    for(char &ele: s) {
        int l1 = set1.size(); 
        int l2 = set2.size(); 
        if(l1 <= l2) {
            set1.insert(ele); 
        } else {
            set2.insert(ele); 
        }
    }
    
    cout << min(set1.size(), set2.size()) << "\n"; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
