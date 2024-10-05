#include <bits/stdc++.h>
using namespace std;

int main() {
  int p;
  cin >> p;

  // パターン1 無し

  // パターン2
  if (p == 2) {
    string text;
    cin >> text;
    cout << text << "!" << endl;
  }

  int N;
  int price;
  cin >> price >> N;
  cout << price * N << endl;
}
