/*


        1 
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5

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
        int j; 
        for(j = 1; j <= row - i; j++)  // print space in row - i th positions. 
        {
            cout<<"  "; //double space 
        }
        int k = i; 

        for(;j<=row; j++)
        {
                cout<<k--<<" ";  // left Side elements print. 
        }
        k = 2; 
        for(;j<=row + i - 1; j++)
        {
            cout<<k++<<" ";   // Right side elements print. 
        }
            cout<<endl; 
    }
    
    return 0; 
}