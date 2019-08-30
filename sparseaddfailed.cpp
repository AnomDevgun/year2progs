/*
Programmer: ANOM DEVGUN
Implemented finding of sparse mat
*/
#include<iostream>
using namespace std;
int a[20][20],b[20][20],a2[20][20],res[20][20],b2[20][20],i,j,r,c,r2,c2,l,m,l2,m2,ctr,ctr2;
void input(int r,int c,int r2,int c2)
{
    l=r;
    m=c;
    cout<<"\nEnter Elements Of Matrix 1\n";
    for (i=0;i<l;i++)
    {
        for(j=0;j<m;j++)
        cin>>a[i][j];
    }
    cout<<"\nThe Entered Matrix 1 is\n";
    for(i=0;i<l;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    l2=r2;
    m2=c2;
    cout<<"\nEnter Elements Of Matrix 2\n";
    for (i=0;i<l2;i++)
    {
        for(j=0;j<m2;j++)
        cin>>a2[i][j];
    }
    cout<<"\nThe Entered Matrix 2 is\n";
    for(i=0;i<l;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<a2[i][j]<<" ";
        }
        cout<<"\n";
    }
}
void spacal()
{
    ctr=1,ctr2=1;

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
    cout<<"\nThe sparse matrix of the given matrix 1 is : \n";
       for(i=0;i<ctr;i++)
{
cout<<"\n";
for(j=0;j<3;j++)
cout<<b[i][j]<<" ";
}
for(i=0;i<l;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a2[i][j] != 0)
            {
                b2[ctr2][0]=i;
                 b2[ctr2][1]=j;
                  b2[ctr2][2]=a2[i][j];
                ctr2++;
            }

        }
    }
    b2[0][0]=l;
    b2[0][1]=m;
    b2[0][2]=ctr-1;
    cout<<"\nThe sparse matrix of the given matrix 2 is : \n";
       for(i=0;i<ctr2;i++)
{
cout<<"\n";
for(j=0;j<3;j++)
cout<<b2[i][j]<<" ";
}
}
void add()
{
    int cta=0;
    i=1,j=1;
    while(i<=ctr&&i<=ctr2)
    {
        if(a2[i][0]<b2[i][0])
        {
            res[j][0]=a2[i][0];
            res[j][1]=a2[i][1];
            res[j][2]=a2[i][2];
            j++;
            res[j][0]=b2[i][0];
            res[j][1]=b2[i][1];
            res[j][2]=b2[i][2];
            i++;
            j++;
        }
       else if(a2[i][0]>b2[i][0])
        {
            res[j][0]=b2[i][0];
            res[j][1]=b2[i][1];
            res[j][2]=b2[i][2];
            j++;
            res[j][0]=a2[i][0];
            res[j][1]=a2[i][1];
            res[j][2]=a2[i][2];
            i++;
            j++;
        }
        else if(a2[i][0]==b2[i][0])
        {
            if(a2[i][1]<b[i][1])
            {
            res[j][0]=a2[i][0];
            res[j][1]=a2[i][1];
            res[j][2]=a2[i][2];
            j++;
            res[j][0]=b2[i][0];
            res[j][1]=b2[i][1];
            res[j][2]=b2[i][2];
            i++;
            j++;
            }
            else if(a2[i][1]>b2[i][1])
            {
            res[j][0]=b2[i][0];
            res[j][1]=b2[i][1];
            res[j][2]=b2[i][2];
            j++;
            res[j][0]=a2[i][0];
            res[j][1]=a2[i][1];
            res[j][2]=a2[i][2];
            i++;
            j++;
            }
            else
            {
                res[i][0]=a2[i][0];
                res[i][1]=a2[i][1];
                res[i][2]=a2[i][2]+b2[i][2];
                i++;
            }
        }
       cta++;
    }
    while(cta<ctr)
    {
        res[i][0]=a2[i][0];
        res[i][1]=a2[i][1];
        res[i][2]=a2[i][2];
        i++;
        cta++;
    }
    while(cta<ctr2)
    {
        res[i][0]=b2[i][0];
        res[i][1]=b2[i][1];
        res[i][2]=b2[i][2];
        i++;
        cta++;
    }
    res[0][0]=cta;
    res[0][1]=3;
    res[0][2]=cta;
    cout<<"\nThe sparse matrix addition of the given matrices is : \n";
       for(i=0;i<cta;i++)
{
cout<<"\n";
for(j=0;j<3;j++)
cout<<res[i][j]<<" ";
}
}
int main()
{
    cout<<"Enter The Rows and Columns of Matrix 1 \n";
    cin>>r>>c;
     cout<<"Enter The Rows and Columns of Matrix 2 \n";
     cin>>r2>>c2;
    input(r,c,r2,c2);
    spacal();
    add();
    return 0;

}

