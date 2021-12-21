//link to problem: https://codeforces.com/contest/486/problem/A

#include <iostream>
 
using namespace std;
 
int main(){
    long long n, f =0;
    cin >> n;
    if(n%2==0) f=n/2;
    else {
        f= -1*(n+1);
        f/=2;
    }
    cout << f;
 
    return 0;
}
