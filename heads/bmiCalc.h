#include "head.h"

class SharkcupBmiCalc{
    public:
        void bmiCalc() {
            system("cls");
            while (true) {
                int choice;
                float weight, height, bmi;
                cout << gang << "BMI 计算" << gang << endl;
                cout << "输入你的体重(kg)\n:";
                cin >> weight;
                cout << "输入你的身高(h)\n:";
                cin >> height;
                bmi = weight / (height * 2);
                cout << "你的BMI为>> " << bmi << " " << endl;
                cout << "\n";
                cout << "输入[1] 查看更多信息\n";
                cout << "输入[2] 继续计算\n";
                cout << "输入[0] 退出计算\n:";
                cin >> choice;
                if (choice == 0) { system("cls"); break; }
                else if (choice == 1) {
                    cout << "BMI 计算公式为:" << endl;
                    cout << "kg/(m*2)" << endl;
                    cout << "過重：24<=BMI<27\n"
                        << "輕度肥胖：27 <= BMI < 30\n"
                        << "中度肥胖：30 <= BMI < 35\n"
                        << "重度肥胖：BMI >= 35\n";
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