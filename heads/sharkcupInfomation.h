#include "head.h"

float version = 0.19; //the version of sharkcup 

void mainSharkcupInfomation(){
    string choice;
    while(1){
        system("cls");
        cout<<gang<<"The infomation of Sharkcup"<<gang<<"\n\n";
        cout<<"Sharkcup 官方中文译名 \"鲨杯\"\n"
            <<"您的 Sharkcup 版本为: >>\t"<<version<<"\n"
            <<"编写 Sharkcup 的初心就是 \"写一个方便我生活的工具\"\n"
            <<"Sharkcup 100% 使用 C++ 编写\n"
            <<"Sharkcup 作者为 jEseeP1nkman\n"
            <<"This's author's Discord : jeseep1nkman\n"
            <<"作者 Blog 为 https://jeseep1nkman.github.io/\n"
            <<"更多信息请访问作者的Github : https://github.com/jEseeP1nkman/Sharkcup\n"
            <<"[输入任意键] 返回\n:";
        cin>>choice;
        break;
    }
}
