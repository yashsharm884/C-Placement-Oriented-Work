/*

a is the maximum number

a*a = b*b + c*c 

*/ 

#include<bits/stdc++.h>
using namespace std; 

bool check(int x, int y, int z)
{
    int a = max(x, max(y,z) );  
    int b,c; 

    if(a == x)
    {
        b = y;
        c = z; 
    }
    else if(a == y)
    {
        b = x; 
        c = z; 
    }
    else 
    {
        b = x; 
        c = y; 
    }
    if(a*a == b*b + c*c)
    {
        return true; 
    }
    return false; 
}


int32_t main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    int x,y,z; 
    cin>>x>>y>>z; 
    if(check(x,y,z)) 
    {
        cout << "Pythagorian Triplet" << endl;  
    }
    else
    {
        cout<<"Not Pythagorian Triplet" << endl; 
    }
    return 0; 
}