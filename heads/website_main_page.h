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
            cout << gang << gang << "��վ�ղ�" << gang << gang << endl;
            cout << "\n[����1] ���� Z-library\t\t[����10] ���� Flingtrainer\n"
                << "[����2] ���� The Pirate Bay\t[����11] ���� Wallhaven\n"
                << "[����3] ���� Unknowncheats\n"
                << "[����4] ���� Nexusmods\n"
                << "[����5] ���� Kickasstorrents\n"
                << "[����6] ���� Encycolorpedia\n"
                << "[����7] ���� Steam\n"
                << "[����8] ���� SteamDB\n"
                << "[����9] ���� ChatGPT\n"
                << "\n[����0] �˳���վ�ղ�\n:";
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