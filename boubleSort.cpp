#include <iostream>

using namespace std;
int a;
int sum;
int main(){
    cout<<"輸入陣列長度: ";
    cin>>a;
    int b[a];
    for(int i=0;i<a;i++){
        cout<<"輸入 陣列["<<i<<"] 的值: ";
        cin>>b[i];
    }
    cout<<"輸入完成 開始排序..."<<endl;
    for(int i=a;i>=0;i--){
        for(int j=0;j<i;j++){
            if(b[j]>b[j+1]){
                sum=b[j];
                b[j]=b[j+1];
                b[j+1]=sum;
            }
        }
    }
    cout<<"分類結束..."<<endl;
    cout<<"{";
    for(int i=0;i<a;i++){
        cout<<b[i]<<" ,";
    }
    cout<<"}";
    return 0;
}
