#include "head.h"
#include "version.h"

class SharkcupInfomation{
    private:
        string gang = "----------";
    public:
        void appInfo() {
            while (true) {
                system("cls");
                string choice;
                cout << gang << "The infomation of Sharkcup" << gang << endl;
                cout << "\nSharkcup 官方中文译名 \"鲨杯\"\n";
                cout << "您的 Sharkcup 版本为: >>\t" << version << endl;
                cout << "编写 Sharkcup 的初心就是 \"写一个方便我生活的工具\"\n";
                cout << "Sharkcup 100% 使用 C++ 编写\n";
                cout << "Sharkcup 作者为 jEseeP1nkman\n";
                cout << "This's author's Discord : jeseep1nkman\n";
                cout << "作者 Blog 为 https://jeseep1nkman.github.io/\n";
                cout << "您的 Windows 版本为:";
                system("ver");
                cout << "更多信息请访问作者的Github : https://github.com/jEseeP1nkman/Sharkcup\n";
                cout << "[输入0] 返回主页\n";
                cout << ":";
                cin >> choice;
                if (choice == "0") {
                    system("cls");
                    break;
                }
            }
        }
};

void main_SharkcupInfomation(){
    SharkcupInfomation info;
    info.appInfo();
}