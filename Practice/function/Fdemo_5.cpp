//
// Created by Jevon on 2022/4/14.
//
#include <iostream>
using namespace std;
int Abs(int x) {
    return x > 0 ? x : -x; }
float Abs(float x) {
    return x > 0 ? x : -x; }
double Abs(double x) {
    return x > 0 ? x : -x; }
int main()
{
    int a ;
    float b ;
    double c;
    cout<<"请输入一个整数"<<endl;
    cin>>a;
    cout<<"请输入一个单精度（float）"<<endl;
    cin>>b;
    cout<<"请输入一个双精度（double)"<<endl;
    cin>>c;
    cout << "整数的绝对值为;" << Abs(a)<<endl;
    cout << "单浮点数的绝对值为：" << Abs(b)<<endl;
    cout << "双浮点数的绝对值为：" << Abs(c)<<endl;
}
