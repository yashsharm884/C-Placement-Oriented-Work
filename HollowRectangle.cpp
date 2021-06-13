/* 

****
*  *
*  * 
****


*/ 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int row,col;
    cin>>row>>col; 

    for(int i = 1; i <= row; i++)
    {
        for(int j = 1; j <= col ; j++) 
        {
            if(i == 1 || i == row)
            {
                printf("*"); 
            }
            else if ( j == 1 || j == col)
            {
                cout<<"*"; 
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0; 
}