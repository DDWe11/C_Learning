//
// Created by Jevon on 2022/3/19.
//
//6.求一个5行3列二维数组每行元素的和，并将求出的和按由小到大的次序排序后输出
#include "iostream"
using namespace std;
int main()
{
    int a[5][3];
    int b[5]={0,0,0,0,0};
    cout<<"please input the data into the array A:"<<endl;
    int i,j;
    //输入数据
    for(i=0;i<5;i++)
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    //每行数据累加
    for(i=0;i<5;i++)
        for(j=0;j<3;j++)
        {
            b[i]+=a[i][j];
        }
    //使用冒泡法将数组b中的元素重新排序
    int temp;
    for (i=0;i<4;i++) {
        for (j = 0; j < 4-i ; j++) {
            if (b[j] > b[j + 1]) {
                temp = b[j ];
                b[j ] = b[j+1];
                b[j+1] = temp;
            }
        }
    }
    for(i=0;i<5;i++)
    {
        cout<<b[i]<<'\t';
    }
}
