//
// Created by Jevon on 2022/5/13.
//
#include<iostream>
#include<string>
using namespace std;
class person {
    int no;
    char name[10];
public:
    person(int n, const char* p){
        no = n; strcpy(name, p);
    }
    void display() {
        cout << no << " " << name << endl;
    }
};
class student :public person {
    char depart[10];
    int degree;
public:
    student(int n, const char* s, const char* d, int c) :person(n, s)
    {
        strcpy(depart, d); degree = c;
    }
    void display()
    {
        cout << "学号和姓名："; person::display();
        cout << "班级：" << depart << "  成绩：" << degree << endl;
    }
};
class teacher :public person {
    char depart[50], prof[50];
public:
    teacher(int n, const char* s, const char* d, const char* p) :person(n, s)
    {
        strcpy(depart, d); strcpy(prof, p);
    }
    void display()
    {
        cout << "编号和姓名："; person::display();
        cout << "部门：" << depart << "  职称：" << prof << endl;
    }
};
int main()
{
    student a1(025, "张三", "电子技术班", 85);
    a1.display();
    teacher t1(316, "刘强", "计算机系", "教授");
    t1.display();
}
