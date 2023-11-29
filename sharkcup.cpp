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
                cout<<"[输入1] 进入 BMI 计算器\n"
                    <<"[输入2] \"我帮你打开\"\n"
                    <<"[输入3] 进入 系统操作\n"
                    <<"[输入4] 进入 随机数生成\n"
                    <<"[输入5] 进入 下载操作\n"
                    <<"[输入6] 进入 网站收藏\n"
                    <<"[输入7] 进入 鼠标连点器\n"
                    <<"[输入8] 进入 倒计时工具\n"
                    <<"[输入9] 进入 Steam Account\n"
                    <<"\n[输入0] 退出\t[输入-1] 查看软件信息\n:";
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