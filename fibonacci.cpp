#include <iostream>
#include <math.h>

using namespace std;

int temp[100000000];
int fib(int n){
    int result;
    result=temp[n];
    if(result==0){
        if(n==0)return 0;
        if(n==1)
            return 1;
        else
            return fib(n-1)+fib(n-2);
    }
    return result;
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
