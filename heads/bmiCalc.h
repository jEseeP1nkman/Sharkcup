#include "head.h"

class SharkcupBmiCalc{
    public:
        void bmiCalc() {
            system("cls");
            while (true) {
                int choice;
                float weight, height, bmi;
                cout << gang << "BMI ����" << gang << endl;
                cout << "�����������(kg)\n:";
                cin >> weight;
                cout << "����������(h)\n:";
                cin >> height;
                bmi = weight / (height * 2);
                cout << "���BMIΪ>> " << bmi << " " << endl;
                cout << "\n";
                cout << "����[1] �鿴������Ϣ\n";
                cout << "����[2] ��������\n";
                cout << "����[0] �˳�����\n:";
                cin >> choice;
                if (choice == 0) { system("cls"); break; }
                else if (choice == 1) {
                    cout << "BMI ���㹫ʽΪ:" << endl;
                    cout << "kg/(m*2)" << endl;
                    cout << "�^�أ�24<=BMI<27\n"
                        << "�p�ȷ��֣�27 <= BMI < 30\n"
                        << "�жȷ��֣�30 <= BMI < 35\n"
                        << "�ضȷ��֣�BMI >= 35\n";
                }
                else if (choice == 2) {
                    continue;
                }
            }
        }
};

void main_bmiCalc(){
    SharkcupBmiCalc bmiCalc;
    bmiCalc.bmiCalc();
}