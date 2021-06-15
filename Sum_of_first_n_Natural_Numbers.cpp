#include<bits/stdc++.h>
using namespace std; 

int sum(int n)
{
    int ans;
    for(int i = 1; i <= n; i++)
    {
        ans += i; 
    }
    return ans; 
}


int32_t main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    int n;
    cin>>n; 

    cout<<sum(n)<<endl;
    return 0; 
}