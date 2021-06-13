/*

Print these values that are not divisible by 3.  

*/





#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    for(int i=1; i <= 100 ; i++)  
    {
        if(i % 3 == 0) 
        {
            continue; 
        }
        cout<<i<<endl;
    }

    

    return 0; 
}


/*

Print those values that are divisible from 3. 



#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    for(int i=1; i <= 100 ; i++)  
    {
        if(i % 3 != 0)  
        {
            continue; 
        }
        cout<<i<<endl;
    }

    

    return 0; 
}



*/ 