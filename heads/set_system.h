#include "head.h"

class SharkcupSet_system{
    public:
        void set_system_shutdown() {
            const char* command = "shutdown /s /f /t 0";
            system(command);
            system("cls");
        }
        void set_system_restart() {
            const char* command = "shutdown /r /f /t 0";
            system(command);
            system("cls");
        }
        void set_system_hibernate() {
            const char* command = "shutdown /h /f ";
            system(command);
            system("cls");
        }
        void set_system_notepad() {
            system("notepad");
            system("cls");
        }
        void set_system_magnify() {
            system("magnify");
            system("cls");
        }
        void set_system_taskmgr() {
            system("taskmgr");
            system("cls");
        }
        void set_system_calc() {
            system("calc");
            system("cls");
        }
        void set_system_osk() {
            system("osk");
            system("cls");
        }
        void set_system_mspaint() {
            system("mspaint");
            system("cls");
        }
        void set_system() {
            system("cls");
            while (true) {
                int choice;
                cout << gang << "ϵͳ����" << gang << endl;
                cout << "\n[����1] ǿ�ƹػ�\n"
                    << "[����2] ��������\n"
                    << "[����3] ����ģʽ\n"
                    << "[����4] �� ���±�\n"
                    << "[����5] �� �Ŵ�\n"
                    << "[����6] �� ���������\n"
                    << "[����7] �� ������\n"
                    << "[����8] �� ��Ļ����\n"
                    << "[����9] �� ��ͼ\n"
                    << "\n[����0] �˳�\n";
                cin >> choice;
                if (choice == 0) { system("cls"); break; }
                else if (choice == 1) { set_system_shutdown(); }
                else if (choice == 2) { set_system_restart(); }
                else if (choice == 3) { set_system_hibernate(); }
                else if (choice == 4) { set_system_notepad(); }
                else if (choice == 5) { set_system_magnify(); }
                else if (choice == 6) { set_system_taskmgr(); }
                else if (choice == 7) { set_system_calc(); }
                else if (choice == 8) { set_system_osk(); }
                else if (choice == 9) { set_system_mspaint(); }

            }
        }
};

void main_set_system(){
    SharkcupSet_system set_system;
    set_system.set_system();
}