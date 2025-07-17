#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    vector<pair<ll, ll>> v;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        vector<ll> a(m);
        for (int j = 0; j < m; j++)
        {
            cin >> a[j];
        }
        sort(a.begin(), a.end());
        v.push_back({a[1], a[0]});
    }

    sort(v.begin(), v.end());

    ll ans = 0;
    ll min_ele = v[0].second;
    for (int i = 1; i < n; i++)
    {
        ans += v[i].first;
        min_ele = min(min_ele, v[i].second);
    }
    ans += min_ele;

    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
