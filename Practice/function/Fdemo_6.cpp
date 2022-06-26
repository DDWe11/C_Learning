//
// Created by Jevon on 2022/4/14.
//
#include<iostream>
using namespace std;
template<typename T>
T Abs(T x)
{
    if (x >= 0)
        return x;
    else
        return -x;
}
int main()
{
    double c;
    cout << "请输入一个数" << endl;
    cin >> c;
    cout << "绝对值为：" << Abs(c)<<endl;
    return 0;
}


