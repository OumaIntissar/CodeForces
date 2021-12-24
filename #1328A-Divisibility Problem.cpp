//link to problem: https://codeforces.com/contest/1328/problem/A

#include <iostream>
 
using namespace std;
 
int main()
{
    long a,b,t,c;
    cin >> t;
   
    while(t--){
        cin >> a >> b;
        if(a<b) c=b-a;
        else if(a%b==0) c=0;
        else { 
            c= a/b;
            c++;
            c*=b;
            c-=a;
        }
    cout<< c << "\n";
    }
 
    return 0;
}
