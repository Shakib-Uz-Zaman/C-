#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int number, rem, temp;
    int reverse = 0;
    cout<<"Enter a digit :";
    cin>>number;

    temp = number;


    while(temp != 0)
    {
        rem = temp % 10;
        reverse = (reverse) * 10 + rem;
        temp = temp / 10;

    }
    cout<<"Reverse is :"<<reverse;


    getch();
}