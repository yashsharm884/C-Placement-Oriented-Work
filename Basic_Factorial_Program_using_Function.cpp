#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{   
    int factorial = 1; 

    for(int i = 2; i <= n; i++)
    {
        factorial *= i; 
    }
    return factorial; 
}


int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    int a; 
    cout<<"Enter the Number: "<<endl; 
    cin>>a; 
    
    cout<<fact(a)<<endl;  

    return 0; 
}