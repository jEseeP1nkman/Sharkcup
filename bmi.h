#include "head.h"

void mainBmi(){
    float w,h,bmi;
    string choice;
    while(1){
        system("cls");
        cout<<gang<<gang<<"BMI 计算器"<<gang<<gang<<"\n\n";
        cout<<"输入您的体重(kg):\n";
        cin>>w;
        cout<<"输入您的身高(m):\n";
        cin>>h;
        bmi = w / (h*h);
        cout<<"您的 BMI 为:"<<bmi<<"\n";
        if(bmi<18.5){
            cout<<"「体重过轻」，需要多运动，均衡饮食，以增加体能，维持健康！\n";
        }
        else if(18.5<=bmi<=24){
            cout<<"恭喜！「健康体重」，要继续保持！\n";
        }
        else if(24<=bmi<=27){
            cout<<"「体重过重」了，要小心！，赶快力行「健康体重管理」！\n";
        }
        else if(bmi>=27){
            cout<<"啊～「肥胖」，需要立刻力行「健康体重管理」！\n";
        }
        cout<<"[输入任意键] 退出\n:";
        cin>>choice;
        break;
    }
}