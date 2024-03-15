#include <iostream>
using namespace std;
/*递归算法*/
double fib1(int n)
{
    if (n <= 1) 
    {
        return n;
    } 
    else 
    {
        return fib1(n - 1) + fib1(n - 2);
    }
}
/*迭代算法*/
 
double fib2(int n) 
{
    if (n <= 1) 
    {
        return n;
    }
    int a = 0, b = 1, temp;
    for (int i = 2; i <= n; i++) 
    {
        temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}

int main()
{
    int n;
    cout<<"输入非负整数n:"<<endl;
    cin>>n;
    cout<<"递归算法的斐波那契额数列第"<<n<<"项为"<<fib1(n)<<endl;
    cout<<"迭代算法的斐波那契额数列第"<<n<<"项为"<<fib2(n)<<endl;
    system("pause");
    return 0;
}