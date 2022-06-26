//4.输入一个3X3的二维数组，分别求主对角线元素的和及次对角线元素和
#include <iostream>
using namespace std;
int main()
{
    int a[3][3];
    int i,j;//控制循环变量
    int sum_1=0,sum_2=0;//sum_1主对角线和，sum_2次对角线和
    cout<<"请输入数据"<<endl;
    for(i=0;i<3;i++)
        for (j = 0; j < 3; j++)
            cin >> a[i][j];

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            if(i==j)
            {
                sum_1+=a[i][j];
            }
            if(i+j==2)
            {
                sum_2+=a[i][j];
            }
        }
    cout<<"主对角线和为"<<sum_1<<endl;
    cout<<"次对角线和为"<<sum_2<<endl;
    return 0;
}
