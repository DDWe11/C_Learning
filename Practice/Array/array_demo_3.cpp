//
// Created by Jevon on 2022/3/19.
//
//3.任意输入一个字符串，统计其中英文字母'a'，和'i'的个数，并将该字符输出
#include "iostream"
#include "string"
using namespace std;
int main()
{
    int i;
    int count1=0,count2=0;//count1用来计算'a'的个数，count2用来计算'i'的个数
    char a[100];
    cout<<"请输入数据"<<endl;
    cin>>a;
    cout<<"字符串为： "<<endl;
    cout<<a<<endl;

    for(i=0;i<strlen(a);i++)
    {
        if(a[i]=='a')
        {
            count1++;
        }
        if(a[i]=='i')
        {
            count2++;
        }
    }
    cout<<"一共有 "<<count1<<" 个'a'\t"<<count2<<" 个'i'"<<endl;
    return 0;
}
