#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

    char word;
    cout<<"Enter a character :";
    cin>>word;

    if (word == 'a' or word == 'e' or word == 'i' or word == 'o' or word == 'u' or word == 'A' or word == 'E' or word == 'I' or word == 'O' or word == 'U')
    {
        cout<<word<<" is a vowel.";
    }
    else
    {
        cout<<word<<" is a consonant.";
    }


    getch();
}