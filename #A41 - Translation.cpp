//link to problem https://codeforces.com/contest/41/problem/A
#include <iostream>
 
using namespace std;
 
int main()
{
    string s, t, cort="";
    cin >> s;
    cin >> t;
    int sizeS = s.size();
    for(int i=0; i<sizeS ; i++){
        cort+= s[sizeS-i-1];
    }
    if(t == cort){
    cout<<"YES"<< "\n";
    }else{
       cout<<"NO"<< "\n";
    }
    return 0;
}
