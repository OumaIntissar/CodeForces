//link to problem https://codeforces.com/contest/228/problem/A
#include <iostream>
 
using namespace std;
 
int main()
{
    int s[4],m=0;
    cin >> s[0]>>s[1]>> s[2] >> s[3];
    for(int i=0; i<3; i++)
        for(int j=i+1; j<4; j++)
            if(s[i]==s[j]){
                m++;
                break;
            }
                
    cout<<m;
 
    return 0;
}
