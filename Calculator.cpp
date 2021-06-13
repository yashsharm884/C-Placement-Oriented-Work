#include<bits/stdc++.h>
using namespace std; 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b;
    cin>>a>>b;
     
    char c;
    cout<<"Enter an Operator: "<<endl; 
    cin>>c;

    switch (c)
    {
    case '+':
        cout<<a+b<<endl;
        break;
    case '-':
        cout<<a-b<<endl;
        break; 
    case '*':
        cout<<a*b<<endl; 
        break; 
    case '/':
        cout<< a / b <<endl; 
        break;

    default:
        cout<<"Not Valid"<<endl;
        break;
    }



    return 0; 
}