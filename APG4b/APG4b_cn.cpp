#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, a, b;
  cin >> x >> a >> b;

  // 1.の出力　xに1を足した値
  x++;
  cout << x << endl;

  // ↓にプログラムを追記
  // 2.の出力　(1.で出力した値)に(a+b)を掛けた値
  x *= a + b;
  cout << x << endl;
  
  // 3.の出力　(2.で出力した値)に(2.で出力した値)を掛けた値
  x *= x;
  cout << x << endl;
  
  // 4.の出力　(3.で出力した値)から1を引いた値
  x--;
  cout << x << endl;
}
