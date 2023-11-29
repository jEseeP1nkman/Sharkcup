#include "head.h"

string choiceLeftOrRight,choice;
int clickCount;
float clickSpeed;
bool clicked = false;

void OptionMousePoint(){
    string choice;
    while(1){
        system("cls");
        cout<<gang<<"鼠标连点器"<<gang<<"\n\n";
        if(clicked == true){cout<<"已点击完成\n";}
        cout<<"\n[输入任意键] 进入程序\n"
            <<"[输入0] 退出\n:";
        cin>>choice;
        if(choice=="0"){break;}
        system("cls");
        cout<<"输入点击次数\n:";
        cin>>clickCount;
        cout<<"输入点击间隔(秒)\n:";
        cin>>clickSpeed;
        clickSpeed*=1000;
        cout<<"[输入1] 运行 左键\n"
            <<"[输入2] 运行 中键\n"
            <<"[输入3] 运行 右键\n"
            <<"\n[输入0] 退出\n:";
        cin>>choiceLeftOrRight;
        if(choice=="0"){break;}
        else if(choice=="1"){
            while(1){
                clicked=true;
                mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);
                mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);
                clickCount--;
                if(clickCount==0){break;}
                Sleep(clickSpeed);
            }
        }
        else if(choice=="2"){
            while(1){
                clicked=true;
                mouse_event(MOUSEEVENTF_RIGHTDOWN,0,0,0,0);
                mouse_event(MOUSEEVENTF_RIGHTUP,0,0,0,0);
                clickCount--;
                if(clickCount==0){break;}
                Sleep(clickSpeed);
            }
        }
        else if(choice=="3"){
            while(1){
                clicked=true;
                mouse_event(MOUSEEVENTF_MIDDLEDOWN,0,0,0,0);
                mouse_event(MOUSEEVENTF_MIDDLEUP,0,0,0,0);
                clickCount--;
                if(clickCount==0){break;}
                Sleep(clickSpeed);
            }
        }
    }
}

void mainMousePoint(){
    OptionMousePoint();
}