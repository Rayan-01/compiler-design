#include <iostream>

using namespace std;

int main()
{
     int n;
     cout<<"Enter The Size Of The String: ";
     cin>>n;
     char x[n];
     int c=0;
     for(int i=0;i<n;i++)
     {
         cin>>x[i];
     }
     for(int i=0;i<n;i++)
     {
        for(int j=65;j<=90;j++)
        {
            if((int)x[i] == j)
            {
                c++;
            }
         }
     }
     if(c==3)
     {
        cout<<"Accepted"<<endl;
     }
     else if(c != n)
     {
        for(int i=0;i<n;i++)
        {
             for(int j=97;j<=122;j++)
             {
                if((int)x[i] == j)
                {
                    c++;
                }
             }
        }

         if(c==n)
         {
            cout<<"No Identifier In This String"<<endl;
         }
         else
         {
             cout<<"Identifier In This String"<<endl;
         }
      }
    return 0;
}
