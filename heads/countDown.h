#include "head.h"

void countDown(){
    int countTime;
    system("cls");
    cout<<gang<<"����ʱ��"<<gang<<"\n\n";
    cout<<"���뵹��ʱʱ��(������)\n:";
    cin>>countTime;
    countTime*=1000;
    cout<<"����ʱ��......\n";
    Sleep(countTime);
    cout<<"����ʱ���!\n";
    Beep(1000,1500);
    
}

void mainCountDown(){
    string choice;
    while(1){
        system("cls");
        cout<<gang<<"����ʱ��"<<gang<<"\n\n";
        cout<<"[���������] ���г���\n"
            <<"[����0] �˳�\n:";
        cin>>choice;
        if(choice=="0"){break;}
        countDown();
    }
}