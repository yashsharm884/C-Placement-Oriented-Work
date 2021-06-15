#include<bits/stdc++.h>
using namespace std;

int fact(int a)
{
    int factorial = 1;
    for(int i = 2; i <= a; i++)
    {
        factorial *= i; 
    }
    return factorial; 
}

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    int n,r;
    cin>>n>>r; 
    
    cout << ( fact(n) / (fact(r)* fact(n-r)) ) <<endl;  
    
    return 0; 
}