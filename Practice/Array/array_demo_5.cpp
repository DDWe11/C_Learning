//
// Created by Jevon on 2022/3/19.
//
//5.设整数数组a中按序存放有以下数据：2、4、5、8、12、14、16、18、20、30。从键盘上任意输入一个整数插入a，插入后仍然有序，并输出
#include "iostream"
using namespace std;
int main()
{
    int a[11]={2,4,5,8,12,14,16,18,20,30};
    int n;
    cout<<"please input n :"<<endl;
    cin>>n;
    int loc=0;
    int i;
    for( i=0;i<10;i++)
    {
        if(a[i]>=n)
        {
            loc=i;//3
            break;
        }
    }

    for(i=9;i>=loc;--i)
    {
        a[i+1]=a[i];
    }
    a[loc]=n;
    for(int j=0;j<=10;j++)
    {
        cout<<a[j]<<'\t';
    }
}
