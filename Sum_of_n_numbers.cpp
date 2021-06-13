#include<bits/stdc++.h>
using namespace std; 

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    
    int sum;

    int t;
    cin>>t;

    for(int i = 1; i <= t; i++) 
    {
        sum = sum + i; 
    }
    cout<<sum<<endl;


    return 0; 
}