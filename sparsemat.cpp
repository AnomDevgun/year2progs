#include<iostream>
using namespace std;
class matrix
{
int a[20][20],b[20][20],i,j,x,y,m,n;
public:
void input(int,int);
void sparse();
};
void matrix::input(int x,int y)
{
m=x;
n=y;
cout<<"enter the matrix\n";
for(i=0;i<m;i++)
for(j=0;j<n;j++)
cin>>a[i][j];
cout<<"the matrix is\n";
   for(i=0;i<m;i++)
    {
cout<<"\n";
for(j=0;j<n;j++)
cout<<a[i][j]<<" ";
    }
}
void matrix::sparse()
{
int k=1;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
if(a[i][j]!=0)
{
b[k][0]=i;
b[k][1]=j;
b[k][2]=a[i][j];
k++;
}}}
b[0][0]=m;
b[0][1]=n;
b[0][2]=k-1;
cout<<"\nthe sparse matrix of the given matrix \n";
for(i=0;i<k;i++)
{
cout<<"\n";
for(j=0;j<3;j++)
cout<<b[i][j]<<" ";
}}
int main()
{
int m,n;
matrix ob;
cout<<"enter order\n";
cin>>m>>n;
ob.input(m,n);
ob.sparse();
return 0;
}
