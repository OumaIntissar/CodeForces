//link to problem https://codeforces.com/contest/112/problem/A

#include <iostream>
 
using namespace std;
 
int main()
{
    
    string s1, s2,str1="",str2="";
    cin >> s1;
    cin >> s2;
    for (int i=0;i<s1.size();i++){
        str1 += toupper(s1[i]);
        str2 += toupper(s2[i]);
    }
   if(str1 < str2){
       cout<< "-1";
   }else if(str1 > str2){
       cout<< "1";
   }else if(str1 == str2){
       cout<< "0";
   }
    
 
    return 0;
}
