/*

    1 
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5

*/



#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int row;
    cin>>row; 

    for(int i = 1; i <= row; i++)
    {
        for(int j = 1; j <= row - i; j++)
        {
            cout<<" "; 
        }
        for(int k = 1; k <= i; k++)
        {
            cout<<k<<" "; 
        }
        cout<<endl; 
    }


    return 0; 
}
