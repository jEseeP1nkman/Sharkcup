#include "head.h"

class SharkcupCasino{
    private:
        double money = 1000, beilv = 1.75;
        bool show_duzhu_max_money = false;
    public:
        void casino_setting() {
            while (true) {
                system("cls");
                string choice;
                cout << gang << "赌场设置" << gang << endl;
                cout << "\n[输入1] 设置 玩家总资金\n"
                    << "[输入2] 设置 获胜倍率\n"
                    << "[输入0] 退出设置\n:";
                cin >> choice;
                if (choice == "0") { system("cls"); break; }
                else if (choice == "1") {
                    system("cls");
                    float new_money;
                    cout << gang << "设置玩家总资金" << gang << endl;
                    cout << "\n目前玩家总资金为:" << money << "$" << endl;
                    cout << "请设置玩家总资金\n:";
                    cin >> new_money;
                    money = new_money;
                }
                else if (choice == "2") {
                    system("cls");
                    float new_beilv;
                    cout << gang << "设置获胜倍率" << gang << endl;
                    cout << "\n目前获胜倍率为:" << beilv << endl;
                    cout << "请设置获胜倍率\n:";
                    cin >> new_beilv;
                    beilv = new_beilv;
                }
            }
        }
        void casino_choice_1() {
            system("cls");
            int guess, num;
            float duzhu;
            srand(time(nullptr));
            num = rand() % 10 + 1;
            while (money > 0) {
                cout << gang << "猜数字" << gang << endl;
                cout << "\n您的总资金为:" << money << "$\n";
                cout << "请下赌注\n:";
                cin >> duzhu;
                if (duzhu > money) { show_duzhu_max_money = true; break; }
                cout << "请输入一个数字(1~10)\n:";
                cin >> guess;
                if (guess == num) {
                    cout << "恭喜猜对了\n";
                    money += duzhu * beilv;
                    break;
                }
                else if (guess < num) {
                    money -= duzhu;
                    cout << "你的总资金还剩 " << money << "$" << endl;
                    cout << "猜小了\n";
                    continue;
                }
                else if (guess > num) {
                    money -= duzhu;
                    cout << "你的总资金还剩 " << money << "$" << endl;
                    cout << "猜大了\n";
                    continue;
                }
            }
        }
        void casino() {
            system("cls");
            while (true) {
                string choice;
                cout << gang << "Sharkcup Casino" << gang << endl;
                cout << "\n";
                if (money <= 0) { cout << "您的总资金为:" << money << "$" << " 您无法继续下注" << " 请退出赌场" << endl; }
                if (show_duzhu_max_money == true) { cout << "您的总资金为:" << money << "$" << " 您无法下注大于您的赌注" << " 请重新下注" << endl; }
                cout << "你的总资金为: " << money << " $" << endl;
                cout << "[输入1] 进入 猜数字\n";
                cout << "[输入0] 退出赌场\n";
                cin >> choice;
                if (choice == "0") { system("cls"); break; }
                else if (choice == "-1") {
                    casino_setting();
                }
                else if (choice == "1") {
                    show_duzhu_max_money = false;
                    casino_choice_1();
                }
            }
        }
};

void main_Sharkcup_Casino(){
    SharkcupCasino Casino;
    Casino.casino();
}