//link to problem https://codeforces.com/contest/116/problem/A
#include <iostream>
 
using namespace std;
 
int main(){
    int n, a,b,c=0, cp=0;
    cin >> n;
    while(n--){
        cin >> a >> b;
        c -= a;
        c += b;
        
        if (c > cp){
          cp = c;  
        }
    }
    
    cout << cp ;
    return 0;
}
