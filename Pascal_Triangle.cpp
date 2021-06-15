#include<bits/stdc++.h>
using namespace std;

int fact(int a)
{
    int factorial = 1; 
    for(int i = 1; i <= a; i++)
    {
        factorial *= i; 
    }
    return factorial; 
}

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    int n; 
    cin>>n; 

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout<< fact(i) / (fact(j) * fact(i -j) ) << " "; 
        }
        cout<<endl;
    }
    
    




    return 0; 
}