#include "head.h"

void mainHelpYou(){
    string command,choice;
    while(1){
        system("cls");
        cout<<gang<<gang<<"�Ұ����"<<gang<<gang<<"\n\n";
        cout<<"Example( www.google.com )\n"
            <<"Example( D:/example.txt )\n"
            <<"Example( cmd )\n"
            <<"[����0] �˳�\n:";
        cin>>command;
        if(command == "0"){break;}
        system(("start "+command).c_str());
    }

}