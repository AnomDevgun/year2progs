#include <iostream>
using namespace std;
int main()
 {
     int tcase;
     cin>>tcase;
     while(tcase--)
     {
         int s=0;
         int a[5];
         for(int i=0;i<5;i++)
         {
             cin>>a[i];
             s+=a[i];
         }
         if(s==5)
         {
             cout<<"Jeff Dean\n";
         }
         else if(s==4)
         {
             cout<<"Hacker\n";
         }
         else if(s==3)
         {
             cout<<"Senior Developer\n";
         }
         else if(s==2)
         {
             cout<<"Middle Developer\n";
         }
         else if(s==1)
         {
             cout<<"Junior Developer\n";
         }
         else
         {
             cout<<"Beginner\n";
         }
     }
     return 0;
}
