#include<bits/stdc++.h>
using namespace std; 

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int number, temp, remainder, result = 0, n = 0 ;


    cin >> number;

    temp = number;

    // Finding the number of digits

    while (temp != 0)
    {
        temp /= 10;
        ++n;
    }

    temp = number;

    // Checking if the number is armstrong

    while (temp != 0)
    {
        remainder = temp;
        result += pow(remainder, n);
        temp /= 10;
    }

    if(result == number)
    cout << number << "is an Armstrong number\n";
    else
    cout << number << " is not an Armstrong number\n" ;

return 0;
}




