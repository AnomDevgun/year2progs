#include <iostream>
using namespace std;
int main()
{
    int tcase,i,n,j;
    int A[100],sum;
    cin>>tcase;
    for(i=0;i<tcase;i++)
    {   min1=a[0];
        cin>>n;
        for(j=0;j<n;j++)
        {
            cin>>A[j];
        }
        for(j=0;j<n;j++)
        {
            if(A[j]<min1)
                {   min2=min1;
                    min1=A[j];
                }
            else if(A[j]<min2 && A[j]!=min1)
            {
                min2=A[j];
            }


        }

        sum=min1+min2;
        cout<<sum<<"\n";

    }
    return 0;
}
