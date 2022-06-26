//
// Created by Jevon on 2022/4/14.
//
//编写一个函数delchar，从字符串s1中删去去s2中相同的字符，用main函数测试
#include "iostream"
#include "string"

using namespace std;

char delchar(char *p, char s2);

int main() {
    char s1[100];//存放字符串
    char s2;//删除目标字符
    cout << "please input the character string:" << endl;
    cin.getline(s1, 100);
    cout << "Please enter a character to delete" << endl;
    cin.get(s2);
    delchar(s1, s2);
    puts(s1);
}

char delchar(char *s1, char s2) {
    int i;
    int num = strlen(s1);
    for (i = 0; i < num; i++) {
        if (s1[i] == s2) {
            for (int j = i; j < num; j++) {
                s1[j] = s1[j + 1];

            }
            num--;
        }
    }
    return *s1;
}

