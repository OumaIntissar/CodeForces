 //link to problem https://codeforces.com/contest/200/problem/B
#include <iostream>
 
using namespace std;
 
int main()
{
    int n;
    double f =0,p;
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> p;
        f+=p;
    }
    f/=n;
    cout << f << "\n";
 
    return 0;
}
