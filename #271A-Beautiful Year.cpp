//link to problem: https://codeforces.com/contest/271/problem/A 
#include <iostream>
 
using namespace std;
 
int main () {
  int y, d[4], yc, test;
  cin>> y;
  do{
      y++;
      test =0;
      yc = y;
      for (int i = 0; i < 4; i++){
    	  d[i] = yc % 10;
    	  yc /= 10;
    	}
      for (int i = 0; i < 4; i++){
	    for (int j = i + 1; j < 4; j++){
	      if (d[i] == d[j]){
		  test = 1;
		  break;
		    }
	        }
	  if (test == 1) break;
	    }
    }while (test == 1);
    cout << y;
  return 0;
}
