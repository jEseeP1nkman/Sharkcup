#include "head.h"

class privatePage{
    public:
        void openWechat(){
            system("D:\\Wechat\\WeChat.exe");
        }
        void openSteam(){
            system("D:\\steam\\steam.exe");
        }
        void openTelegram(){
            system("D:\\telegram\\Telegram.exe");
        }
        void openChrome(){
            system("\"C:\\Program Files\\Google\\Chrome\\Application\\chrome.exe\"");
        }
        void openTim(){
            system("D:\\tim\\Bin\\TIM.exe");
        }
        void openXiangrikui(){
            system("D:\\Xiangrikui\\SunloginClient\\SunloginClient.exe");
        }
        void openVscode(){
            system("\"C:\\Users\\jEsee\\AppData\\Local\\Programs\\Microsoft VS Code\\Code.exe\"");
        }
        void openDingding(){
            system("D:\\dingding\\DingtalkLauncher.exe");
        }
        void openQimiao(){
            system("D:\\qimiao\\qimiao.exe");
        }
        void openGeek(){
            system("D:\\geek\\geek.exe");
        }
        void openSpotify(){
            system("C:\\Users\\jEsee\\AppData\\Roaming\\Spotify\\Spotify.exe");
        }
        void openDouyu(){
            system("D:\\douyu\\Client\\DouyuLive.exe");
        }
        void openDiscord(){
            system("C:\\Users\\jEsee\\AppData\\Local\\Discord\\app-1.0.9024\\Discord.exe");
        }
        void openCE(){
            system("\"C:\\ProgramData\\Microsoft\\Windows\\Start Menu\\Programs\\Cheat Engine 7.5\\Cheat Engine (64-bit)\"");
        }
        void openGmail(){
            system("start https://mail.google.com/mail/u/0/#inbox");
        }
        void openOutlook(){
            system("start https://outlook.live.com/mail/0/");
        }
        void openEmail(){
            while(1){
                string choice;
                system("cls");
                cout<<gang<<gang<<"Email"<<gang<<gang<<"\n\n";
                cout<<"[����1] ���� Gmail"
                    <<"[����2] ���� Outlook"
                    <<"\n[����0] ����\n:";
                cin>>choice;
                if(choice=="0"){break;}
                else if(choice=="1"){openGmail();}
                else if(choice=="2"){openOutlook();}
            }
        }
        void openEpic(){
            system("\"F:\\Epic\\Epic Games\\Launcher\\Portal\\Binaries\\Win32\\EpicGamesLauncher.exe\"");
        }
        void openV2ray(){
            system("D:\\v2rayN\\v2rayN.exe");
        }
        void openCopilot(){
            system("start https://copilot.microsoft.com/");
        }
        void openSteamTool(){
            system("D:\\steam\\Steamtools.exe");
        }
        void openHuya(){
            system("D:\\huya\\HuyaClient\\huya.exe");
        }

        void mainPage(){
            string choice;
            while(1){
                system("cls");
                system("color 1");
                cout<<gang<<gang<<"˽��ҳ��"<<gang<<gang<<"\n\n";
                cout<<"[����1] �� Wechat\t[����10] �� ������\t[����19] �� Premiere \n"
                    <<"[����2] �� Steam\t[����11] �� Geek \t[����20] �� V2rayN\n"
                    <<"[����3] �� ����\t[����12] �� Spotify\t[����21] �� Copilot\n"
                    <<"[����4] �� Telegram\t[����13] �� ����\t[����22] �� SteamTool\n"
                    <<"[����5] �� TIM\t����14] �� Discord\n"
                    <<"[����6] �� Chrome\t[����15] �� Cheat Engine\n"
                    <<"[����7] �� ���տ�\t[����16] �� Epic\n"
                    <<"[����8] �� VSCode\t[����17] �� VMware\n"
                    <<"[����9] �� ����\t[����18] �� ����\n"
                    <<"\n[����0] �˳� ˽��ҳ��\n:";
                cin>>choice;
                if(choice=="0"){break;}
                else if(choice=="1"||choice=="wechat"){openWechat();}
                else if(choice=="2"||choice=="steam"){openSteam();}
                else if(choice=="3"||choice=="huya"){openHuya();}
                else if(choice=="4"||choice=="telegram"||choice=="tg"){openTelegram();}
                else if(choice=="5"||choice=="tim"||choice=="qq"){openTelegram();}
                else if(choice=="6"||choice=="chrome"||choice=="Chrome"){openChrome();}
                else if(choice=="7"||choice=="xiangrikui"){openXiangrikui();}
                else if(choice=="8"||choice=="vscode"){openVscode();}
                else if(choice=="9"||choice=="dingding"){openDingding();}
                else if(choice=="10"||choice=="qimiao"||choice=="jiasuqi"||choice=="jiashuqi"){openQimiao();}
                else if(choice=="11"||choice=="geek"){openGeek();}
                else if(choice=="12"||choice=="spotify"){openSpotify();}
                else if(choice=="13"||choice=="douyu"){openDouyu();}
                else if(choice=="14"||choice=="discord"){openDiscord();}
                else if(choice=="15"||choice=="cheat engine"||choice=="ce"){openCE();}
                else if(choice=="16"||choice=="epic"||choice=="EPIC"){openEpic();}
                else if(choice=="17"||choice=="vmware"||choice=="VM"){}
                else if(choice=="18"||choice=="email"){openEmail();}
                else if(choice=="19"||choice=="premiere"){}
                else if(choice=="20"||choice=="v2ray"||choice=="v2"){openV2ray();}
                else if(choice=="21"||choice=="ai"){openCopilot();}
                else if(choice=="22"||choice=="steamt"||choice=="steamtool"){openSteamTool();}
            }
        }
};

void mainPrivatePage(){
    privatePage privatePage;
    privatePage.mainPage();

}