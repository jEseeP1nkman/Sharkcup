#include "head.h"

class SharkcupWebsite_main_page{
    public:
    void website_ZLibrary() {
        system("cls");
        system("start https://zh.zlib-articles.se/");
    }
    void website_ThePirateBay() {
        system("cls");
        system("start https://tpb.party/");
    }
    void website_Unknowncheats() {
        system("cls");
        system("start https://www.unknowncheats.me/forum/index.php");
    }
    void website_Nexusmods() {
        system("cls");
        system("start https://www.nexusmods.com/");
    }
    void website_Kickasstorrents() {
        system("cls");
        system("start https://kickasstorrents.to/");
    }
    void website_Encycolorpedia() {
        system("cls");
        system("start https://encycolorpedia.com/");
    }
    void website_Steam() {
        system("cls");
        system("start https://store.steampowered.com/");
    }
    void website_SteamDB() {
        system("cls");
        system("start https://steamdb.info/");
    }
    void website_ChatGPT() {
        system("cls");
        system("start https://chat.openai.com/");
    }
    void website_Flingtrainer() {
        system("cls");
        system("start https://flingtrainer.com/");
    }
    void website_wallhaven() {
        system("cls");
        system("start https://wallhaven.cc/");
    }
    void website_main_page() {
        system("cls");
        while (true) {
            string choice;
            cout << gang << gang << "网站收藏" << gang << gang << endl;
            cout << "\n[输入1] 进入 Z-library\t\t[输入10] 进入 Flingtrainer\n"
                << "[输入2] 进入 The Pirate Bay\t[输入11] 进入 Wallhaven\n"
                << "[输入3] 进入 Unknowncheats\n"
                << "[输入4] 进入 Nexusmods\n"
                << "[输入5] 进入 Kickasstorrents\n"
                << "[输入6] 进入 Encycolorpedia\n"
                << "[输入7] 进入 Steam\n"
                << "[输入8] 进入 SteamDB\n"
                << "[输入9] 进入 ChatGPT\n"
                << "\n[输入0] 退出网站收藏\n:";
            cin >> choice;
            if (choice == "0") { system("cls"); break; }
            else if (choice == "1") { website_ZLibrary(); }
            else if (choice == "2") { website_ThePirateBay(); }
            else if (choice == "3") { website_Unknowncheats(); }
            else if (choice == "4") { website_Nexusmods(); }
            else if (choice == "5") { website_Kickasstorrents(); }
            else if (choice == "6") { website_Encycolorpedia(); }
            else if (choice == "7") { website_Steam(); }
            else if (choice == "8") { website_SteamDB(); }
            else if (choice == "9") { website_ChatGPT(); }
            else if (choice == "10") { website_Flingtrainer(); }
            else if (choice == "11") { website_wallhaven(); }

        }
    }
};

void main_website_main_page(){
    SharkcupWebsite_main_page website_main_page;
    website_main_page.website_main_page();
}