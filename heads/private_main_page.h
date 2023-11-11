#include "head.h"

class SharkcupPrivate_main_page{
    public:
    void open_wechat() {
        system("cls");
        system("start F:\\Wechat\\WeChat.exe");
    }
    void open_Steam() {
        system("cls");
        system("start F:\\steam\\steam.exe");
    }
    void open_ClashForWindows() {
        system("cls");
        const char* command = "start F:\\Clash_for_Windows\\Clash_for_Windows.exe";
        system(command);
    }
    void open_Telegram() {
        system("cls");
        system("start F:\\Telegram\\Telegram_Desktop\\Telegram.exe");
    }
    void open_TIM() {
        system("cls");
        system("start F:\\Tim\\Bin\\TIM.exe");
    }
    void open_Chrome() {
        system("cls");
        system("start F:\\Chrome\\chrome.exe.lnk");
    }
    void open_Xiangrikui() {
        system("cls");
        system("start F:\\Xiangrikui\\SunloginClient\\SunloginClient.exe");
    }
    void open_VSCode() {
        system("cls");
        system("\"C:\\Users\\jEsee\\AppData\\Local\\Programs\\Microsoft VS Code\\Code.exe\"");
    }
    void open_Dingding() {
        system("cls");
        system("\"F:\\Ding Ding\\DingDing\\DingtalkLauncher.exe\"");
    }
    void open_Qimiao() {
        system("cls");
        system("F:\\Qimiao_Jiasuqi\\QiMiao_Acc\\qimiao.exe");
    }
    void open_Geek() {
        system("cls");
        system("F:\\geek.exe");
    }
    void open_Spotify() {
        system("cls");
        system("C:\\Users\\jEsee\\AppData\\Roaming\\Spotify\\Spotify.exe");
    }
    void open_Douyu() {
        system("cls");
        system("F:\\Douyu\\DouyuPCClient\\Client\\DouyuLive.exe");
    }
    void open_Discord() {
        system("cls");
        system("C:\\Users\\jEsee\\AppData\\Local\\Discord\\app-1.0.9018\\Discord.exe");
    }
    void open_CheatEngine() {
        system("cls");
        system("\"C:\\Program Files\\Cheat Engine 7.5\\cheatengine-x86_64.exe\"");
    }
    void open_Epic() {
        system("cls");
        system("\"F:\\Epic\\Epic Games\\Launcher\\Portal\\Binaries\\Win32\\EpicGamesLauncher.exe\"");
    }
    void open_VMware() {
        system("cls");
        system("F:\\VMware\\vmware.exe");
    }
    void open_email_gmail() {
        system("start https://mail.google.com/mail/u/0/#inbox");
    }
    void open_email_outlook() {
        system("start https://outlook.live.com/mail/0/");
    }
    void open_email() {
        while (true) {
            system("cls");
            string choice;
            cout << gang << "电子邮箱" << gang << endl;
            cout << "\n[输入1] 打开 Gmail\n"
                << "[输入2] 打开 Outlook\n"
                << "[输入0] 退出邮箱\n:";
            cin >> choice;
            if (choice == "0") { system("cls"); break; }
            else if (choice == "1") { open_email_gmail(); }
            else if (choice == "2") { open_email_outlook(); }
        }
    }
    void open_pr(){
        system("cls");
        system("\"F:\\Pr\\Adobe Premiere Pro 2023\\Adobe Premiere Pro.exe\"");
    }
    void open_V2rayN(){
        system("F:\\v2rayN\\v2rayN.exe");
    }
    void private_main_page() {
        while (true) {
            system("color 1");
            string choice;
            system("cls");
            cout << gang << gang <<gang<< "私人页面" << gang <<gang<< gang << endl;
            cout << "\n[输入1] 打开 Wechat\t[输入10] 打开 加速器\t[输入19] 打开 Premiere\n"
                <<  "[输入2] 打开 Steam\t[输入11] 打开 Geek\t[输入20] 打开 V2rayN\n"
                <<  "[输入3] 打开 Clash\t[输入12] 打开 Spotify\n"
                <<  "[输入4] 打开 Telegram\t[输入13] 打开 斗鱼\n"
                <<  "[输入5] 打开 TIM\t[输入14] 打开 Discord\n"
                <<  "[输入6] 打开 Chrome\t[输入15] 打开 Cheat Engine\n"
                <<  "[输入7] 打开 向日葵\t[输入16] 打开 Epic\n"
                <<  "[输入8] 打开 VSCode\t[输入17] 打开 VMware\n"
                <<  "[输入9] 打开 钉钉\t[输入18] 打开 邮箱\n"
                << "\n[输入0] 退出私人页面\n:";
            cin >> choice;
            if (choice == "0") { system("cls"); system("color 2"); break; }
            else if (choice == "1" || choice == "wechat") { open_wechat(); }
            else if (choice == "2" || choice == "steam") { open_Steam(); }
            else if (choice == "3" || choice == "clash") { open_ClashForWindows(); }
            else if (choice == "4" || choice == "telegram") { open_Telegram(); }
            else if (choice == "5" || choice == "tim") { open_TIM(); }
            else if (choice == "6" || choice == "chrome") { open_Chrome(); }
            else if (choice == "7" || choice == "xiangrikui") { open_Xiangrikui(); }
            else if (choice == "8" || choice == "vscode") { open_VSCode(); }
            else if (choice == "9" || choice == "dingding") { open_Dingding(); }
            else if (choice == "10" || choice == "qimiao") { open_Qimiao(); }
            else if (choice == "11" || choice == "geek") { open_Geek(); }
            else if (choice == "12" || choice == "spotify") { open_Spotify(); }
            else if (choice == "13" || choice == "douyu") { open_Douyu(); }
            else if (choice == "14" || choice == "discord") { open_Discord(); }
            else if (choice == "15" || choice == "ce") { open_CheatEngine(); }
            else if (choice == "16" || choice == "epic") { open_Epic(); }
            else if (choice == "17" || choice == "vm" || choice == "vmware") { open_VMware(); }
            else if (choice == "18" || choice == "email" || choice == "mail") { open_email(); }
            else if (choice == "19" || choice == "pr"|| choice == "PR"|| choice == "Pr") { open_pr(); }
            else if ( choice == "gmail") { open_email_gmail(); }
            else if ( choice == "outlook") { open_email_outlook(); }
            else if ( choice == "v2rayn"||choice=="v2"||choice=="V2"||choice=="V2ray"||choice=="V2rayN") { open_V2rayN(); }
        }
    }
};

void main_private_main_page(){
    SharkcupPrivate_main_page private_main_page;
    private_main_page.private_main_page();
}