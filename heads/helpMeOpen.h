#include "head.h"

class SharkcupHelpMeOpen{
    public:
        void helpMeOpen() {
            while (true) {
                system("cls");
                string url, command;
                cout << gang << "�Ұ����" << gang << endl;
                cout << "[����0] �˳�\n";
                cout << "Example( www.google.com )\n";
                cout << "Example( D:/example.txt )\n";
                cout << "Example( cmd )\n:";
                cin >> url;
                if (url == "0") { system("cls"); break; }
                cout << "���ڴ���..." << endl;
                command = "start " + url;
                system(command.c_str());
            }
        }
};

void main_helpMeOpen(){
    SharkcupHelpMeOpen helpMeOpen;
    helpMeOpen.helpMeOpen();
}