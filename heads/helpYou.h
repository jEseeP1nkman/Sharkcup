#include "head.h"

void mainHelpYou(){
    string command,choice;
    while(1){
        system("cls");
        cout<<gang<<gang<<"我帮你打开"<<gang<<gang<<"\n\n";
        cout<<"Example( www.google.com )\n"
            <<"Example( D:/example.txt )\n"
            <<"Example( cmd )\n"
            <<"[输入0] 退出\n:";
        cin>>command;
        if(command == "0"){break;}
        system(("start "+command).c_str());
    }

}