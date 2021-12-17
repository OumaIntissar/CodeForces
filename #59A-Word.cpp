//link to problem https://codeforces.com/contest/59/problem/A
#include <iostream>
 
using namespace std;
 
int main(){
    string s;
    cin >> s;
    int l = s.size(), cl=0;
    for (int i =0; i< l; i++){
        if(islower(s[i])){
            cl++;
        }
         if (cl >= l){ 
            break;
          }
    }
    
    if ((l%2!=0 && cl >= (l/2)+1)|| (l%2==0 && cl >= l/2)){
            for (int i=0; i< l; i++){
                s[i] = tolower(s[i]);
            }
        }else {
            for (int i=0; i< l; i++){
                s[i] = toupper(s[i]);
            }
        }
    cout << s ;
    return 0;
}
