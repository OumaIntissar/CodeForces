#include <iostream>
 
using namespace std;
 
 
 
int main(){
  int a, b,y=0;
  cin >> a >> b;
  while(a<=b){
      y++;
      a*=3;
      b*=2;
      if(a>b){
          cout << y;
      }
 
  }
}
