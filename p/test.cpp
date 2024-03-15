#include <iostream>
#include <math.h>
using namespace std;
int ifflower(int n)
{
    int n1=n;
    int sum=0;
    for(;n!=0;n/=10)
    {
        sum+=pow(n%10,3);
    }
    if(sum==n1)
    {
        return n1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int i;
    for(i=0;i<500;i++)
    {
        if(ifflower(i))
        {
            cout<<ifflower(i)<<endl;
        }
    }
    system("pause");
    return 0;
}