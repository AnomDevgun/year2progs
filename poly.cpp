
#include<iostream>
using namespace std;
struct po
{
    int coeff,ex;
};
int main()
{
    struct po p1[10],p2[10],p3[10];
    unsigned int i,j,e,f;
    cout<<"How many terms do you want in first expression?\n";
    cin>>e;
    cout<<"Enter First Expression\n";
    for(i=0;i<e;i++)
    cin>>p1[i].coeff>>p1[i].ex;
    cout<<"How many terms do you want in second expression?\n";
    cin>>f;
    cout<<"Enter Second Expression\n";
    for(j=0;j<f;j++)
    cin>>p2[j].coeff>>p2[j].ex;
    for(i=0;i<e;i++)
    {
        for(j=0;j<f;j++)
        {
            if(p1[i].ex==p2[j].ex)
            p3[i].coeff=p1[i].coeff+p2[j].coeff;

        }
    }
    int s = sizeof(p3);
    for(int k=0;k<s;k++)
        cout<<p3[i].coeff<<"x^"<<p3[i].ex<<endl;
return 0;

}
