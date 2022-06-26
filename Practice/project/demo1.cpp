//
// Created by Jevon on 2022/3/12.
//

#include <iostream>
using namespace std;
int main()
{
    int h, m, s;
    s = 10000;
    h = s / 3600;
    m = (s % 3600) / 60;
    s = s % 3600 % 60;
    cout << "小时：" << h << endl;
    cout << "分钟：" << m << endl;
    cout << "秒：" << s << endl;
    return 0;
}