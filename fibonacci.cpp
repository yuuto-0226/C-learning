#include <iostream>
#include <math.h>

using namespace std;

int fib(int n){
    if(n==0)return 0;
    if(n==1)
        return 1;
    else
        return fib(n-1)+fib(n-2);
}

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"fib("<<i<<") ="<<fib(i)<<endl;
    }
    return 0;
}

//求n項費氏數列
//遞迴函式的練習
