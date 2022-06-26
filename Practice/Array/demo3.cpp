//
// Created by Jevon on 2022/3/20.
//
//demo1.求从2开始的100个素数
#include "iostream"
#include "cmath"

using namespace std;
int main()
{
    int n,i,m;
    int result[500];//存放素数的
    int f;//辅助判断的比较简单
    int count=0;//用来统计所输出的素数的个数
//因为不知道范围所以把范围设的比较大
    for(n=1;n<=1000;n++){
        f=0;
        i=sqrt(n);//遍历的
        for(m=2;m<=i;m++){//n是否能被m整除
            if(n%m==0){
                break;
            }
        }//这个就是判断素数的一个条件
        if(m>i){
            f=1;
        }
        if(f==1){
            result[count]=n;
            count++;
        }
    }
    for(i=1;i<=100;i++){
        if(i%10==0)
            cout<<result[i]<<'\n';
        else
            cout<<result[i]<<'\t';
    }
    return 0;
}
//n=18
//i=4；