//
// Created by Jevon on 2022/3/27.
//

#include "iostream"
using namespace std;
int main()
{
    int a=2;
    int b;
    b=2+(a+=a++,a+5,++a);
    cout<<b;
}