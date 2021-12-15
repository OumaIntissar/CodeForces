
#include <iostream>
using namespace std;
 
int main(){
  string word;
  int n,c=0;
  cin >> n;
  cin >> word;
  for(int i=0; i< n; i++){
      if(word[i]==word[i+1]){
          c++;
      }
  }
      cout << c;
  
}
