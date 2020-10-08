#include <iostream>
#include <vector>

using namespace std;

int line(){
    cout<<endl;
    cout<<"---------------分隔線---------------"<<endl;
    cout<<endl;
}

int main(){
    int n;
    vector<int> v;  //以建構元建立變數

    cout<<"輸入: ";
    cin>>n;

    line();

    for(int i=1;i<=n;i++){
        v.push_back(i); //新增元素至v(加到最後面)
        cout<<"[自尾端新增"<<i<<"] =>";
        for(int j=0;j<v.size();j++){    //印出
            cout<<" "<<v[j];
        }
        cout<<endl;
    }

    line();

    cout<<"讀取vector元素個數 = "<<v.size()<<endl;
    cout<<"讀取vector第一個元素 = "<<v.front()<<endl;
    cout<<"讀取vector最後一個元素 = "<<v.back()<<endl;

    line();

    for(int i=n;i>=1;i--){
        v.pop_back();
        cout<<"[自尾端刪除"<<i<<"] =>";
        for(int j=0;j<v.size();j++){    //印出
            cout<<" "<<v[j];
        }
        cout<<endl;
    }

    line();

    cout<<"確認vector是否為空 =>"<<v.empty()<<endl;

    return 0;
}

//vector函式使用練習
