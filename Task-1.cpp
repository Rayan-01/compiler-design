#include <iostream>

using namespace std;

int main()
{
    char ope[4]={'+','-','/','*'};
    string x="(a+b)*c";
    for(int i=0;i<x.length();i++)
    {
        for(int j=0;j<4;j++)
        {
            if(x[i]==ope[j])
            {
                cout<<x[i];
            }
        }
    }
    return 0;
}
