//
// Created by Jevon on 2022/4/14.
//
#include <iostream>
using namespace std;
//int gcd(int m, int n);
//int lcm(int m, int n);

int gcd (int m, int n)
{
    int r;
    r = m % n;
    while (r) {
        m = n;
        n = r;
        r = m % n;
    }
    return n;
}
int lcm(int m, int n)
{
    int x;
    x = gcd(m, n);
    return m * n / x;

}
int main()
{
    int a, b;
    cout << "请任意输入两个不同的正整数" << endl;
    cin >> a >> b;
    cout << "这两个数的最大公约数是：" << gcd(a,b) << endl;
    cout << "这两个数的最小公倍数是：" << lcm(a,b) << endl;
    return 0;
}