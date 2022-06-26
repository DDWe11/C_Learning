//
// Created by Jevon on 2022/4/14.
//
#include "iostream"
#include "string"
#include "cctype"

using namespace std;

char f(char *p,double b);
int main(){
    double n(0);//n=0;
    double a;
    char s[80];
    cout<<"请输入一串字符"<<endl;
    cin.getline(s,80);
    int num= strlen(s);
    n= f(s,num);
    a=n/num*100;
    puts(s);
    cout<<"字符长为"<<num<<"数字长为"<<n<<endl;
    cout<<"百分比="<<a<<"%"<<endl;
}
char f(char *p,double b){
    int i;
    double n(0);
    for(i=0;i<b;i++){
        if(isdigit(p[i])){
            n++;
        }
    }
    return n;
}
