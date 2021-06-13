#include<bits/stdc++.h>
using namespace std; 

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    int num; 
    cin >> num; 

    int reverse = 0; 
    int original = num; 

    while(num > 0) 
    {
        int last_digit = num % 10; 
        reverse = reverse * 10 + last_digit; 
        num = num / 10; 
    }
//    cout<<reverse; 
    
    if(reverse == original)
    {
        cout<<"Palindrome Number"; 
    }
    else
    {
        cout<<"Not Palindrome Number"; 
    }
    

            


    return 0; 
}