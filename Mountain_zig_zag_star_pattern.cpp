/*

    *       *     
  *   *   *   *
*       *       *

*/ 



#include<bits/stdc++.h>
using namespace std; 

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int total; 
    cin>>total; 

    for(int i = 1; i <= 3; i++) 
    {
        for(int j = 1; j <= total; j++ )
        {
            if(( (i+j)%4==0) || (i==2 && j%4==0) )
            {
                cout<<"* "; 
            }
            else
            {
                cout<<"  "; 
            }
        }
        cout<<endl; 
    }




    return 0; 
}