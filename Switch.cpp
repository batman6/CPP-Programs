#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str[10];
    int v=0,d=0,i;
    cout<<"Enter String";
    cin>>str;
    for(i=0;str[i]!='\0';i++)
    {
        switch (str[i])
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            v++;
            break;
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        case '0':
            d++;
            break;
        }
    }
cout<<"No. of Vowels:"<<v<<"\t"<<"No. of Digits:"<<d;
return 0;
}
