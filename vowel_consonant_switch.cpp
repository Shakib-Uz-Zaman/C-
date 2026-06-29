#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char word;
    cout<<"Enter a word :";
    cin>>word;

    word = tolower(word);

    switch(word)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        cout<<word<<" is a vowel.";
        break;

        default:
        cout<<word<<" is a consonant.";
    }


    getch();
}