#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  if (!(cin >> n))
    return 0;

  vi shell = {0, 1, 2, 3};
  vi point(4, 0);

  for (int i = 0; i < n; i++) {
    int a, b, g;
    cin >> a >> b >> g;

    swap(shell[a], shell[b]);
    int correct = shell[g];
    point[correct]++;
  }

  cout << max({point[1], point[2], point[3]}) << endl;

  return 0;
}
