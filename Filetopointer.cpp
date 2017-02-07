#include <iostream>
#include <fstream>
#include <stdio.h>
#include <cstring>
using namespace std;
int main()
{
	FILE *pfile;
	char buffer[100];
	pfile=fopen("NEw.txt","r");
	if(pfile==NULL)perror("error opening");
	else
        while(!feof(pfile))
		{
			if(fgets(buffer,100,pfile))
				break;
			fputs(buffer,stdout);
		}
		fclose(pfile);
return 0;
}
