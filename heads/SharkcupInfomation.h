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
                cout << "\nSharkcup �ٷ��������� \"�豭\"\n";
                cout << "���� Sharkcup �汾Ϊ: >>\t" << version << endl;
                cout << "��д Sharkcup �ĳ��ľ��� \"дһ������������Ĺ���\"\n";
                cout << "Sharkcup 100% ʹ�� C++ ��д\n";
                cout << "Sharkcup ����Ϊ jEseeP1nkman\n";
                cout << "This's author's Discord : jeseep1nkman\n";
                cout << "���� Blog Ϊ https://jeseep1nkman.github.io/\n";
                cout << "���� Windows �汾Ϊ:";
                system("ver");
                cout << "������Ϣ��������ߵ�Github : https://github.com/jEseeP1nkman/Sharkcup\n";
                cout << "[����0] ������ҳ\n";
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