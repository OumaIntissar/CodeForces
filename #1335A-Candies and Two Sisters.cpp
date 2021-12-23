//link to problem: https://codeforces.com/contest/1335/problem/A

#include <iostream>
 
using namespace std;
 
int main()
{
    int t;
    long n,b,c=0;
    cin >> t;
    while(t--){
        c=0;
        cin >> n;
        if(n>2){
            if(n%2==0){
                c=n/2;
                c--;
            }else {
                c=n/2;
            }
            cout << c <<"\n";
        }else cout << "0\n";
    }
    return 0;
}
