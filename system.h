#include "head.h"

void mainSystem(){
    string choice;
    while(1){
        system("cls");
        cout<<gang<<gang<<"系统操作"<<gang<<gang<<"\n\n";
        cout<<"[输入1] 进行 强制关机\n"
            <<"[输入2] 进行 重新启动\n"
            <<"[输入3] 进行 休眠模式\n"
            <<"[输入4] 打开 记事本\n"
            <<"[输入5] 打开 放大镜\n"
            <<"[输入6] 打开 任务管理器\n"
            <<"[输入7] 打开 计算器\n"
            <<"[输入8] 打开 屏幕键盘\n"
            <<"[输入9] 打开 画图工具\n"
            <<"\n[输入0] 退出\n";
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