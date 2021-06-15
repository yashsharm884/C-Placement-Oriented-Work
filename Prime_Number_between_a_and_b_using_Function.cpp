#include<bits/stdc++.h>
using namespace std;

//bool isPrime(int number); 

bool isPrime(int number)
{
    for(int i = 2; i <= sqrt(number); i++)
    {
        if(number % i == 0)
        {
            return false;                 // Not Prime Number. 
        }
    }
    return true;        // Loop gets terminated and run completely and didn't get if condition then it is prime number. 
}


int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    int a,b; 
    cin>>a>>b; 

    for(int i = a; i <= b; i++)
    {
        if(isPrime(i)) 
        {
            cout<<i<<endl; 
        }
    }

    return 0; 
}