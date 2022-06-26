//
// Created by Jevon on 2022/3/26.
//
#include "iostream"
#include "string"
using namespace std;
int main()
{
    int static LENGTH = 20;
    char str[20];
    char* s = new char[LENGTH];
    cout << "Please input the first string:";
    cin >> str;
    cout << "please input the second string:";
    cin >> s;
    cout << "交换前：";
    cout << str << endl;
    cout << s << endl;

    char* pstr = str;
    char temp;
    {
        temp = *str,
        *str=*s,
        *s= temp;
        s++;
        pstr++;
    }
    s = s - LENGTH;
    cout << "交换后：" << endl;
    cout << str << endl;
    cout << s << endl;

}
