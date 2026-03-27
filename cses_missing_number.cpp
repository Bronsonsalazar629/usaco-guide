#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vll = vector<long long>;
#define ll long long
#define all(v) v.begin(), v.end()

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  ll theoretical = (ll)n * (n + 1) / 2;
  ll given = 0;
  for (int i = 0; i < n - 1; i++) {
    int x;
    cin >> x;
    given += x;
  }
  cout << theoretical - given << "\n";

  return 0;
}
