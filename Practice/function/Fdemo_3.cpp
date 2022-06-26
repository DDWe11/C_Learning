//
// Created by Jevon on 2022/4/14.
//
#include "iostream"
#include "string"
using namespace std;
char delchar(char *p, char s2){
    int i;
    int num=strlen(p);
    for(i=0;i<num;i++){
        if(p[i] == s2){
            for(int j=i;j<num;j++){
                p[j]=p[j + 1];
            }
            num--;
        }
    }
    for(i=0;i<num;i++){
        cout << p[i];
    }
//    puts(p);
}
int main(){
    char s1[100];
    char s2;
    cout<<"请输入字符串"<<endl;
    cin.getline(s1,100);
    cout<<"请输入字符"<<endl;
    cin.get(s2);//cin>>s2;
    delchar(s1,s2);
}
