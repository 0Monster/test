#include <iostream>
using namespace std;
void yhsj(int n)
{
    int data[100][100];
    int i = 0;
    int j = 0;
    for(i=0;i<n;i++)
    {
        for(int k=0;k<60-3*i;k++)
        {
            cout<<" ";
        }
        for(j=0;j<=i;j++)
        {
            if(i==0||j==0||j==i)
            {
                data[i][j]=1;
            }
            else
            {
                data[i][j]=data[i-1][j-1]+data[i-1][j];
            }
            cout.width(6);
            cout.fill('*');
            cout<<data[i][j];
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"输入正整数："<<endl;
    cin>>n;
    yhsj(n);
    system("pause");
    return 0;
}
