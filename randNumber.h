#include "head.h"

void mainRandNumber(){
    int srand(time(nullptr));
    string choice;
    int maxNum;
    while(1){
        system("cls");
        cout<<gang<<gang<<"���������"<<gang<<gang<<"\n\n";
        cout<<"�����������ֵ\n:";
        cin>>maxNum;
        int randNumber = rand() % maxNum;
        cout<<"�����Ϊ: "<<randNumber<<"\n";
        cout<<"[����1] ��������\n"
            <<"[����0] �˳�����\n:";
        cin>>choice;
        if(choice=="0"){break;}
        else if(choice=="1"){continue;}
    }
}