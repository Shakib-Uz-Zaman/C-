#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    float a,b;
    cout<<"Enter two numbers :";
    cin>>a>>b;

    float max = (a > b) ? a : b;
    cout<<max;


    getch();
}