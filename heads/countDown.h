#include "head.h"

void countDown(){
    int countTime;
    system("cls");
    cout<<gang<<"倒计时器"<<gang<<"\n\n";
    cout<<"输入倒计时时间(秒钟制)\n:";
    cin>>countTime;
    countTime*=1000;
    cout<<"倒计时中......\n";
    Sleep(countTime);
    cout<<"倒计时完成!\n";
    Beep(1000,1500);
    
}

void mainCountDown(){
    string choice;
    while(1){
        system("cls");
        cout<<gang<<"倒计时器"<<gang<<"\n\n";
        cout<<"[输入任意键] 运行程序\n"
            <<"[输入0] 退出\n:";
        cin>>choice;
        if(choice=="0"){break;}
        countDown();
    }
}