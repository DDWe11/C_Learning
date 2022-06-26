//
// Created by Jevon on 2022/3/19.
//
#include <iostream>
using namespace std;
 long f( int n)
{
    if(n==0||n==1)
        return (1);
    else
        return(f(n-2)+f(n-1));

}
int main()
{
    int n=40;
    for(int i=0;i<40;i++) {
        if(i%8==0)
            cout<<f(i)<<'\n';
        else
            cout << f(i)<<'\t';
    }
}
