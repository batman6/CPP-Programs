#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
int main()
{
    float height[4]={175.5,153.0,167.25,160.75};
    ofstream outfile("binary");
    outfile.write((char *)&height, sizeof(height));
    outfile.close();
    /*for(int i=0;i<4;i++)
    {
        height[i]=0;
    }*/
    ifstream infile("binary");
    infile.read((char *)&height, sizeof(height));
    for(int i=0;i<4;i++)
    cout<<height[i]<<endl;
}
