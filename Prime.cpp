#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a;
    cin>>a;

    for(int div = 2; div < a;)
    {
        if( a % div == 0 )
        {
            cout<<"Not Prime Number"<<endl;
            break;
        }
        else
        {
            div++; 
        }

        cout<<"Prime Number"<<endl; 
    }
    
    return 0; 
}


