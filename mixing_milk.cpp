#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vll = vector<long long>;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  vll capacity(3);
  vll amount(3);
  for (int i = 0; i < 3; i++) {
    cin >> capacity[i] >> amount[i];
  }
  for (int i = 0; i < 100; i++) {
    int from = i % 3;
    int to = (i + 1) % 3;

    long long move = min(amount[from], capacity[to] - amount[to]);
    amount[from] -= move;
    amount[to] += move;
  }

  for (int i = 0; i < 3; i++) {
    cout << amount[i] << "\n";
  }

  return 0;
}
