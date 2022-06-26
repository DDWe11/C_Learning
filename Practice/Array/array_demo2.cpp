//
// Created by Jevon on 2022/3/19.
//
//2.输入10个学生一门课的成绩，分别统计大于平均分的人数和小于60分的人数
#include "iostream"
using namespace std;
int main()
{
    int a[9];
    int sum=0;//需要累加的变量需要注意初始值；
    //输入成绩,并且进行累加
    for(int i=0;i<10;i++)
    {
        cout<<"please input No."<<i+1<<" scores(0~100)"<<endl;
        cin>>a[i];
        sum+=a[i];
    }
    cout<<'\n';

    //计算平均值
    double average = sum/10.0;
    cout<<"The average value of this course is "<<average<<endl;
    cout<<'\n';

    //筛选大于平均分的人数和不及格的人数
    int x=0,y=0;//x用于统计大于平均分的人数，y用于统计不及格的人数
    for(int j=0;j<10;j++)
    {
        if(a[j]>average)
        {
            //cout<<"No. "<<j+1<<" students is higher than the course average"<<endl;
            x+=1;
        }
        if(a[j]<60)
        {
            //cout<<"No. "<<j+1<<" students fail the course"<<endl;
            y+=1;
        }
    }
    cout<<x<<" students are higher than the average score."<<endl;
    cout<<y<<" students failed the course."<<endl;
    return 0;
}
