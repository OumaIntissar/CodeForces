//link to problem: https://codeforces.com/contest/750/problem/A

#include <iostream>
 
using namespace std;
 
int main()
{
    int n,k,t,p=0;
    cin >> n >> k;
    t=240-k;
    for(int i=1; i<=n; i++){
        t-= 5*i;
        if(t>=0) {
            p++;
        }
        else break;
    }
    cout<<p;
 
    return 0;
}
