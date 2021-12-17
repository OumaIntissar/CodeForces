//link to problem https://codeforces.com/contest/617/problem/A
#include <iostream>
 
using namespace std;
 
int main(){
    
    int x,s=0,cs=0,ar[5]={5,4,3,2,1};
    
    cin >> x;
    for(int i=0; i<5; i++){
        if( x > 0){
            cs = x/ar[i];
            s+= cs;
            x = x - cs * ar[i]; 
        }else if (x==0){
            break;
        }
    }
   cout << s;
    return 0;
}
