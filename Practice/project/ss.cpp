#include <iostream>
using namespace std;
void coutcj85s(int* x, int* y, int m);
void coutcj60x(int* x, int* y, int m);
int averagedayudengyu (int* y, int m);
void maopao(int* x, int* y, int m);
int main()
{
    const int n = 5;
    int xh[n], cj[n];
    cout << "请输入学号和成绩：" << endl;
    for (int i = 0; i <=n; i++)
        cin >> xh[i] >> cj[i];
    coutcj85s(xh, cj, n);
    coutcj60x(xh, cj, n);
    averagedayudengyu(cj, n);
    cout << "大于等于平均分的人数为：" << averagedayudengyu<<endl;
    maopao(xh, cj, n);
}
void coutcj85s(int* x, int* y, int m)
{
    cout << "85分以上的学生为：" << endl;
    for (int i = 0; i < m; i++)
        if (y[i] > 85)
            cout << "学号" << x[i] << "成绩" << y[i] << endl;
}
void coutcj60x(int* x, int* y, int m)
{
    cout << "60分以下的学生为：" << endl;
    for (int i = 0; i < m; i++)
        if (y[i] <60)
            cout << "学号" << x[i] << "成绩" << y[i] << endl;
}
int averagedayudengyu(int* y, int m)
{
    int i;
    int average = 0, k = 0;
    for (i = 0; i < m; i++)
        average += y[i];
    average /= m;
    for (i = 0; i < m; i++)
    {
        if (y[i] >= average)
            k++;
        return k;
    }
}
void maopao(int* x, int* y, int m)
{
    cout << "成绩排序结果为:" << endl;
    int i;
    int j=0;
    int temp;
    for (i = 0; i < m - 1; i++)
        if (y[i] < y[i + 1])
        {
            temp = y[j]; y[j] = y[j + 1]; y[j + 1] = temp;
            temp = x[j]; x[j] = x[j + 1]; x[j + 1] = temp;
        }
    for (i = 0; i < m; i++)
        cout << "成绩" << y[i] << "学号" << x[i] << endl;
}
