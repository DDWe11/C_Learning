//
// Created by Jevon on 2022/3/12.
//
#include "iostream"
using namespace std;
int main()
{
    int a=10000;
    int h,min,sec;//h-hour;min-minutes;sec-seconds
    sec=a%60;
    min=a/60%60;
    h=a/60/60;
    cout<<h<<"h"<<" "<<min<<"min"<<" "<<sec<<"sec"<<endl;
    return 0;
}
