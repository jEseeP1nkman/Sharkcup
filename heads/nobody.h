#include "head.h"

class SharkcupNobody{
    private:
        int nobody_day_count = 0;
        bool have_job = false;
        int job_exam_score= 0 ;
        string job=" ";
        double nobody_money=1000;
        bool show_nobody_no_score= true;
        int nobody_work_day_count = 0;
        bool nobody_have_rent = true;
        bool nobody_have_house = false;
        float nobody_rent=230;
        float nobody_salary = 0;
        float nobody_pay=nobody_rent+100+20;
        float nobody_deposit = 0;
        float nobody_credit = 0;
        bool nobody_have_credit = false;
        int nobody_have_credit_day_count = 0;
        string nobody_house_name="��";
        int nobody_house_diamond_apartment = 0;
        int nobody_house_poor_apartment = 0;
        int nobody_house_rich_apartment = 0;
        int nobody_house_count= 0;
        int nobody_story_showed= false ;
        string nobody_educational = "���ڴ�ר";
        int nobody_yanjiusheng_exam = 0;
        float nobody_house_rent_diamond_apartment = 0;
        float nobody_house_rent_poor_apartment = 0;
        float nobody_house_rent_rich_apartment = 0;
        bool show_no_find_job = false;

    public:
        void nobody_delete_save(){
            nobody_money=1000;
            nobody_credit=0;
            have_job=false;
            job_exam_score=0;
            job=" ";
            show_nobody_no_score=true;
            nobody_work_day_count=0;
            nobody_have_rent=true;
            nobody_have_house=false;
            nobody_rent=230;
            nobody_salary=0;
            nobody_deposit=0;
            nobody_day_count = 0;
            nobody_have_credit = false;
            nobody_have_credit_day_count = 0;
            nobody_house_name="��";
            nobody_house_diamond_apartment = 0;
            nobody_house_poor_apartment = 0;
            nobody_house_rich_apartment = 0;
            nobody_educational = "���ڴ�ר";
            nobody_yanjiusheng_exam = 0;
            show_no_find_job = false;
        }
        void nobody_exam(){
            string choice;
            while(true){
                system("cls");
                cout<<gang<<gang<<gang<<"������"<<gang<<gang<<gang<<endl;
                cout<<"\n";
                cout<<"�������ʽ�Ϊ: "<<nobody_money<<" $"<<endl;;
                cout<<"����ѧ��Ϊ: "<<nobody_educational<<endl;
                cout<<"\n[����1] �Կ�����\n"
                    <<"[����2] �� �о���\n"
                    <<"[����3] ���ѧ��\n"  
                    <<"[����0] �˳�����\n:";
                cin>>choice;
                if(choice=="0"){break;}
                else if(choice=="1"){
                    bool show_have_money_to_exam = true;
                    while(true){
                        system("cls");
                        string choice;
                        cout<<gang<<gang<<gang<<"�Կ�����"<<gang<<gang<<gang<<endl;
                        cout<<"\n";
                        cout<<"�������ʽ�Ϊ: "<<nobody_money<<" $"<<endl;
                        cout<<"���Է���Ϊ 555.44 $"<<endl;
                        if(show_nobody_no_score==false){cout<<"���ķ���Ϊ: "<<job_exam_score<<endl;}
                        if(show_have_money_to_exam==false){cout<<"��û�н�Ǯȥ����"<<endl;}
                        cout<<"����ѧ��Ϊ: "<<nobody_educational<<endl;
                        cout<<"\n[����1] ��ʼ����\n"
                            <<"[����0] �˳�����\n:";
                        cin>>choice;
                        if(choice=="0"){break;}
                        else if(choice=="1"){
                            if(nobody_money<555.44){show_have_money_to_exam=false;continue;}
                            system("cls");
                            srand(time(nullptr));
                            int random_num = rand()%3;
                            if(random_num==0){
                                system("cls");
                                cout<<gang<<gang<<gang<<"������"<<gang<<gang<<gang<<endl;
                                string choice;
                                string q1,q2,q3,q4,q5;
                                cout<<"(��һ��) 1+2=?\n:";
                                cin>>q1;
                                cout<<"(�ڶ���) ��ȫ�õ��� ap?le\n:";
                                cin>>q2;
                                cout<<"(������) 9*4=?\n:";
                                cin>>q3;
                                cout<<"(������) ��ȫӢ�ﵥ�� a,b,c,d,e,?,g,h\n:";
                                cin>>q4;
                                cout<<"(������) �����Ӣ�ﵥ����?\n:";
                                cin>>q5;
                                if(q1=="3"){job_exam_score+=20;}
                                if(q2=="p"||q2=="apple"||q2=="P"){job_exam_score+=20;}
                                if(q3=="36"){job_exam_score+=20;}
                                if(q4=="f"||q4=="F"){job_exam_score+=20;}
                                if(q5=="mom"||q5=="mother"||q5=="mum"){job_exam_score+=20;}
                                show_nobody_no_score=false;
                                if(job_exam_score>=60){nobody_educational="�Կ�������";}
                            }
                            else if(random_num==1){
                                system("cls");
                                cout<<gang<<gang<<gang<<"������"<<gang<<gang<<gang<<endl;
                                string choice;
                                string q1,q2,q3,q4,q5;
                                cout<<"(��һ��) 99+123=?\n:";
                                cin>>q1;
                                cout<<"(�ڶ���) ��ȫ�õ��� Am?rica\n:";
                                cin>>q2;
                                cout<<"(������) 32*2=?\n:";
                                cin>>q3;
                                cout<<"(������) ��ȫӢ�ﵥ�� a,b,c,d,e,?,g,h\n:";
                                cin>>q4;
                                cout<<"(������) �¹���Ӣ�ﵥ����?\n:";
                                cin>>q5;
                                if(q1=="222"){job_exam_score+=20;}
                                if(q2=="e"||q2=="America"||q2=="E"||q2=="america"){job_exam_score+=20;}
                                if(q3=="64"){job_exam_score+=20;}
                                if(q4=="f"||q4=="F"){job_exam_score+=20;}
                                if(q5=="Germany"||q5=="GERMANY"){job_exam_score+=20;}
                                show_nobody_no_score=false;
                                if(job_exam_score>=60){nobody_educational="�Կ�������";}
                            }
                            else if(random_num==2){
                                system("cls");
                                cout<<gang<<gang<<gang<<"������"<<gang<<gang<<gang<<endl;
                                string choice;
                                string q1,q2,q3,q4,q5;
                                cout<<"(��һ��) 1314-794=?\n:";
                                cin>>q1;
                                cout<<"(�ڶ���) ��ȫ�õ��� Com?uter\n:";
                                cin>>q2;
                                cout<<"(������) 64��64=?\n:";
                                cin>>q3;
                                cout<<"(������) ��ȫӢ�ﵥ�� a,b,c,d,?,f,g,h\n:";
                                cin>>q4;
                                cout<<"(������) ѧ����Ӣ�ﵥ����?\n:";
                                cin>>q5;
                                if(q1=="520"){job_exam_score+=20;}
                                if(q2=="p"||q2=="Computer"||q2=="P"||q2=="computer"){job_exam_score+=20;}
                                if(q3=="1"){job_exam_score+=20;}
                                if(q4=="e"||q4=="E"){job_exam_score+=20;}
                                if(q5=="STUDENT"||q5=="student"){job_exam_score+=20;}
                                show_nobody_no_score=false;
                                if(job_exam_score>=60){nobody_educational="�Կ�������";}
                            }
                            nobody_money-=555.44;
                        }
                    }
                }
                else if(choice=="2"){
                    bool show_have_money_to_exam = true;
                    bool show_low_educational = false;
                    while(true){
                        system("cls");
                        string choice;
                        cout<<gang<<gang<<gang<<"�� ��"<<gang<<gang<<gang<<endl;
                        cout<<"\n";
                        cout<<"�������ʽ�Ϊ: "<<nobody_money<<" $"<<endl;
                        cout<<"���Է���Ϊ 700 $"<<endl;
                        if(show_nobody_no_score==false){cout<<"���ķ���Ϊ: "<<job_exam_score<<endl;}
                        if(show_have_money_to_exam==false){cout<<"��û�н�Ǯȥ����"<<endl;}
                        if(show_low_educational==true){cout<<"����ѧ��Ϊ: "<<nobody_educational<<"���޷����о���"<<endl;}
                        cout<<"����ѧ��Ϊ: "<<nobody_educational<<endl;
                        cout<<"\n[����1] ��ʼ����\n"
                            <<"[����0] �˳�����\n:";
                        cin>>choice;
                        if(choice=="0"){break;}
                        else if(choice=="1"){
                            if(nobody_educational=="���ڴ�ר"){show_low_educational=true;continue;}
                            if(nobody_money<700){show_have_money_to_exam=false;continue;}
                            system("cls");
                            srand(time(nullptr));
                            int random_num = rand()%3;
                            if(random_num==0){
                                string q1,q2,q3,q4,q5;
                                cout<<"(��һ��) ���� ��Ӣ����ôƴд��"<<endl;
                                cin>>q1;
                                cout<<"(�ڶ���) ��������������һ�ꣿ"<<endl;
                                cin>>q2;
                                cout<<"(������) ��������������ʲô��"<<endl;
                                cin>>q3;
                                cout<<"(������) ������Ԫ�ط���Ϊ��"<<endl;
                                cin>>q4;
                                cout<<"(������) 10 % 3 = ?"<<endl;
                                cin>>q5;
                                if(q1=="summer"||q1=="SUMMER"){nobody_yanjiusheng_exam+=20;}
                                if(q2=="1776"){nobody_yanjiusheng_exam+=20;}
                                if(q3=="Asia"||q3=="����"||q3=="ASIA"){nobody_yanjiusheng_exam+=20;}
                                if(q4=="O"||q4=="o"){nobody_yanjiusheng_exam+=20;}
                                if(q5=="1"){nobody_yanjiusheng_exam+=20;}
                                if(nobody_yanjiusheng_exam>=80){nobody_educational="�о���";}
                            }
                            if(random_num==1){
                                string q1,q2,q3,q4,q5;
                                cout<<"(��һ��) ӡ�� ��Ӣ����ôƴд��"<<endl;
                                cin>>q1;
                                cout<<"(�ڶ���) ѡ���ʵ��Ľ����������ľ��ӣ�\"She is sitting ___ the desk.\""<<endl;
                                cin>>q2;
                                cout<<"(������) лл�� ��Ӣ����ôƴд��"<<endl;
                                cin>>q3;
                                cout<<"(������) ѡ����ȷ�ĵ���ƴд��\"house\", \"hause\", \"howse\", \"haus\""<<endl;
                                cin>>q4;
                                cout<<"(������) д�� \"school\" �ĸ�����ʽ��"<<endl;
                                cin>>q5;
                                if(q1=="India"||q1=="india"||q1=="INDIA"){nobody_yanjiusheng_exam+=20;}
                                if(q2=="at"){nobody_yanjiusheng_exam+=20;}
                                if(q3=="Thank you"||q3=="thank you"||q3=="THANK YOU"||q3=="Thank You"){nobody_yanjiusheng_exam+=20;}
                                if(q4=="house"||q4=="HOUSE"||q4=="House"){nobody_yanjiusheng_exam+=20;}
                                if(q5=="schools"||q5=="SCHOOLS"||q5=="Schools"){nobody_yanjiusheng_exam+=20;}
                                if(nobody_yanjiusheng_exam>=80){nobody_educational="�о���";}
                            }
                            if(random_num==2){
                                string q1,q2,q3,q4,q5;
                                cout<<"(��һ��) 2 + 3 = ?"<<endl;
                                cin>>q1;
                                cout<<"(�ڶ���) 12 �� 2 = ?"<<endl;
                                cin>>q2;
                                cout<<"(������) 8? = ?"<<endl;
                                cin>>q3;
                                cout<<"(������) 10 % 3 = ?"<<endl;
                                cin>>q4;
                                cout<<"(������) 16 �� (4 �� 2) = ?"<<endl;
                                cin>>q5;
                                if(q1=="5"){nobody_yanjiusheng_exam+=20;}
                                if(q2=="6"){nobody_yanjiusheng_exam+=20;}
                                if(q3=="64"){nobody_yanjiusheng_exam+=20;}
                                if(q4=="1"){nobody_yanjiusheng_exam+=20;}
                                if(q5=="2"){nobody_yanjiusheng_exam+=20;}
                                if(nobody_yanjiusheng_exam>=80){nobody_educational="�о���";}
                            }
                        }
                    }
                }
                else if(choice=="3"){
                    string choice;
                    while(true){
                        system("cls");
                        cout<<gang<<gang<<gang<<"ѧ������"<<gang<<gang<<gang<<endl;
                        cout<<"\n";
                        cout<<"�������ʽ�Ϊ: "<<nobody_money<<" $"<<endl;
                        cout<<"����ѧ��Ϊ: "<<nobody_educational<<endl;
                        cout<<"\n[����1] ���� �Կ����� ���� 2000 $\n"
                            <<"[����2] ���� �о��� ���� 5999 $\n"
                            <<"[����0] �˳�\n:";
                        cin>>choice;
                        if(choice=="0"){break;}
                        else if(choice=="1"){
                            if(nobody_money<2000){break;}
                            else{nobody_educational="�Կ�����";nobody_money-=2000;}
                        }
                        else if(choice=="2"){
                            if(nobody_money<5999){break;}
                            else{nobody_educational="�о���";nobody_money-=5999;}
                        }
                    }
                }
            }
        }
        void nobody_find_job_choice_1(){
            if(nobody_educational=="���ڴ�ר"||nobody_educational=="�Կ�����"||nobody_educational=="�о���"){job="���ذ�����";nobody_salary=410;have_job=true;nobody_work_day_count=0;show_no_find_job=false;}
            else{show_no_find_job=true;}
        }
        void nobody_find_job_choice_2(){
            if(nobody_educational=="���ڴ�ר"||nobody_educational=="�Կ�����"||nobody_educational=="�о���"){job="��·�����";nobody_salary=360;have_job=true;nobody_work_day_count=0;show_no_find_job=false;}
            else{show_no_find_job=true;}
        }
        void nobody_find_job_choice_3(){
            if(nobody_educational=="�о���"||nobody_educational=="�Կ�����"){job="Сѧ��ʦ";nobody_salary=624.4;have_job=true;nobody_work_day_count=0;show_no_find_job=false;}
            else{show_no_find_job=true;}
        }
        void nobody_find_job_choice_4(){
            if(nobody_educational=="�о���"){job="ʿ��";nobody_salary=1064.91;have_job=true;nobody_work_day_count=0;show_no_find_job=false;}
            else{show_no_find_job=true;}
        }
        void nobody_find_job_choice_5(){
            if(nobody_educational=="���ڴ�ר"||nobody_educational=="�Կ�����"||nobody_educational=="�о���"){job="������";nobody_salary=100;have_job=true;nobody_work_day_count=0;show_no_find_job=false;}
            else{show_no_find_job=true;}
        }
        void nobody_find_job_choice_6(){
            if(nobody_educational=="�о���"){job="��ˮ��Ӷ��";nobody_salary=100000;have_job=true;nobody_work_day_count=0;show_no_find_job=false;}
            else{show_no_find_job=true;}
        }
        void nobody_find_job_choice_7(){
            if(nobody_educational=="���ڴ�ר"||nobody_educational=="�Կ�����"||nobody_educational=="�о���"){job="��������";nobody_salary=630;have_job=true;nobody_work_day_count=0;show_no_find_job=false;}
            else{show_no_find_job=true;}
        }
        void nobody_find_job_choice_8(){
            if(nobody_educational=="�Կ�����"||nobody_educational=="�о���"){job="������";nobody_salary=1039.7;have_job=true;nobody_work_day_count=0;show_no_find_job=false;}
            else{show_no_find_job=true;}
        }
        void nobody_find_job(){
            string choice;
            while(true){
                system("cls");
                cout<<gang<<gang<<gang<<"��Ƹ�㳡"<<gang<<gang<<gang<<endl;
                cout<<"\n";
                cout<<"����ѧ��Ϊ: "<<nobody_educational<<endl;
                if(show_nobody_no_score==true){cout<<"��ǰȥ���ԡ�\n";}
                cout<<"���Ĺ���Ϊ: "<<job<<endl;
                if(show_no_find_job==true){cout<<"ӦƸʧ��"<<endl;}
                cout<<"\n[����1] ӦƸ ���ذ�����\n"
                    <<"[����2] ӦƸ ��·�����\n"
                    <<"[����3] ӦƸ Сѧ��ʦ\n"
                    <<"[����4] ��Ϊ ʿ��\n"
                    <<"[����5] ӦƸ ������\n"
                    <<"[����6] ӦƸ ��ˮ��Ӷ��\n"
                    <<"[����7] ӦƸ ��������\n"
                    <<"[����8] ӦƸ ������\n"
                    <<"[����0] �뿪��Ƹ\n:";
                cin>>choice;
                if(choice=="0"){break;}
                else if(choice=="1"){nobody_find_job_choice_1();}
                else if(choice=="2"){nobody_find_job_choice_2();}
                else if(choice=="3"){nobody_find_job_choice_3();}
                else if(choice=="4"){nobody_find_job_choice_4();}
                else if(choice=="5"){nobody_find_job_choice_5();}
                else if(choice=="6"){nobody_find_job_choice_6();}
                else if(choice=="7"){nobody_find_job_choice_7();}
                else if(choice=="8"){nobody_find_job_choice_8();}
            }
        }
        void nobody_work_judge(){
            nobody_day_count++;
            if(nobody_have_credit==true){
                nobody_have_credit_day_count++;
                if(nobody_have_credit_day_count % 1 == 0){nobody_money-=1000;}
            }
        }
        void nobody_work(){
            while(true){
                if(have_job==false){break;}
                nobody_work_day_count++;
                nobody_money=nobody_money+nobody_salary-nobody_pay;
                if(job=="���ذ�����"){
                    nobody_work_judge();
                    if(nobody_work_day_count==12){nobody_salary+=100;}
                    if(nobody_work_day_count==36){nobody_salary+=1256.88;}
                    srand(time(nullptr));
                    int random_num = rand()%5;
                    string random_event[] = {"���ڹ�������ʶ��һ��������","���½��칤����Ŭ�����ϰ���㷢���� 150 $","�����ڿ�ʼ���������","�����ϰ����","����Լ�˸����������� ���� 400 $"};
                    string event=random_event[random_num];
                    while(true){
                        system("cls");
                        string choice;
                        cout<<gang<<gang<<gang<<"�����¼�"<<gang<<gang<<gang<<endl;
                        cout<<"\n";
                        cout<<event<<endl;
                        if(event=="���½��칤����Ŭ�����ϰ���㷢���� 150 $"){nobody_money+=150;}
                        else if(event=="�����ϰ����"){nobody_money+=20;}
                        else if(event=="����Լ�˸����������� ���� 400 $"){nobody_money-=400;}
                        cout<<"\n[���������] ���������\n:";
                        cin>>choice;
                        break;
                    }
                }
                else if(job=="��·�����"){
                    nobody_work_judge();
                    if(nobody_work_day_count==12){nobody_salary+=90;}
                    else if(nobody_work_day_count==14){nobody_salary+=90;}
                    else if(nobody_work_day_count==16){nobody_salary+=90;}
                    else if(nobody_work_day_count==18){nobody_salary+=90;}
                    else if(nobody_work_day_count==20){nobody_salary+=90;}
                    srand(time(nullptr));
                    int random_num = rand()%6;
                    string random_event[] = {"��������·�ϼ��� 100 $","������Ϊ�ٵ������쵼�۹��� 20 $","������·�ϼ���һ�� Chanel �������㽫�����ˣ�׬ȡ 1444 $","���쵽�ˣ�·�Ϻö���Ҷѽ","����ɨ��������Ҷ�ѱ�Сƨ��������","ɨ�ص�ǯ�ӻ��ˣ���������һ��"};
                    string event=random_event[random_num];
                    while(true){
                        system("cls");
                        string choice;
                        cout<<gang<<gang<<gang<<"�����¼�"<<gang<<gang<<gang<<endl;
                        cout<<"\n";
                        cout<<event<<endl;
                        if(event=="��������·�ϼ��� 100 $"){nobody_money+=100;}
                        else if(event=="������·�ϼ���һ�� Chanel �������㽫�����ˣ�׬ȡ 1444 $"){nobody_money+=1444;}
                        else if(event=="������Ϊ�ٵ������쵼�۹��� 20 $"){nobody_money-=20;}
                        else if(event=="ɨ�ص�ǯ�ӻ��ˣ���������һ��"){nobody_money-=5;}
                        cout<<"\n[���������] ���������\n:";
                        cin>>choice;
                        break;
                    }
                }
                else if(job=="Сѧ��ʦ"){
                    nobody_work_judge();
                    if(nobody_work_day_count==12){nobody_salary+=1000;}
                    else if(nobody_work_day_count==45){nobody_salary+=5000;}
                    else if(nobody_work_day_count==100){nobody_money+=40000;}
                    srand(time(nullptr));
                    int random_num = rand()%6;
                    string random_event[] = {"������û����Сѧ���Ļƽ�Ƭ���㽫�����ˣ�׬ȡ 10 $","�������ѧУ����극","�����պڰ�ѣ�׬ȡ 175 $","��˵���ǰ�İ໨���İ�Ĳ���̸������","�����������ʦ����һ�ڿ�","��˵����ʦ���ݽ�ܸ�"};
                    string event=random_event[random_num];
                    while(true){
                        system("cls");
                        string choice;
                        cout<<gang<<gang<<gang<<"�����¼�"<<gang<<gang<<gang<<endl;
                        cout<<"\n";
                        cout<<event<<endl;
                        if(event=="������û����Сѧ���Ļƽ�Ƭ���㽫�����ˣ�׬ȡ 10 $"){nobody_money+=10;}
                        else if(event=="�������ѧУ����극"){nobody_money+=15;}
                        else if(event=="�����պڰ�ѣ�׬ȡ 175 $"){nobody_money+=175;}
                        cout<<"\n[���������] ���������\n:";
                        cin>>choice;
                        break;
                    }
                }
                else if(job=="ʿ��"){
                    nobody_work_judge();
                    if(nobody_work_day_count==12){nobody_salary+=600;}
                    else if(nobody_work_day_count==22){nobody_salary+=650;}
                    else if(nobody_work_day_count==26){nobody_salary+=750;}
                    else if(nobody_work_day_count==100){nobody_salary+=6000;}
                    srand(time(nullptr));
                    int random_num = rand()%1;
                    string random_event[] = {"�����ڷ��ӱ�����......"};
                    string event=random_event[random_num];
                    while(true){
                        system("cls");
                        string choice;
                        cout<<gang<<gang<<gang<<"�����¼�"<<gang<<gang<<gang<<endl;
                        cout<<"\n";
                        cout<<event<<endl;
                        if(event=="�����ڷ��ӱ�����......"){nobody_money+=1064.91;}
                        Sleep(2000);
                        break;
                    }
                }
                else if(job=="������"){
                    nobody_work_judge();
                    if(nobody_work_day_count % 12 == 0){nobody_salary+=250;}
                    srand(time(nullptr));
                    int random_num = rand()%11;
                    string random_event[] = {"�����ձ�����δ���,�ϴ�Ҫ���¹�л��","�����ϴ��ģ�������2000 $","��˵�ϴ�����źͶ�Һ���С��������","���ն�Һ���С��챻����������ĵ��ִ�������趼����ʶ","���ո���һƱ��ģ��ϴ�������14530.9 $","�ϴ�����ֵĺܺã�����ӹ��� 24662 $","�ϴ󷷶�������ץ���ˣ����������С�� 10000 $","�㱻����ץ�ˣ��ϴ�û�а��㣬��ĺ�Ǯȫ��û��","���Ϊ���ϴ����˽���ܣ��������� 10000 $","�������С�ܱ��������С���ץ���ˣ���ɵ��Ҫ�㽻�� 100000 $ �������С��","��ǰ��У���ͬѧ���������Ǯ���������˵���������Ӹ��ˣ����� 10000 $"};
                    string event=random_event[random_num];
                    while(true){
                        system("cls");
                        string choice;
                        cout<<gang<<gang<<gang<<"�����¼�"<<gang<<gang<<gang<<endl;
                        cout<<"\n";
                        cout<<event<<endl;
                        if(event=="�����ϴ��ģ������� 2000 $"){nobody_money+= 2000;}
                        else if(event=="���ո���һƱ��ģ��ϴ������� 14530.9 $"){nobody_money+= 14530.9;}
                        else if(event=="�ϴ�����ֵĺܺã�����ӹ��� 24662 $"){nobody_salary+= 24662;}
                        else if(event=="�ϴ󷷶�������ץ���ˣ����������С�� 10000 $"){nobody_money-= 10000;}
                        else if(event=="�㱻����ץ�ˣ��ϴ�û�а��㣬��ĺ�Ǯȫ��û��"){nobody_money-= nobody_money;}
                        else if(event=="���Ϊ���ϴ����˽���ܣ��������� 10000 $"){nobody_salary+= 10000;}
                        else if(event=="�������С�ܱ��������С���ץ���ˣ���ɵ��Ҫ�㽻�� 100000 $ �������С��"){nobody_money-= 100000;}
                        else if(event=="��ǰ��У���ͬѧ���������Ǯ���������˵���������Ӹ��ˣ����� 10000 $"){nobody_money+= 10000;}
                        cout<<"\n[���������] ���������\n:";
                        cin>>choice;
                        break;
                    }
                }
                else if(job=="��ˮ��Ӷ��"){
                    nobody_work_judge();
                    if(nobody_work_day_count % 12 == 0){nobody_salary+=250;}
                    srand(time(nullptr));
                    int random_num = rand()%6;
                    string random_event[] = {"�㱻��ǲ���˶���ս��������ս����ʹ������һ��ը��5�ˣ�ս���Ǹ���ȡ�˸���Ž� ը����","���ڶ���ս���ϱ������䴩ϥ�ǣ���Ҫҽ�Ʒ� 20000 $ �������ϥ��","����ѵ����ʱ���ǹ�߻��㱻���� 10000 $","�㱻��ǲ���˰���ս�����㱻�ֲ����Ӱ�ܳ䵱���ʣ��õ���в�㽻�� 500000 $","�㱻��ǲ���˰���ս��������ս�����ѹ�ʬ�壬Ȼ����������̫��׬ȡ�� 990250.69 $","���ս���ڰ���ս�����ֲ�������ɱ"};
                    string event=random_event[random_num];
                    while(true){
                        system("cls");
                        string choice;
                        cout<<gang<<gang<<gang<<"�����¼�"<<gang<<gang<<gang<<endl;
                        cout<<"\n";
                        cout<<event<<endl;
                        if(event=="���ڶ���ս���ϱ������䴩ϥ�ǣ���Ҫҽ�Ʒ� 20000 $ �������ϥ��"){nobody_money-= 20000;}
                        else if(event=="����ѵ����ʱ���ǹ�߻��㱻���� 10000 $"){nobody_money-= 10000;}
                        else if(event=="�㱻��ǲ���˰���ս�����㱻�ֲ����Ӱ�ܳ䵱���ʣ��õ���в�㽻�� 500000 $"){nobody_money-= 500000;}
                        else if(event=="�㱻��ǲ���˰���ս��������ս�����ѹ�ʬ�壬Ȼ����������̫��׬ȡ�� 990250.69 $"){nobody_money+= 990250.69;}
                        cout<<"\n[���������] ���������\n:";
                        cin>>choice;
                        break;
                    }
                }
                else if(job=="��������"){
                    nobody_work_judge();
                    if(nobody_work_day_count==6){nobody_salary+=40.66;}
                    if(nobody_work_day_count==12){nobody_salary+=100;}
                    if(nobody_work_day_count==36){nobody_salary+=1956.12;}
                    srand(time(nullptr));
                    int random_num = rand()%6;
                    string random_event[] = {"�����ð�ˣ���ҩ���� 20 $","����ͬ���ھ�ʲô����û����","����³�,��������ʱ�ˣ��ϰ��Ǯ 18 $","������ʱ��һ����ע�⣬������͵�ˣ��ϰ��Ǯ 17 $","���º�����","���������ۣ����ǹ˿͸������Ǻ������ϰ巢���� 100 $"};
                    string event=random_event[random_num];
                    while(true){
                        system("cls");
                        string choice;
                        cout<<gang<<gang<<gang<<"�����¼�"<<gang<<gang<<gang<<endl;
                        cout<<"\n";
                        cout<<event<<endl;
                        if(event=="�����ð�ˣ���ҩ���� 20 $"){nobody_money-=20;}
                        else if(event=="����ͬ���ھ�ʲô����û����"){nobody_money-=10;}
                        else if(event=="����³�,��������ʱ�ˣ��ϰ��Ǯ 18 $"){nobody_money-=18;}
                        else if(event=="������ʱ��һ����ע�⣬������͵�ˣ��ϰ��Ǯ 17 $"){nobody_money-=17;}
                        else if(event=="���������ۣ����ǹ˿͸������Ǻ������ϰ巢���� 100 $"){nobody_money+=100;}
                        cout<<"\n[���������] ���������\n:";
                        cin>>choice;
                        break;
                    }
                }
                else if(job=="������"){
                    nobody_work_judge();
                    if(nobody_work_day_count==12){nobody_salary+=1000;}
                    if(nobody_work_day_count==24){nobody_salary+=1000;}
                    if(nobody_work_day_count==36){nobody_salary+=1000;}
                    srand(time(nullptr));
                    int random_num = rand()%5;
                    string random_event[] = {"�����Ǹ�û���۾���ɵ�ƣ�ײ����ĳ����޳����� 2000 $","����ʤ���������ģ��ɶԣ����λ��� 6000 $ ���ǻ�ý��� 40000 $ , �������� 2000 $","��ð�յĿ�����������Ϊ��Ȧ��������ǣ����ϰ���������˸������������������ 5000 $","�������ˣ����ƻ��� 10000 $","����Ϊ�����������,������û�й���"};
                    string event=random_event[random_num];
                    while(true){
                        system("cls");
                        string choice;
                        cout<<gang<<gang<<gang<<"�����¼�"<<gang<<gang<<gang<<endl;
                        cout<<"\n";
                        cout<<event<<endl;
                        if(event=="�����Ǹ�û���۾���ɵ�ƣ�ײ����ĳ����޳����� 2000 $"){nobody_money-=2000;}
                        else if(event=="����ʤ���������ģ��ɶԣ����λ��� 6000 $ ���ǻ�ý��� 40000 $ , �������� 2000 $"){nobody_money-=6000;nobody_money+=40000;nobody_salary+=2000;}
                        else if(event=="��ð�յĿ�����������Ϊ��Ȧ��������ǣ����ϰ���������˸������������������ 5000 $"){nobody_salary+=5000;}
                        else if(event=="�������ˣ����ƻ��� 10000 $"){nobody_money-=10000;}
                        else if(event=="����Ϊ�����������,������û�й���"){nobody_money-=nobody_salary;}
                        cout<<"\n[���������] ���������\n:";
                        cin>>choice;
                        break;
                    }
                }
                break;
            }
        }
        void nobody_to_work(){
            string choice;
            while(true){
                system("cls");
                cout<<gang<<gang<<gang<<"������"<<gang<<gang<<gang<<endl;
                cout<<"\n";
                if(have_job==false){cout<<"����û�й���,����ǰȥӦƸ����"<<endl;}
                cout<<"���Ĺ���Ϊ: "<<job<<" ���ѹ��� "<<nobody_work_day_count<<" ����"<<endl;
                cout<<"���Ĺ���Ϊ: "<<nobody_salary<<" $"<<endl; 
                cout<<"�������ʽ�Ϊ: "<<nobody_money<<" $"<<endl;
                cout<<"�����µĿ����ܹ�: "<<nobody_pay<<" $"<<endl;
                cout<<"\n[����1] ǰȥ����\n"
                    <<"[����0] �˳�����\n:";
                cin>>choice;
                if(choice=="0"){break;}
                else if(choice=="1"){nobody_work();}
            }
        }
        void nobody_pay_page(){
            string choice;
            while(true){
                system("cls");
                cout<<gang<<gang<<gang<<"������"<<gang<<gang<<gang<<endl;
                cout<<"\n";
                cout<<"�������ʽ�Ϊ: "<<nobody_money<<" $\n";
                cout<<"���Ĺ���Ϊ: "<<nobody_salary<<" $\n";
                cout<<"��������:\n";
                cout<<"     ��ʯ��Ԣ: "<<nobody_house_rent_diamond_apartment<<" $\n"
                    <<"     ������Ԣ: "<<nobody_house_rent_poor_apartment<<" $\n"
                    <<"     ���ݴ�¥: "<<nobody_house_rent_rich_apartment<<" $";
                cout<<"\n��ÿ�¿���Ϊ:\n"
                    <<"     ���� -"<<nobody_rent<<" $\n"
                    <<"     ˮ��� -20 $\n"
                    <<"     ��ʳ�� -100 $\n"
                    <<"     >> �� "<<nobody_pay<<" $\n";
                cout<<"\nÿ�¾�׬ "<<nobody_salary-nobody_pay+nobody_house_rent_diamond_apartment+nobody_house_rent_poor_apartment+nobody_house_rent_rich_apartment<<" $"<<endl;
                cout<<"\n[����0] �˳�\n:";
                cin>>choice;
                if(choice=="0"){break;}
            }
        }
        void nobody_home(){
            string choice;
            while(true){
                system("cls");
                if(nobody_have_rent==false && nobody_have_house==false){break;}
                cout<<gang<<gang<<gang<<nobody_house_name<<gang<<gang<<gang<<endl;
                cout<<"\n";
                cout<<"\n[����1] �Է�\n"
                    <<"[����2] ˯��\n"
                    <<"[����3] ������\n"
                    <<"[����0] �뿪����\n:";
                cin>>choice;
                if(choice=="0"){break;}
            }
        }
        void nobody_home_main_page(){
            string choice;
            while(true){
                system("cls");
                cout<<gang<<gang<<gang<<nobody_house_name<<gang<<gang<<gang<<endl;
                cout<<"\n";
                if(nobody_have_rent==false && nobody_have_house==false){cout<<"\n��ȡ���˷��⣬�����û�й����������ֻ���Ĵ�������~"<<endl;}
                else if(nobody_have_rent==true){cout<<"\n������һ������"<<endl;}
                cout<<"��ӵ�� "<<nobody_house_count<<" �׷���"<<endl;
                cout<<"\n[����1] ���뷿��\n"
                    <<"[����2] ȡ������\n"
                    <<"[����3] �������\n"
                    <<"[����0] �Ӽ��뿪\n:";
                cin>>choice;
                if(choice=="0"){break;}
                else if(choice=="1"){nobody_home();}
                else if(choice=="2"){nobody_rent=0;nobody_pay-=230;nobody_have_rent=false;}
                else if(choice=="3"){nobody_rent=230;nobody_pay=nobody_rent+100+20;nobody_have_rent=true;}
            }
        }
        void nobody_bank_deposit(){
            while(true){
                system("cls");
                cout<<gang<<gang<<gang<<"Sharkcup Bank ����"<<gang<<gang<<gang<<endl;
                cout<<"\n�������ʽ�Ϊ: "<<nobody_money<<" $"<<endl;
                cout<<"��������Ҫ���Ľ��:\n";
                cin>>nobody_deposit;
                if(nobody_deposit>nobody_money){break;}
                nobody_money-=nobody_deposit;
                if(nobody_deposit>=1001){nobody_money+=10;}
                else if(nobody_deposit>=2001){nobody_money+=20;}
                else if(nobody_deposit>=3001){nobody_money+=30;}
                else if(nobody_deposit>=4001){nobody_money+=45.2;}
                else if(nobody_deposit>=5001){nobody_money+=75.5;}
                else if(nobody_deposit>=10001){nobody_money+=999.99;}
                else if(nobody_deposit>=100001){nobody_money+=9999.99;}
                else if(nobody_deposit>=1000001){nobody_money+=99999.99;}
                break;
            }
        }
        void nobody_bank_withdraw(){
            while(true){
                system("cls");
                float nobody_bank_withdraw;
                cout<<gang<<gang<<gang<<"Sharkcup Bank ȡ���"<<gang<<gang<<gang<<endl;
                cout<<"\n�������ʽ�Ϊ: "<<nobody_money<<" $"<<endl;
                cout<<"�������д��Ϊ: "<<nobody_deposit<<" $"<<endl;
                cout<<"��������Ҫȡ��Ľ��:\n";
                cin>>nobody_bank_withdraw;
                if(nobody_bank_withdraw>nobody_deposit){break;}
                nobody_deposit-=nobody_bank_withdraw;
                nobody_money+=nobody_bank_withdraw;
                cout<<"ȡ�����,����ȡ�� "<<nobody_bank_withdraw<<" $";
                Sleep(1800);
                break;
            }
        }
        void nobody_bank_credit(){
            string choice;
            while(true){
                system("cls");
                cout<<gang<<gang<<gang<<"Sharkcup Bank ���"<<gang<<gang<<gang<<endl;
                cout<<"\n�������ʽ�Ϊ: "<<nobody_money<<" $"<<endl;
                cout<<"���Ѵ���: "<<nobody_credit<<" $"<<endl;
                cout<<"[����1] ��ʼ ����\n"
                    <<"[����2] ���� ����\n"
                    <<"[����0] �˳����\n:";
                cin>>choice;
                if(choice=="0"){break;}
                else if(choice=="1"){
                    float nobody_credit_temp;
                    cout<<"�����������\n:";
                    cin>>nobody_credit_temp;
                    if(nobody_credit_temp>=10000000 || nobody_credit_temp<0 || nobody_credit_temp== -0){cout<<"���޷�����" <<nobody_credit_temp <<" $"<<endl;Sleep(1000);continue;}
                    nobody_credit=nobody_credit_temp;
                    nobody_money+=nobody_credit;
                    nobody_have_credit=true;
                    break;
                    }
                else if(choice=="2"){
                    string choice;
                    cout<<"[����1] һ������\n"
                        <<"[����0] ����\n:";
                    cin>>choice;
                    if(choice=="0"){continue;}
                    else{
                        if(nobody_money>=nobody_credit){
                            nobody_money-=nobody_credit;
                            nobody_credit= 0 ;
                            nobody_have_credit= false ;
                        }
                        else{continue;}
                    }
                }
            }
        }
        void nobody_bank(){
            string choice;
            while(true){
                system("cls");
                cout<<gang<<gang<<gang<<"Sharkcup Bank"<<gang<<gang<<gang<<endl;
                cout<<"\n";
                cout<<"�������ʽ�Ϊ: "<<nobody_money<<" $"<<endl;
                cout<<"�������д��Ϊ: "<<nobody_deposit<<" $"<<endl;
                cout<<"���Ѵ���: "<<nobody_credit<<" $"<<endl;
                cout<<"\n[����1] ʹ�� ���\n"
                    <<"[����2] ʹ�� ȡ��\n"
                    <<"[����3] ʹ�� ����\n"
                    <<"[����0] �뿪 ����\n:";
                cin>>choice;
                if(choice=="0"){break;}
                else if(choice=="1"){nobody_bank_deposit();}
                else if(choice=="2"){nobody_bank_withdraw();}
                else if(choice=="3"){nobody_bank_credit();}
            }
        }
        void nobody_sell_house(){
            bool show_nobody_no_have_house = false;
            string choice;
            while(true){
                system("cls");
                cout<<gang<<gang<<gang<<"��������"<<gang<<gang<<gang<<endl;
                cout<<"\n";
                cout<<"�������ʽ�Ϊ: "<<nobody_money<<" $"<<endl;
                cout<<"����ӵ�� "<<nobody_house_count<<" �׷���"<<endl;
                if(show_nobody_no_have_house==true){cout<<"���޷�������ķ���,��Ϊ��û�з���"<<endl;}
                if(nobody_house_diamond_apartment==0&&nobody_house_poor_apartment==0&&nobody_house_rich_apartment==0){nobody_have_house=false;}
                cout<<"\n[����1] ���� ��ʯ��Ԣ Ŀǰ��ӵ��:"<<nobody_house_diamond_apartment<<" ��\n"
                    <<"[����2] ���� ������Ԣ Ŀǰ��ӵ��:"<<nobody_house_poor_apartment<<" ��\n"
                    <<"[����3] ���� ���ݴ�¥ Ŀǰ��ӵ��:"<<nobody_house_rich_apartment<<" ��\n"
                    <<"[����0] �˳�\n:";
                cin>>choice;
                if(choice=="0"){break;}
                else if(choice=="1"){
                    if(nobody_house_count==0){show_nobody_no_have_house=true;}
                    else{
                        nobody_money=nobody_money+40000*nobody_house_diamond_apartment;
                        nobody_house_count-=nobody_house_diamond_apartment;
                        nobody_house_diamond_apartment=0;
                    }
                }
                else if(choice=="2"){
                    if(nobody_house_count==0){show_nobody_no_have_house=true;}
                    else{
                        nobody_money=nobody_money+10000*nobody_house_poor_apartment;
                        nobody_house_count-=nobody_house_poor_apartment;
                        nobody_house_poor_apartment=0;
                    }
                }
                else if(choice=="3"){
                    if(nobody_house_count==0){show_nobody_no_have_house=true;}
                    else{
                        nobody_money=nobody_money+784499.44*nobody_house_rich_apartment;
                        nobody_house_count-=nobody_house_rich_apartment;
                        nobody_house_rich_apartment=0;
                    }
                }
                if(nobody_house_diamond_apartment==0 && nobody_house_poor_apartment==0 && nobody_house_rich_apartment==0){nobody_have_house=false;}
            }
        }
        void nobody_rent_house(){
            bool show_nobody_no_have_house = false;
            string choice;
            while(true){
                system("cls");
                cout<<gang<<gang<<gang<<"�������"<<gang<<gang<<gang<<endl;
                cout<<"\n";
                cout<<"�������ʽ�Ϊ: "<<nobody_money<<" $"<<endl;
                cout<<"����ӵ�� "<<nobody_house_count<<" �׷���"<<endl;
                if(show_nobody_no_have_house==true){cout<<"���޷�������ķ���,��Ϊ��û�з���"<<endl;}
                if(nobody_house_diamond_apartment==0&&nobody_house_poor_apartment==0&&nobody_house_rich_apartment==0){nobody_have_house=false;}
                cout<<"\n[����1] ��� ��ʯ��Ԣ  Ŀǰ��ӵ��:"<<nobody_house_diamond_apartment<<" ��\n"
                    <<"[����2] ��� ������Ԣ  Ŀǰ��ӵ��:"<<nobody_house_poor_apartment<<" ��\n"
                    <<"[����3] ��� ���ݴ�¥  Ŀǰ��ӵ��:"<<nobody_house_rich_apartment<<" ��\n"
                    <<"[����0] �˳�\n:";
                cin>>choice;
                if(choice=="0"){break;}
                else if(choice=="1"){
                    if(nobody_house_count==0){show_nobody_no_have_house=true;}
                    else{
                        nobody_house_rent_diamond_apartment=nobody_house_rent_diamond_apartment+4000*nobody_house_diamond_apartment;
                        nobody_house_count-=nobody_house_diamond_apartment;
                        nobody_house_diamond_apartment=0;
                    }
                }
                else if(choice=="2"){
                    if(nobody_house_count==0){show_nobody_no_have_house=true;}
                    else{
                        nobody_house_rent_poor_apartment=nobody_house_rent_poor_apartment+1000*nobody_house_poor_apartment;
                        nobody_house_count-=nobody_house_poor_apartment;
                        nobody_house_poor_apartment=0;
                    }
                }
                else if(choice=="3"){
                    if(nobody_house_count==0){show_nobody_no_have_house=true;}
                    else{
                        nobody_house_rent_rich_apartment=nobody_house_rent_rich_apartment+78449.944*nobody_house_rich_apartment;
                        nobody_house_count-=nobody_house_rich_apartment;
                        nobody_house_rich_apartment=0;
                    }
                }
            }
        }
        void nobody_buy_house(){
            string choice;
            while(true){
                system("cls");
                cout<<gang<<gang<<gang<<"�鿴����"<<gang<<gang<<gang<<endl;
                cout<<"\n";
                cout<<"�������ʽ�Ϊ: "<<nobody_money<<" $"<<endl;
                cout<<"����ӵ�� "<<nobody_house_count<<" �׷���"<<endl;
                cout<<"\n[����1] ���� ����\n"
                    <<"[����2] ��� ����\n"
                    <<"[����3] ���� ��ʯ��Ԣ 40000 $\n"
                    <<"[����4] ���� ����ס��Ԣ 10000 $\n"
                    <<"[����5] ���� ���ݴ�¥ 784499.44\n"
                    <<"[����0] �˳�\n:";
                cin>>choice;
                if(choice=="0"){break;}
                else if(choice=="1"){nobody_sell_house();}
                else if(choice=="2"){nobody_rent_house();}
                else if(choice=="3"){
                    if(nobody_money>=40000){
                        nobody_money-=40000;
                        nobody_house_name="��ʯ��Ԣ";
                        nobody_have_house=true;
                        nobody_house_count++;
                        nobody_house_diamond_apartment+=1;
                    }
                    else{continue;}
                }
                else if(choice=="4"){
                    if(nobody_money>=10000){
                        nobody_money-=10000;
                        nobody_house_name="����ס��Ԣ";
                        nobody_have_house=true;
                        nobody_house_count++;
                        nobody_house_poor_apartment+=1;
                    }
                    else{continue;}
                }
                else if(choice=="5"){
                    if(nobody_money>=784499.44){
                        nobody_money-=784499.44;
                        nobody_house_name="���ݴ�¥";
                        nobody_have_house=true;
                        nobody_house_count++;
                        nobody_house_rich_apartment+=1;
                    }
                    else{continue;}
                }
            }
        }
        void nobody_main_page(){
            string choice;
            while(true){
                system("cls");
                cout<<gang<<gang<<gang<<"�����"<<gang<<gang<<gang<<endl;
                cout<<"\n";
                cout<<"�������ʽ�Ϊ: "<<nobody_money<<" $"<<endl;
                cout<<"���Ĺ���Ϊ: "<<job<<endl;
                cout<<"���Ĺ���Ϊ: "<<nobody_salary<<" $\n";
                cout<<"����ѧ��Ϊ��"<<nobody_educational<<endl;
                cout<<"\n[����1] ӦƸ ����\n"
                    <<"[����2] ǰȥ ����\n"
                    <<"[����3] �鿴 ����\n"
                    <<"[����4] ���� ѧ��\n"
                    <<"[����5] ���� ����\n"
                    <<"[����6] ǰȥ ����\n"
                    <<"[����7] �鿴 ����\n"
                    <<"[����0] �˳�\n:";
                cin>>choice;
                if(choice=="0"){break;}
                else if(choice=="1"){nobody_find_job();}
                else if(choice=="2"){nobody_to_work();}
                else if(choice=="3"){nobody_pay_page();}
                else if(choice=="4"){nobody_exam();}
                else if(choice=="5"){nobody_home_main_page();}
                else if(choice=="6"){nobody_bank();}
                else if(choice=="7"){nobody_buy_house();}
            }
        }
        void nobody_story_galgame_function(){
            // nobody_main_page(); //test����ɾ��
            system("cls");
            string next;
            cout<<gang<<gang<<gang<<"����"<<gang<<gang<<gang<<endl;
            cout<<"\n";
            cout<<"İ���� �� �٣�С�ӣ�����Ҫ������ɻ����ͱ��뽻�����ѣ�\n����������Ѽ���";
            cin>>next;
            system("cls");
            cout<<"�� �� ����...... ����......��û��Ǯ\n����������Ѽ���";
            cin>>next;
            system("cls");
            cout<<"İ���� �� ����ģ� Ҫ��������ɻ�͵��Ƚ������ѣ��������������Ĺ�أ������ģ��ֵ��Ǵ�\n����������Ѽ���";
            cin>>next;
            system("cls");
            cout<<"�� �� ���� ���� ����ˣ�\n����������Ѽ���";
            cin>>next;
            system("cls");
            cout<<"İ���� �� ����ʲô�� �㲻��˵��û��Ǯ�� ���������ʲô��\n����������Ѽ���";
            cin>>next;
            system("cls");
            cout<<"�� �� ���������������������β���Ǯ\n����������Ѽ���";
            cin>>next;
            system("cls");
            cout<<"İ���� �� ���� ȥ����ģ� �ɻ��Ƚ�Ǯ��������Ӽ����ˣ��Ͻ�����\n����������Ѽ���";
            cin>>next;
            system("cls");
            cout<<"���ʽ�� 2000 $\n����������Ѽ���";
            cin>>next;
            system("cls");
            nobody_story_showed=true;
            nobody_main_page();

        }
        void nobody_story(){
            string choice;
            while(true){
                system("cls");
                cout<<gang<<gang<<gang<<"�����"<<gang<<gang<<gang<<endl;
                cout<<"\n";
                cout<<"����:\n"
                    <<"����һ����ʵ�����ƽ�����档��������µ����ǲ��������ڸֽ���������ɵĴ��֣�������������Ƭ��Ӱ֮�£��������̻������о�����������\n"
                    <<"��Ϸ�еġ��㡱�Ǹ�ƽ����������ƽ����С������㡱������һ�п������Ǳ��������������������������������˽����Ϸ�еġ��㡱�������Ƿ��ܰ������㡱�߳�������ӭ��������\n"
                    <<"\n[����1] ������Ϸ\n"
                    <<"[����2] ɾ���浵\n"
                    <<"[����0] �˳���Ϸ\n";
                cin>>choice;
                if(choice=="0"){system("cls");break;}
                else if(choice=="1"){
                    if(nobody_story_showed==false){nobody_story_galgame_function();}
                    else{
                        nobody_main_page();
                    }
                }
                else if(choice=="2"){nobody_delete_save();}
            }
        }
};

void main_nobody(){
    SharkcupNobody nobody;
    nobody.nobody_story();
}