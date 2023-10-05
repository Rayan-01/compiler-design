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
         for(int j=48;j<=57;j++)
         {
            if((int)x[i] == j)
            {
                c++;
            }
         }
     }
     if(c==n)
     {
         cout<<"The String Is Number"<<endl;
     }
     else if(c!=n)
     {
         cout<<"The String Is Not Number"<<endl;
     }
    return 0;
}
