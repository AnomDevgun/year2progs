/*
Programmer: ANOM DEVGUN
Implemented finding of sparse mat
*/
#include<iostream>
using namespace std;
int a[20][20],b[20][20],i,j,r,c,l,m;
void input(int r,int c)
{
    l=r;
    m=c;
    cout<<"Enter Elements Of Matrix\n";
    for (i=0;i<l;i++)
    {
        for(j=0;j<m;j++)
        cin>>a[i][j];
    }
    cout<<"The Entered Matrix is\n";
    for(i=0;i<l;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
}
void spacal()
{
    int ctr=1;

    for(i=0;i<l;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j] != 0)
            {
                b[ctr][0]=i;
                 b[ctr][1]=j;
                  b[ctr][2]=a[i][j];
                ctr++;
            }

        }
    }
    b[0][0]=l;
    b[0][1]=m;
    b[0][2]=ctr-1;
    cout<<"The sparse matrix of the given matrix is : \n";
       for(i=0;i<ctr;i++)
{
cout<<"\n";
for(j=0;j<3;j++)
cout<<b[i][j]<<" ";
}
}
int main()
{
    int k,n;
    cout<<"Enter The Rows and Columns of Matrix \n";
    cin>>k>>n;
    input(k,n);
    spacal();
    return 0;

}
