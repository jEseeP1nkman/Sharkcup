#include "heads/head.h"
#include "heads/sharkcupInfomation.h"
#include "heads/privatePage.h"
#include "heads/bmi.h"
#include "heads/helpYou.h"
#include "heads/system.h"
#include "heads/steamAccount.h"
#include "heads/randNumber.h"
#include "heads/download.h"
#include "heads/mousePointer.h"
#include "heads/countDown.h"
#include "heads/website.h"

class sharkcup{
    public:
        void sharkcupMain(){
            string choice;
            while(1){
                system("cls");
                system("color 2");
                cout<<gang<<"Sharkcup"<<gang<<"\n\n";
                cout<<"[����1] ���� BMI ������\n"
                    <<"[����2] \"�Ұ����\"\n"
                    <<"[����3] ���� ϵͳ����\n"
                    <<"[����4] ���� ���������\n"
                    <<"[����5] ���� ���ز���\n"
                    <<"[����6] ���� ��վ�ղ�\n"
                    <<"[����7] ���� ���������\n"
                    <<"[����8] ���� ����ʱ����\n"
                    <<"[����9] ���� Steam Account\n"
                    <<"\n[����0] �˳�\t[����-1] �鿴�����Ϣ\n:";
                cin>>choice;
                if(choice=="0"||choice=="quit"){break;}
                else if(choice=="-1"||choice=="info"){mainSharkcupInfomation();}
                else if(choice=="i"||choice=="private"){mainPrivatePage();}
                else if(choice=="1"||choice=="bmi"){mainBmi();}
                else if(choice=="2"||choice=="helpme"){mainHelpYou();}
                else if(choice=="3"||choice=="system"){mainSystem();}
                else if(choice=="4"||choice=="randnum"){mainRandNumber();}
                else if(choice=="5"||choice=="download"){mainDownload();}
                else if(choice=="6"||choice=="web"){main_website_main_page();}
                else if(choice=="7"||choice=="mouse"){mainMousePoint();}
                else if(choice=="8"||choice=="count"){mainCountDown();}
                else if(choice=="9"||choice=="steam"){mainSteamAccount();}
            }
            
        }
};



int main(){
    system("cls");
    system("color 2");

    sharkcup sharkcup;
    sharkcup.sharkcupMain();
}