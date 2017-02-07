#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main ()

{
    FILE *in_file;
    FILE *out_file;

    int c; // c has to be an int so it can hold EOF
    int key;
    char a;
    char b[100];
    int i,j,k;
    char Filename [100];
    char encrypted [100];

    cout<<"Enter the name of text file:"; //asking user to enter the plain text file to encrypt
    cin>>Filename;//reading the file

    in_file=fopen(Filename,"r"); // open input file -- check that it exists
    if(in_file==NULL)
    {
        cout<<"file: input.dat not found"; // exit if not found
        }
    else

    cout<<"Enter key: ";
    cin>>key;
    key=key%26; // enter key

    while((c=fgetc(in_file)) && c!=EOF)// read character by character 'til End Of File --EOF
    {
        //cout<<"Mark1"<<endl;
        if(c != ' ')
            {
                if (c >= 'A' && c<= 'Z')
                {

                    a = c + key;
                    if (a > 90)
                        a = a - 26;
                }
                else if (c >= 'a' && c<= 'z')
                {
                    a = c + key;
                    if (a > 122)
                        a = a - 26;
                }
                else
                    a = c;
            }
            // For all character incl. spaces and symbol
            else
                a = c;


            cout << a;
    }


    //fclose(out_file); // close the output file
    fclose(in_file); //close the input file

    return 0;
}
