/*

*****
****
***
**
*

*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int row;
    cin>>row; 

    for(int i = row; i >= 1; i--)   // going to each row...... 
    {
        for(int j = 1; j <= i; j++) 
        {
            cout<<"*";
        }
        cout<<endl; 
    }
    return 0; 
}