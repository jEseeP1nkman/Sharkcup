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
                cout << gang << "�ĳ�����" << gang << endl;
                cout << "\n[����1] ���� ������ʽ�\n"
                    << "[����2] ���� ��ʤ����\n"
                    << "[����0] �˳�����\n:";
                cin >> choice;
                if (choice == "0") { system("cls"); break; }
                else if (choice == "1") {
                    system("cls");
                    float new_money;
                    cout << gang << "����������ʽ�" << gang << endl;
                    cout << "\nĿǰ������ʽ�Ϊ:" << money << "$" << endl;
                    cout << "������������ʽ�\n:";
                    cin >> new_money;
                    money = new_money;
                }
                else if (choice == "2") {
                    system("cls");
                    float new_beilv;
                    cout << gang << "���û�ʤ����" << gang << endl;
                    cout << "\nĿǰ��ʤ����Ϊ:" << beilv << endl;
                    cout << "�����û�ʤ����\n:";
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
                cout << gang << "������" << gang << endl;
                cout << "\n�������ʽ�Ϊ:" << money << "$\n";
                cout << "���¶�ע\n:";
                cin >> duzhu;
                if (duzhu > money) { show_duzhu_max_money = true; break; }
                cout << "������һ������(1~10)\n:";
                cin >> guess;
                if (guess == num) {
                    cout << "��ϲ�¶���\n";
                    money += duzhu * beilv;
                    break;
                }
                else if (guess < num) {
                    money -= duzhu;
                    cout << "������ʽ�ʣ " << money << "$" << endl;
                    cout << "��С��\n";
                    continue;
                }
                else if (guess > num) {
                    money -= duzhu;
                    cout << "������ʽ�ʣ " << money << "$" << endl;
                    cout << "�´���\n";
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
                if (money <= 0) { cout << "�������ʽ�Ϊ:" << money << "$" << " ���޷�������ע" << " ���˳��ĳ�" << endl; }
                if (show_duzhu_max_money == true) { cout << "�������ʽ�Ϊ:" << money << "$" << " ���޷���ע�������Ķ�ע" << " ��������ע" << endl; }
                cout << "������ʽ�Ϊ: " << money << " $" << endl;
                cout << "[����1] ���� ������\n";
                cout << "[����0] �˳��ĳ�\n";
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