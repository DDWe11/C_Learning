//
// Created by Jevon on 2022/3/25.
//
#include "iostream"
using namespace std;
int main(void)//这里不可以有分号！！
{   //变量的申明，要用，分开；结尾，；后的数据程序会跳过的
    int data[10];
    int amax,amin,i;
    int sum(0);
    float average;

    cout<<"请输入十个整数"<<endl;
    for(i=0;i<10;i++)//赋 值
    {
        cin>>data[i];
    }
    amax=amin=data[0];
    i=0;
    while (i++<9)
    {
        if(data[i]>amax) amax=data[i];
        if(data[i]<amin) amin=data[i];
    }
    for(i=0;i<10;i++)
    {
        sum+=data[i];
    }
    average=sum/10.0;
    cout<<"最大值= "<<amax<<endl;
    cout<<"最小值= "<<amin<<endl;
    cout<<"算术平均值= "<<average<<endl;
}
