//
// Created by Jevon on 2022/3/25.
//
#include "iostream"
using namespace std;
int main()
{
    char a;
    int count1=0,count2=0;
    cout<<"请输入一行字符（以回车结束）： "<<endl;
    while((a=getchar())!='\n')
    {
        if(a=='i')
        {
            count1++;
        }
        if(a=='a')
        {
            count2++;
        }
    }

}