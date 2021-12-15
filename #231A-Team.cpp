//link to problem https://codeforces.com/contest/231/problem/A

#include <iostream>
 
using namespace std;
 
int main () {
  int v1,v2,v3;
  int n, count =0;
  cin >> n;
  while (n--) {
      cin >> v1 >> v2>> v3;
      if ((v1+v2+v3) >= 2)
    	{
    	  count ++;
    	}
    }
    cout << count ;
  return 0;
}
