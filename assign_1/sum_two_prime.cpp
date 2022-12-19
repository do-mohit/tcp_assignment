#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define F first
#define S second
#define B begin()
#define E end()
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define pi pair<int, int>
#define PB push_back
#define POP pop_back
#define MP make_pair
#define LL long long int
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define RREP(i, a, b) for (int i = a; i >= b; i--)
#define line "\n"

const int N = 1e5;
vector<bool> prime(N, true);

void sieve()
{
    prime[0] = prime[1] = false;
    REP(i, 2, N)
    {
        if (prime[i])
        {
            for (int j = 2 * i; j <= N; j += i)
                prime[j] = false;
        }
    }
}

void solve()
{
    int n;
    cin >> n;

    REP(i, 2, n)
    {
        if (prime[i] && prime[n - i])
        {
            cout << i << " " << (n - i) << line;
            return;
        }
    }
    cout << -1 << line;
}

int main()
{
    fast;
    int t;
    cin >> t;
    sieve();
    while (t--)
        solve();

    return 0;
}