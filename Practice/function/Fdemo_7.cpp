//
// Created by Jevon on 2022/4/15.
//
#include<iostream>
#define   N 100
using namespace std;

int find(char a[], char ch);

int main(){
//    int const N = 100;
    char a1[N] = "My name is Olivia";
    char ch1;
    cout << a1 <<endl;
    int pos;
    cout << "请输入要查找的字符：" <<endl;
    cin >>ch1;
    pos = find(a1, ch1);
    if (pos != 0)
    cout << ch1 << "第一次出现的位置为" << pos <<endl;
    else cout << "没有该字符" <<endl;
}

int find(char a[], char ch) {
    for (int i = 0; a[i] != '\0'; i++)
        if (a[i] == ch)
            return i + 1;
}
