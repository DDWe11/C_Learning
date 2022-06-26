#include<iostream>
#include<string.h>
using namespace std;
char* delchar(char* s1, char s2) //函数定义
{
    if (*s1 == '\0')
        return s1;
    if (*s1 == s2) {
        strcpy (s1, s1 + 1);
        delchar(s1, s2);
    }
    else {
        delchar(++s1, s2);
    }
    return s1;
}
int main()
{
    char s1[] = "bsklambdabag";
    char s2 = 'a';
    cout << "原来的字符串是：" << s1 << endl;
    cout <<"要删除的字符是"<<s2<<endl;
    delchar(s1, s2); //函数调用
    cout << "删除后指定字符后的字符串是：" << s1 << endl;
    return 0;
}