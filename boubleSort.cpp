#include <iostream>

using namespace std;
int a;
int sum;
int main(){
    cout<<"��J�}�C����: ";
    cin>>a;
    int b[a];
    for(int i=0;i<a;i++){
        cout<<"��J �}�C["<<i<<"] ����: ";
        cin>>b[i];
    }
    cout<<"��J���� �}�l�Ƨ�..."<<endl;
    for(int i=a;i>=0;i--){
        for(int j=0;j<i;j++){
            if(b[j]>b[j+1]){
                sum=b[j];
                b[j]=b[j+1];
                b[j+1]=sum;
            }
        }
    }
    cout<<"��������..."<<endl;
    cout<<"{";
    for(int i=0;i<a;i++){
        cout<<b[i]<<" ,";
    }
    cout<<"}";
    return 0;
}
