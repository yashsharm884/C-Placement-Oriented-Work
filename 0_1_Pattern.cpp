/*

1
 0 1
 1 0 1
 0 1 0 1
 1 0 1 0 1

*/



#include<bits/stdc++.h>
using namespace std; 

int32_t main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    int row;
    cin>>row; 

    for(int i = 1; i <= row; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            if( (i+j) % 2 == 0 )
            {
                cout<<" 1"; 
            }
            else
            {
                cout<<" 0"; 
            }
        }
        cout<<endl; 
    }

    return 0; 
}