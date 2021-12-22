//link to problem: https://codeforces.com/contest/510/problem/A
#include <iostream>
 
using namespace std;
 
int main()
{
    int n,m,c=0;
    cin >> n >> m;
    for(int i=0; i<n; i++){
            if(i%2==0){
                for(int j=0;j<m ; j++)
                if(j==m-1) cout << "#\n";
                else cout << "#";
            } 
            else{
                if(c%2==0){
                    for(int j=0;j<m ; j++)
                    if(j==m-1) cout << "#\n";
                    else cout << ".";
                }else{
                    for(int j=0;j<m ; j++)
                    if(j==0) cout << "#";
                    else if(j==m-1) cout << ".\n";
                    else cout << ".";
                }
                c++;
                
            }
        
    }
 
    return 0;
}
