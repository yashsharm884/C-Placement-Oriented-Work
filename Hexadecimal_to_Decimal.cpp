#include<bits/stdc++.h>   
using namespace std; 

int HexadecimalToDecimal(string n) 
{
    int ans = 0; 
    int x = 1; 
    int s = n.size();  // size of string.............   .size() is only for string. 

    for(int i = s - 1;  i >= 0; i--) 
    {
        if( n[i] >= '0' && n[i] <= '9') 
        {
            ans += x* ( n[i] - '0' ) ; 
        }
        else if( n[i] >= 'A' && n[i] <= 'F') 
        {
            ans += x * ( n[i] - 'A' + 10); 
        }
        x *= 16; 
    }
    return ans; 
}


int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    string n; 
    cin>>n; 
    cout<<HexadecimalToDecimal(n) << endl; 
    return 0; 
}
