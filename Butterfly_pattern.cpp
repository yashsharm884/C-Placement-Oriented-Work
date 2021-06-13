/*
*                                         * 
* *                                     * *
* * *                                 * * *
* * * *                             * * * *
* * * * *                         * * * * *
* * * * * *                     * * * * * *
* * * * * * *                 * * * * * * *
* * * * * * * *             * * * * * * * *
* * * * * * * * *         * * * * * * * * *
* * * * * * * * * *     * * * * * * * * * *
* * * * * * * * * * * * * * * * * * * * * *
* * * * * * * * * * * * * * * * * * * * * *
* * * * * * * * * *     * * * * * * * * * *
* * * * * * * * *         * * * * * * * * *
* * * * * * * *             * * * * * * * *
* * * * * * *                 * * * * * * *
* * * * * *                     * * * * * *
* * * * *                         * * * * *
* * * *                             * * * *
* * *                                 * * *
* *                                     * *
*/


#include<bits/stdc++.h>
using namespace std; 

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int row; 
    cin>>row; 

    for(int i = 0; i <= row; i++)    //printing rows 
    {
        for(int j = 0; j <= i; j++)  // printing columns in each row similar to the i 
        {
            cout<<"* "; 
        }

        int space = 2 * row - 2 * i;  

        for(int k = 1; k <= space; k++)  // printing space in each row in space variable locations. 
        {
            cout<<"  "; 
        }


        for(int j = 0; j <= i; j++)  // print after the spaces means right side pattern. 
        {
            cout<<"* "; 
        }

        cout<<endl;
    }


    for(int i = row; i >= 1; i--)    //printing rows  
        {
            for(int j = 0; j <= i; j++)  // printing columns in each row similar to the i 
            {
                cout<<"* "; 
            }

            int space = 2 * row - 2 * i;  

            for(int k = 1; k <= space; k++)  // printing space in each row in space variable locations. 
            {
                cout<<"  "; 
            }


            for(int j = 0; j <= i; j++)  // print after the spaces means right side pattern. 
            {
                cout<<"* "; 
            }

            cout<<endl;
        }








    return 0; 
}
