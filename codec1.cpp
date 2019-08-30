#include <iostream>
using namespace std;

int main()
{
    int a, b,c, tcase;

    cin >> tcase;

    for(int i = 0; i < tcase; i++)
    {
        cin >> a >> b>> c;
        if(a+b+c==180)
            cout<<"The Entered Triangle is Valid \n";
        else
            cout<<"Entered Triangle is Invalid\n";
    }

    return 0;
}
