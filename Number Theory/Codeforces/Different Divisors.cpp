#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    vector<long long> primes;
    for (long long i = 2; i <= 100000; i++)
    {
        bool is_prime = true;
        for (long long j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                is_prime = false;
                break;
            }
        }
        if (is_prime)
            primes.push_back(i);
    }

    while (t--)
    {
        long long d;
        cin >> d;

        long long p = *lower_bound(primes.begin(), primes.end(), d + 1);
        long long q = *lower_bound(primes.begin(), primes.end(), p + d);

        cout << p * q << "\n";
    }
}
