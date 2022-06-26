//
// Created by Jevon on 2022/3/19.
//
//1.向数组a中输入10个整数，求其中的最大值，最小值，和10个数的算数平均值。
#include "iostream"
using namespace std;
int MAX_numbs(int a[],int max)
{
    int i,j,t;
    for(i=0;i<9;i++)
        for(j=0;j<9-i;j++)
        if(a[i]>a[i+1])
        {
            t=a[i];
            a[i]=a[i+1];
            a[i+1]=t;
        }
    max=a[9];
    return max;
}
int MIN_numbs(int a[],int min )
{
    int i,j,t;
    for(i=0;i<9;i++)
        for(j=0;j<9-i;j++)
            if(a[i]<a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
    min=a[9];
    return min;
}
double Average(int a[],double average)
{
    int i;
    int sum=0;
    for(i=0;i<10;i++)
    {
        sum+=a[i];
    }
    average=sum/10.0;
    return average;
}
int main()
{
    int max,min;
    int a[9];
    double average;
    cout<<"please input 10 numbers:"<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }
    max= MAX_numbs(a,max);
    min= MIN_numbs(a,min);
    average= Average(a,average);
    cout<<"The MAX number is "<<max<<endl;
    cout<<"The MIN number is "<<min<<endl;
    cout<<"The AVERAGE is "<<average<<endl;

    return 0;
}