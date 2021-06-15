#include<bits/stdc++.h>
using namespace std;

void fib(int n)
{
    long long int t1 = 0;
    long long int t2 = 1; 
    long long int nextTerm; 

    for(int i = 1; i <= n; i++)
    {
        cout<<t1<<endl; 
        nextTerm = t1 + t2; 
        t1 = t2; 
        t2 = nextTerm; 
    }
    return; 
}

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    int a; 
    cout<<"Enter the value till where you wish to print Fibonacci Series: "<<endl;
    cin>>a;

    fib(a); 

    return 0; 
}