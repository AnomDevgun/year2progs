#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char s[25],a[25],co[50];
    int v;
    int i=0,b=0,j=0;
    gets(s);
    for(i=0;s[i]!='\0';i++);
    b=i;
        cout<<"\nString length is:"<<i;
        cout<<"\nreverse of string is\n";
        for(i=b;i>=0;i--)
            cout<<s[i];
            cout<<"\nEnter String to compare\n";
            gets(a);
            v=strcmp(s,a);
            if(v==0)
                cout<<"Strings are equal\n";
            else
                cout<<"Strings are unequal\n";
            i=0,j=0;
            while(s[i]!='\0')
            {
                co[i]=s[i];
                i++;
            }
            while(a[j]!='\0')
            {
                co[i]=a[j];
                i++;
                j++;
            }
            cout<<co<<endl;

    return 0;
}
