#include "head.h"

class SharkcupHelpMeOpen{
    public:
        void helpMeOpen() {
            while (true) {
                system("cls");
                string url, command;
                cout << gang << "我帮你打开" << gang << endl;
                cout << "[输入0] 退出\n";
                cout << "Example( www.google.com )\n";
                cout << "Example( D:/example.txt )\n";
                cout << "Example( cmd )\n:";
                cin >> url;
                if (url == "0") { system("cls"); break; }
                cout << "正在打开中..." << endl;
                command = "start " + url;
                system(command.c_str());
            }
        }
};

void main_helpMeOpen(){
    SharkcupHelpMeOpen helpMeOpen;
    helpMeOpen.helpMeOpen();
}