//
// Created by Jevon on 2022/3/20.
//
#include "iostream"
#include "string"
//#define LENGTH 20
using namespace std;
int main()
{
    int static LENGTH=20;
    char str[LENGTH] ;
    char* ps =new char[LENGTH];
//输入字符串
    cout<<"Please input the first string: ";
    cin>>str;
    cout<<"Please input the second string: ";
    cin>>ps;
//交换
    char *pstr = str;
    char c;
    for(int i = 0;i < LENGTH; i++)
    {
        c = *pstr;
        *pstr = *ps;
        *ps = c;
        ps++;
        pstr++;
    }
    ps = ps - LENGTH;
    cout<<str<<endl;
    cout<<ps<<endl;
}
