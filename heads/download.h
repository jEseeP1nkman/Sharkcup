#include "head.h"

void mainDownload(){
    string choice;
    while(1){
        system("cls");
        cout<<gang<<gang<<"���ز���"<<gang<<gang<<"\n\n";
        cout<<"[����1] ���� Geek\t[����10] ���� V2rayN\n"
            <<"[����2] ���� 7zip\t[����11] ���� telegram\n"
            <<"[����3] ���� Potplayer\n"
            <<"[����4] ���� Steam\n"
            <<"[����5] ���� Everything\n"
            <<"[����6] ���� Epic\n"
            <<"[����7] ���� ����\n"
            <<"[����8] ���� ����\n"
            <<"[����9] ���� Wechat\n"
            <<"\n[����0] �˳�����\n:";
        cin>>choice;
        if(choice=="0"){break;}
        else if(choice=="1" || choice=="geek"){system("start https://geekuninstaller.com//geek.7z");}
        else if(choice=="2"|| choice=="7zip"){system("start https://www.7-zip.org/a/7z2301-x64.exe");}
        else if(choice=="3"|| choice=="potplayer"){system("start https://t1.daumcdn.net/potplayer/PotPlayer/Version/Latest/PotPlayerSetup64.exe");}
        else if(choice=="4"|| choice=="steam"){system("start https://cdn.akamai.steamstatic.com/client/installer/SteamSetup.exe");}
        else if(choice=="5"|| choice=="everything"){system("start https://www.voidtools.com/Everything-1.4.1.1024.x64-Setup.exe");}
        else if(choice=="6"|| choice=="epic"){system("start https://launcher-public-service-prod06.ol.epicgames.com/launcher/api/installer/download/EpicGamesLauncherInstaller.msi");}
        else if(choice=="7"|| choice=="douyu"){system("start https://sta-op.douyucdn.cn/dypc-client/pkg/Douyu_Live_PC_Client/20231030170648254/DouyuLive_8.6.6.9_Server_1.1.1.4.exe");}
        else if(choice=="8"|| choice=="huya"){system("start https://download.huya.com/huyapc/install/HuyaClientInstall.exe");}
        else if(choice=="9"|| choice=="wechat"){system("start https://dldir1v6.qq.com/weixin/Windows/WeChatSetup.exe");}
        else if(choice=="10"|| choice=="v2ray"|| choice=="V2rayN"|| choice=="v2rayN"){system("start https://github.com/2dust/v2rayN/releases/download/6.23/v2rayN-With-Core.zip");}
        else if(choice=="11" || choice=="tg"|| choice=="telegram"){system("start https://www.telegram.org/dl/desktop/win64");}
    
    }
}