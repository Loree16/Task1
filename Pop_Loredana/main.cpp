#include <iostream>
#include <cstring> //for specific functions
using namespace std;
//Menu function
void showChoices()
{
    cout<< "MENU\n";
    cout<< "Press 1 to convert a string to uppercase\n";
    cout<< "Press 2 to reverse a string\n";
    cout<< "Press 3 to count the number of vowels in a string\n";
    cout<< "Press 4 to count the number of words in a string\n";
    cout<< "Press 5 to convert a string to title case\n";
    cout<< "Press 6 to check if a string is a palindrome\n";
    cout<< "Press 7 to exit\n";
}
//Function that converts the string to uppercase
void uppercase(string s)
{
    for (unsigned int i=0; i<s.size(); i++)
        putchar(toupper(s[i]));
}
//Function that reverse the string
void reversed(string s)
{
    int n=s.size();//n is the length of the string
    for (int i=0; i<n/2; i++)
        swap(s[i], s[n-i-1]);
    cout<< s;
}
//Function that counts the number of the vowels in the string
void vowels_number(string s)
{
    int vow=0; //number of vowels
    for (unsigned int i=0; i<s.size(); i++)
        if (s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u'|| s[i]=='A'|| s[i]=='E'|| s[i]=='I'|| s[i]=='O'|| s[i]=='U') vow++;
    cout<< vow;
}
//Function that counts the number of the words in the string
void words(string s)
{
    int number=0; //number of words
    for (unsigned int i=0; i<s.size(); i++)
        if (s[i] == ' ') number++;
    cout<< number+1;
}
//Function that converts the string to title case
void title_case(string s)
{
    s[0]=s[0]-32; //converts the first character
    for (unsigned int i=0; i<s.size(); i++)
        if(s[i]==' ') s[i+1]=s[i+1]-32;
    cout<< s;

}
//Function that checks if a string is a palindrome
void palindrome(string s)
{
    int ok=1, n=s.size();
    for (int i=0; i<n/2; i++)
        if (s[i]!=s[n-i-1]) ok=0;
    if (ok==1) cout<< "The string is a palindrome";
    else cout<< "The string is not a palindrome";
}

int main()
{
    string s, news;
    int choice;
    showChoices();
    cout<< "Enter the string: ";
    getline(cin, s);
    do
    {
        news=s; //auxiliary variable
        cout<< "Enter your choice: ";
        cin>> choice;
        switch (choice)
        {
        case 1:
            cout<< "Converted string: ";
            uppercase(news);
            cout<< endl;
            break;
        case 2:
            cout<< "Reversed string: ";
            reversed(news);
            cout<< endl;
            break;
        case 3:
            cout<< "Number of vowels: ";
            vowels_number(news);
            cout<< endl;
            break;
        case 4:
            cout<< "Number of words: ";
            words(s);
            cout<< endl;
            break;
        case 5:
            cout<< "Title case string: ";
            title_case(s);
            cout<< endl;
            break;
        case 6:
            palindrome(s);
            cout<< endl;
            break;
        case 7:
            exit(0); //to end the program
        default:
            cout << "Invalid input" << endl;
        }
    }
    while (choice!=7);
}
