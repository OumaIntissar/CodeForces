//link to problem: https://codeforces.com/contest/996/problem/A
#include <iostream>
 
using namespace std;
 
int main()
{
    long n,b=0;
    long d[5]={100,20,10,5,1};
    cin >> n;
    
    while(n){
        for(int i=0; i<5;i++){
           b+=n/d[i]; 
           n%=d[i];
        }
    }
    
    cout<<b;
    return 0;
}
