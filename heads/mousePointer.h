#include "head.h"

string choiceLeftOrRight,choice;
int clickCount;
float clickSpeed;
bool clicked = false;

void OptionMousePoint(){
    string choice;
    while(1){
        system("cls");
        cout<<gang<<"���������"<<gang<<"\n\n";
        if(clicked == true){cout<<"�ѵ�����\n";}
        cout<<"\n[���������] �������\n"
            <<"[����0] �˳�\n:";
        cin>>choice;
        if(choice=="0"){break;}
        system("cls");
        cout<<"����������\n:";
        cin>>clickCount;
        cout<<"���������(��)\n:";
        cin>>clickSpeed;
        clickSpeed*=1000;
        cout<<"[����1] ���� ���\n"
            <<"[����2] ���� �м�\n"
            <<"[����3] ���� �Ҽ�\n"
            <<"\n[����0] �˳�\n:";
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