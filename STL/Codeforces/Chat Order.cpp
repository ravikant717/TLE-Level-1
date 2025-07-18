#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    set<pair<string, int>> st;

    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;

        auto it = st.lower_bound({str, INT_MIN});

        if (it != st.end() && it->first == str)
        {
            st.erase({str, it->second});
            st.insert({str, i});
        }
        else
        {
            st.insert({str, i});
        }
    }
    vector<pair<int, string>> v;

    for (auto &it : st)
    {
        v.push_back({it.second, it.first});
    }

    sort(v.rbegin(), v.rend());
    for (auto &p : v)
    {
        cout << p.second << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
