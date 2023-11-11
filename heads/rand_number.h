#include "head.h"

class SharkcupRand_number{
    public:
        void rand_number() {
            system("cls");
            while (true) {
                int srand(time(nullptr));
                int rand_number;
                int set_num, choice;
                cout << gang << "随机数生成" << gang << endl;
                cout << "设置随机数范围\n:";
                cin >> set_num;
                rand_number = rand() % set_num;
                cout << "随机数为:" << rand_number << endl;
                cout << "\n[输入0] 退出\n"
                    << "[输入1] 继续";
                cin >> choice;
                if (choice == 0) { system("cls"); break; }
            }
        }
};

void main_rand_number(){
    SharkcupRand_number rand_number;
    rand_number.rand_number();
}