/*


1
2 2
3 3 3
4 4 4 4
5 5 5 5 5



*/ 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    int row;
    cin>>row; 

    for(int i = 1; i <= row; i++)    // printing rows. 
    {
        for(int j = 1; j <= i; j++)  // print number i in the ith rows ith times. 
        {
            cout<<i<<" "; 
        }
        cout<<endl; 
    }


    return 0; 
}