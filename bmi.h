#include "head.h"

void mainBmi(){
    float w,h,bmi;
    string choice;
    while(1){
        system("cls");
        cout<<gang<<gang<<"BMI ������"<<gang<<gang<<"\n\n";
        cout<<"������������(kg):\n";
        cin>>w;
        cout<<"�����������(m):\n";
        cin>>h;
        bmi = w / (h*h);
        cout<<"���� BMI Ϊ:"<<bmi<<"\n";
        if(bmi<18.5){
            cout<<"�����ع��᡹����Ҫ���˶���������ʳ�����������ܣ�ά�ֽ�����\n";
        }
        else if(18.5<=bmi<=24){
            cout<<"��ϲ�����������ء���Ҫ�������֣�\n";
        }
        else if(24<=bmi<=27){
            cout<<"�����ع��ء��ˣ�ҪС�ģ����Ͽ����С��������ع�����\n";
        }
        else if(bmi>=27){
            cout<<"���������֡�����Ҫ�������С��������ع�����\n";
        }
        cout<<"[���������] �˳�\n:";
        cin>>choice;
        break;
    }
}