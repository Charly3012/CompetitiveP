#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int EsNumPrimo(ll j);

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  ll m, n;
  cin >> t;
  for (int i = 1; i <= t; i++)
  {

    cin >> m >> n;
    if (m == 1ll)
      m++;
    for (ll j = m; j <= n; j++)
    {
      if (EsNumPrimo(j) == 0)
        cout << j << "\n";
    }
    cout << "\n";
  }

  return 0;
}
int EsNumPrimo(ll j)
{
  for (ll k = 2ll; k <= sqrt(j); k++)
  {
    if ((j % k) == 0ll)
    {
      return 1;
    }
  }
  return 0;
};