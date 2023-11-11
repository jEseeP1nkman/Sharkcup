#include "head.h"

class SharkcupDownload_main_page{
    public:
        void download_Everything() {
            system("cls");
            system("start https://www.voidtools.com/Everything-1.4.1.1024.x86-Setup.exe");
        }
        void download_CheatEngine() {
            system("cls");
            system("start https://d1vdn3r1396bak.cloudfront.net/installer/0096537/23476244722468");
        }
        void download_steam() {
            system("cls");
            system("start https://cdn.cloudflare.steamstatic.com/client/installer/SteamSetup.exe");
        }
        void download_geek() {
            system("cls");
            system("start https://geekuninstaller.com/geek.7z");
        }
        void download_7zip() {
            system("cls");
            system("start https://www.7-zip.org/a/7z2301-x64.exe");
        }
        void download_potplayer() {
            system("cls");
            system("start https://t1.daumcdn.net/potplayer/PotPlayer/Version/Latest/PotPlayerSetup64.exe");
        }
        void download_main_page() {
            while (true) {
                system("cls");
                string choice;
                cout << gang << "下载操作" << gang << endl;
                cout << "[输入1] 下载 Geek\n"
                    << "[输入2] 下载 7zip\n"
                    << "[输入3] 下载 Potplayer\n"
                    << "[输入4] 下载 Steam\n"
                    << "[输入5] 下载 Everything\n"
                    << "[输入6] 下载 Cheat Engine\n"
                    << "\n[输入0] 退出操作\n";
                cin >> choice;
                if (choice == "0") { system("cls"); break; }
                else if (choice == "1") { download_geek(); }
                else if (choice == "2") { download_7zip(); }
                else if (choice == "3") { download_potplayer(); }
                else if (choice == "4") { download_steam(); }
                else if (choice == "5") { download_Everything(); }
                else if (choice == "6") { download_CheatEngine(); }
            }
        }

};

void main_download_main_page(){
    SharkcupDownload_main_page download_main_page;
    download_main_page.download_main_page();
}