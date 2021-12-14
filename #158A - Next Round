//link to problem https://codeforces.com/contest/158/problem/A

#include <iostream>
 
using namespace std;
 
int main () {
  int n, k, count = 0;
  cin >> n >> k;
  int scores[n];
 
  for (int i = 0; i < n; i++) {
      cin >> scores[i];
    }
  for (int i = 0; i < n; i++) {
      if (scores[i] >= scores[k - 1] && scores[i] > 0) {
      count++;
      }
  }
  cout << count;
  return 0;
}
