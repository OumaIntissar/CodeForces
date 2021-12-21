//link to problem https://codeforces.com/contest/344/problem/A
#include <iostream>
 
using namespace std;
 
int main(){
    int n,g=0;
    cin >> n;
    string mg,p="xx";
    while(n--){
        cin >> mg;
        if(mg[0]!=p[0]) g++;
        p=mg;
    }
    cout << g;
 
    return 0;
}
