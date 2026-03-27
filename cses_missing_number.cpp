#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vll = vector<long long>;
#define all(v) v.begin(), v.end()

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  vi numbers;
  for (int i = 1; i < n; i++) {
    bool uniform = true;
    cin >> numbers[i];
    sort(all(numbers));
    if (numbers[i] + 1 != numbers[i + 1]) {
      uniform = false;
      break;
    }
  }

  return 0;
}
