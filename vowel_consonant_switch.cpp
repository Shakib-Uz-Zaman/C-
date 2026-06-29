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
        cout<<word<<" is a vowel.";
        break;

        case 'e':
        cout<<word<<" is a vowel.";
        break;

        case 'i':
        cout<<word<<" is A vowel.";
        break;

        case 'o':
        cout<<word<<" is a vowel.";
        break;

        case 'u':
        cout<<word<<" is a vowel.";
        break;

        default:
        cout<<word<<" is a consonant.";
    }


    getch();
}