//
// Created by Jevon on 2022/6/12.
//

#include<iostream>
using namespace std;
void transform(char *s)
{
    int i;
    for(i=0; s[i]; i++)
    {

        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i]+=32;
        }
        if(s[0] >= 'a' && s[0] <= 'z')
        {
            s[0]-=32;
        }

    }

    for(i=1; s[i]; i++)
    {
        if(s[i] == ' ')
        {
            if(s[i + 1] >= 'a' && s[i + 1] <= 'z')
                s[i + 1]-=32;
        }
    }

}
int main()
{
    char str[100];
    char ch;
    int i=0;
    cout<<"请输入要转换的字符串"<<endl;
    while((ch = getchar()) != '\n')
    {
        str[i++] = ch;
    }
    str[i] = '\0';
    transform(str);
    cout<<"处理后字符串为："<<endl;
    puts(str);
}
