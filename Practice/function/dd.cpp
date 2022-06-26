//
// Created by Jevon on 2022/6/13.
//
#include "iostream"
using namespace std;
int main(){
//    char* ch_ptr="abcd";
//    char* src="efdgijk";
//    printf("%x\n%x\n",ch_ptr,src);
//    int a=src-ch_ptr;
//    printf("%d\n",a);

    int a = 10000;
    int b = 20;

    int *p1 = &a;
    int *p2 = &b;

    int num = p1 - p2;
   printf("p1= %x\n", p1);
    printf("p2= %x\n", p2);
     printf("num的地址=%x, num=%d\n", &num, num);
}
