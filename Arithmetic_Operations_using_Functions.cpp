#include<bits/stdc++.h>
using namespace std; 


// Function Declaration 

int sum(int n1, int n2); 
int sub(int n1, int n2); 
int mul(int n1, int n2);
int div2(int n1, int n2); 

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    int a,b;
    

    char num;  

    cout<<"Which Operation you want to Perform: "<<endl; 
    cout<<"Press + for Addition "<<endl;
    cout<<"Press - for Subtraction "<<endl;
    cout<<"Press * for Multiplication "<<endl;
    cout<<"Press / for Division "<<endl; 

    cin>>num; 

    cout<<"Enter Two Numbers: " << endl; 
    cin>>a>>b; 

    switch (num) 
    {
    case '+':
        cout <<"Sum is: "<< sum(a,b);   
        break;
    
    case '-':
        cout << "Subtraction is: " <<sub(a,b); 
        break; 
    
    case '*':
        cout <<"Multiplication is: " << mul(a,b);
        break;
    
    case '/':
        cout <<"Division is: " << div2(a,b);   
        break; 
    
    default:
        break;
    }


    return 0; 
}

// Function Initialization 



    int sum(int n1, int n2)
    {
        int sum1 = n1 + n2; 
        return sum1; 
    }

    int sub(int n1, int n2)
    {
        int sub1 = n1 - n2; 
        return sub1; 
    }
    
    int mul(int n1, int n2)
    {
        int mul1 = n1 * n2; 
        return mul1; 
    }

    int div2(int n1, int n2)
    {
        int div1 = n1 / n2; 
        return div1; 
    }
    





