#include<bits/stdc++.h>
using namespace std; 

int Octal_to_Decimal(int n)
{
    int ans; 
    int x = 1; 
    while (n>0)
    {
        int y = n % 10; 
        ans += x*y; 
        x *= 8; 
        n = n / 10;     
        
    }
    
    return ans; 
}

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    int n; 
    cin >> n;
    cout << Octal_to_Decimal(n) << endl; 
    return 0; 
}