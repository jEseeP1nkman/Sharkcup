#include "head.h"

class SharkcupRand_number{
    public:
        void rand_number() {
            system("cls");
            while (true) {
                int srand(time(nullptr));
                int rand_number;
                int set_num, choice;
                cout << gang << "���������" << gang << endl;
                cout << "�����������Χ\n:";
                cin >> set_num;
                rand_number = rand() % set_num;
                cout << "�����Ϊ:" << rand_number << endl;
                cout << "\n[����0] �˳�\n"
                    << "[����1] ����";
                cin >> choice;
                if (choice == 0) { system("cls"); break; }
            }
        }
};

void main_rand_number(){
    SharkcupRand_number rand_number;
    rand_number.rand_number();
}