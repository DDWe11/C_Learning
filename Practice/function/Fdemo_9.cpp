//
// Created by Jevon on 2022/4/15.
//
#include "iostream"
#include <algorithm>

using namespace std;

void Over_85(double *grades);

void Under_60(double *grades);

int Statistics(double *grades);

void Print(double *grades);

int main() {
    int i;
    double scores[40];
//    {100,99,98,100,95,79, 87 ,100 ,60 ,40
//    ,59 ,58 ,57 ,69 ,100,
//    58 ,59 ,96 ,95 ,92,
//    89 ,75 ,85 ,87 ,88,
//    43 ,47 ,81 ,80 ,58};//初始化元素——接收成绩
//    //输入成绩
    cout << "请输入学生的成绩（1-30）:" << endl;
    for (i = 0; i < 30; i++) {
        cin >> scores[i];
    }
    cout << "成绩超过85分有以下同学：" << endl;
    Over_85(scores);
    cout << "成绩低于60分有以下同学：" << endl;
    Under_60(scores);

    cout << "成绩高于平均分的同学一共有" << Statistics(scores) << "名同学\n" << endl;

    Print(scores);
    return 0;
}

void Over_85(double *grades) {
    for (int i = 0; i < 30; i++) {
        if (grades[i] >= 85) {
            cout << "学号" << "[" << i + 1 << "] : " << grades[i] << "\t" << endl;
        }
    }
}

void Under_60(double *grades) {
    for (int i = 0; i < 30; i++) {
        if (grades[i] < 60) {
            cout << "学号" << "[" << i + 1 << "] : " << grades[i] << "\t" << endl;
        }
    }
}

int Statistics(double *grades) {
    int i, sum = 0;
    int num = 0;
    double average;
    for (i = 0; i <= 30; i++) {
        sum += grades[i];
    }
    average = sum / 30.0;
    for (i = 1; i <= 30; i++) {
        if (grades[i] >= average) {
            num++;
        }
    }
    return num;
}

void Print(double *grades) {
    sort(grades, grades + 30, greater<int>());
    for (int i = 0; i < 30; i++) {
        cout << "名次[" << i + 1 << "] : " << grades[i] << "    ";
        if ((i + 1) % 5 == 0) {
            cout << endl;
        }

    }

}
