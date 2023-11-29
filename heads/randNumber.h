#include "head.h"

void mainRandNumber(){
    int srand(time(nullptr));
    string choice;
    int maxNum;
    while(1){
        system("cls");
        cout<<gang<<gang<<"随机数生成"<<gang<<gang<<"\n\n";
        cout<<"输入数字最大值\n:";
        cin>>maxNum;
        int randNumber = rand() % maxNum;
        cout<<"随机数为: "<<randNumber<<"\n";
        cout<<"[输入1] 继续生成\n"
            <<"[输入0] 退出生成\n:";
        cin>>choice;
        if(choice=="0"){break;}
        else if(choice=="1"){continue;}
    }
}