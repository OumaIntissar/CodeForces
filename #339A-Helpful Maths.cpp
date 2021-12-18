//link to problem https://codeforces.com/contest/339/problem/A

#include <iostream>
 
using namespace std;
 
int main() {
    
    string s, ns="";
    int s1=0, s2=0, s3=0;
    cin >> s;
    for (int i=0; i< s.size(); i++){
        if(s[i]=='1')
            s1 ++;
        else if (s[i] == '2')
            s2++;
        else if (s[i] == '3')
            s3++;
    }
    while(s1--)
        ns += "1+";
    while(s2--)
        ns+= "2+";
    while(s3--)
        ns+= "3+";
    
    ns.erase(ns.size()-1);
    
    cout<<ns;
 
    return 0;
}
