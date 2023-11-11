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
                cout << gang << "系统操作" << gang << endl;
                cout << "\n[输入1] 强制关机\n"
                    << "[输入2] 重新启动\n"
                    << "[输入3] 休眠模式\n"
                    << "[输入4] 打开 记事本\n"
                    << "[输入5] 打开 放大镜\n"
                    << "[输入6] 打开 任务管理器\n"
                    << "[输入7] 打开 计算器\n"
                    << "[输入8] 打开 屏幕键盘\n"
                    << "[输入9] 打开 画图\n"
                    << "\n[输入0] 退出\n";
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