//link to problem https://codeforces.com/contest/263/problem/A
#include <iostream>
 
using namespace std;
 
int main()
{
    
    int m[5][5],xi,xj;
    for (int i=0;i<5;i++){
       for (int j=0;j<5;j++){
            cin >> m[i][j];
            if(m[i][j] == 1){
                xi = i;
                xj = j;
            }
        } 
    }
    
    cout << abs(xi - 2) + abs(xj - 2);
   
    return 0;
}
