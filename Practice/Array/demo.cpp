//
// Created by Jevon on 2022/3/19.
//
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n=1;
    double pi=0,tmp = 1.0;
    while(n<=pow(10,6)){
        pi = pi + tmp/n;
        n = n+2;
        tmp = -1*tmp;
    }
     //最后一个要小于10的-6次方
    pi = 4*pi;
    cout<<pi<<endl;
    return 0;
}
