#include "head.h"

void mainSystem(){
    string choice;
    while(1){
        system("cls");
        cout<<gang<<gang<<"ϵͳ����"<<gang<<gang<<"\n\n";
        cout<<"[����1] ���� ǿ�ƹػ�\n"
            <<"[����2] ���� ��������\n"
            <<"[����3] ���� ����ģʽ\n"
            <<"[����4] �� ���±�\n"
            <<"[����5] �� �Ŵ�\n"
            <<"[����6] �� ���������\n"
            <<"[����7] �� ������\n"
            <<"[����8] �� ��Ļ����\n"
            <<"[����9] �� ��ͼ����\n"
            <<"\n[����0] �˳�\n";
        cin>>choice;
        if(choice=="0"){break;}
        else if(choice=="1"){
            system("shutdown -s -t 0");
        }
        else if(choice=="2"){
            system("shutdown -r -t 0");
        }
        else if(choice=="3"){
            system("rundll32.exe powrprof.dll,SetSuspendState 0,1,0");
        }
        else if(choice=="4"){
            system("notepad");
        }
        else if(choice=="5"){
            system("Magnify");
        }
        else if(choice=="6"){
            system("taskmgr");
        }
        else if(choice=="7"){
            system("calc");
        }
        else if(choice=="8"){
            system("osk");
        }
        else if(choice=="8"){
            system("mspaint");
        }
    }
}