                                                /*Strong Number*/
        /*A Strong number 'n' is a number whose sum of factorial of all digits is equal to the number ‘n’*/

#include<iostream>
using namespace std;

int Factorial(int value)
{
    int Fact = 1;
    
    for(int i = 1; i <= value; i++)
    {
        Fact = Fact * i;
    }
    return Fact;
}

int isStrong(int number)
{
    int AuxiVar = number;
    int Rem = 0;
    int Result = 0;

    for(int i = 0; AuxiVar != 0; i++)
    {
        Rem = AuxiVar % 10;

        Result = Result + Factorial(Rem);

        AuxiVar = AuxiVar / 10; 
    }
    return Result;
}

int main()
{
    int number;
    int result = 0;

    cout << "Enter a number : ";
    cin >> number;

    result = isStrong(number);

    if(result == number)
    {
        cout << "The number is Strong Number";
    }
    else
    {
        cout << "The number is not a Strong Number";
    }
    return 0;
}