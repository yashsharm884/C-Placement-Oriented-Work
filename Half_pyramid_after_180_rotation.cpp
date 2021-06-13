/*

        * 
      * *
    * * *
  * * * *
* * * * *


*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row;
    cin>>row; 

    for(int i = 1; i <= row; i++)  // printing rows 
    {
        for(int j = 1; j <= row; j++)  // printing in each row. 
        {
            if(j <= row - i)  // print space in row-i positions. 
            {
                cout<<"  "; 
            }
            else
            {
                cout<<"* "; 
            }
        }
        cout<<endl; 
    }


    return 0; 
}