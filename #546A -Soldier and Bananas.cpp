//link to problem https://codeforces.com/problemset/problem/546/A

#include <iostream>
 
using namespace std;
 
 
 
int main(){
  int k, n, w, out, price =0;
  cin >> k >> n>> w;
  for (int i = 1; i<= w; i++){
      price += i; 
  }
  price *= k;
 
  out = price - n;
  if (out <= 0){
      cout << 0;
  }else {
      cout << out;
  }
 
}
