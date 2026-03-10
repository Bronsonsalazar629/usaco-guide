#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int M, N, K;
  cin >> M >> N >> K;
  string long_line;
  for (int i = 0; i < M; i++) {
    string line;
    cin >> M >> line;
    for (int j = 0; j < N; j++) {
      long_line += line[j];
    }
  }
  for (int k = 0; k < K; k++) {
    cout << long_line << "/n";
  }
  return 0;
}
