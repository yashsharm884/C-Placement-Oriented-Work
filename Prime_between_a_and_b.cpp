#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    cin>>a>>b; 
    int i,j; 
    for(i = a; i <= b; i++)      // A loop from a to be only. 
    {
        for(j = 2; j < i;j++)    // Prime Number Loop. 
        {
            if(i % j == 0) 
            {
                break; 
            }
        }
            if(j == i)
            {
                cout<<i;
                cout<<" is Prime"<<endl;
            }     
    }
    return 0;
}





