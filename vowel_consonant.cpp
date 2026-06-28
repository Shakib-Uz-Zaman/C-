#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

    char word;
    cout<<"Enter a character :";
    cin>>word;
    word = tolower(word);
    
    if (word == 'a' or word == 'e' or word == 'i' or word == 'o' or word == 'u')
    {
        cout<<word<<" is a vowel.";
    }
    else
    {
        cout<<word<<" is a consonant.";
    }


    getch();
}