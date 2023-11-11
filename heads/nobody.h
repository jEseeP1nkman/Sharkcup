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
        string nobody_house_name="家";
        int nobody_house_diamond_apartment = 0;
        int nobody_house_poor_apartment = 0;
        int nobody_house_rich_apartment = 0;
        int nobody_house_count= 0;
        int nobody_story_showed= false ;
        string nobody_educational = "函授大专";
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
            nobody_house_name="家";
            nobody_house_diamond_apartment = 0;
            nobody_house_poor_apartment = 0;
            nobody_house_rich_apartment = 0;
            nobody_educational = "函授大专";
            nobody_yanjiusheng_exam = 0;
            show_no_find_job = false;
        }
        void nobody_exam(){
            string choice;
            while(true){
                system("cls");
                cout<<gang<<gang<<gang<<"考试区"<<gang<<gang<<gang<<endl;
                cout<<"\n";
                cout<<"您的总资金为: "<<nobody_money<<" $"<<endl;;
                cout<<"您的学历为: "<<nobody_educational<<endl;
                cout<<"\n[输入1] 自考本科\n"
                    <<"[输入2] 考 研究生\n"
                    <<"[输入3] 买个学历\n"  
                    <<"[输入0] 退出考试\n:";
                cin>>choice;
                if(choice=="0"){break;}
                else if(choice=="1"){
                    bool show_have_money_to_exam = true;
                    while(true){
                        system("cls");
                        string choice;
                        cout<<gang<<gang<<gang<<"自考本科"<<gang<<gang<<gang<<endl;
                        cout<<"\n";
                        cout<<"您的总资金为: "<<nobody_money<<" $"<<endl;
                        cout<<"考试费用为 555.44 $"<<endl;
                        if(show_nobody_no_score==false){cout<<"您的分数为: "<<job_exam_score<<endl;}
                        if(show_have_money_to_exam==false){cout<<"您没有金钱去考试"<<endl;}
                        cout<<"您的学历为: "<<nobody_educational<<endl;
                        cout<<"\n[输入1] 开始考试\n"
                            <<"[输入0] 退出考场\n:";
                        cin>>choice;
                        if(choice=="0"){break;}
                        else if(choice=="1"){
                            if(nobody_money<555.44){show_have_money_to_exam=false;continue;}
                            system("cls");
                            srand(time(nullptr));
                            int random_num = rand()%3;
                            if(random_num==0){
                                system("cls");
                                cout<<gang<<gang<<gang<<"考试中"<<gang<<gang<<gang<<endl;
                                string choice;
                                string q1,q2,q3,q4,q5;
                                cout<<"(第一题) 1+2=?\n:";
                                cin>>q1;
                                cout<<"(第二题) 补全该单词 ap?le\n:";
                                cin>>q2;
                                cout<<"(第三题) 9*4=?\n:";
                                cin>>q3;
                                cout<<"(第四题) 补全英语单词 a,b,c,d,e,?,g,h\n:";
                                cin>>q4;
                                cout<<"(第五题) 妈妈的英语单词是?\n:";
                                cin>>q5;
                                if(q1=="3"){job_exam_score+=20;}
                                if(q2=="p"||q2=="apple"||q2=="P"){job_exam_score+=20;}
                                if(q3=="36"){job_exam_score+=20;}
                                if(q4=="f"||q4=="F"){job_exam_score+=20;}
                                if(q5=="mom"||q5=="mother"||q5=="mum"){job_exam_score+=20;}
                                show_nobody_no_score=false;
                                if(job_exam_score>=60){nobody_educational="自考本科生";}
                            }
                            else if(random_num==1){
                                system("cls");
                                cout<<gang<<gang<<gang<<"考试中"<<gang<<gang<<gang<<endl;
                                string choice;
                                string q1,q2,q3,q4,q5;
                                cout<<"(第一题) 99+123=?\n:";
                                cin>>q1;
                                cout<<"(第二题) 补全该单词 Am?rica\n:";
                                cin>>q2;
                                cout<<"(第三题) 32*2=?\n:";
                                cin>>q3;
                                cout<<"(第四题) 补全英语单词 a,b,c,d,e,?,g,h\n:";
                                cin>>q4;
                                cout<<"(第五题) 德国的英语单词是?\n:";
                                cin>>q5;
                                if(q1=="222"){job_exam_score+=20;}
                                if(q2=="e"||q2=="America"||q2=="E"||q2=="america"){job_exam_score+=20;}
                                if(q3=="64"){job_exam_score+=20;}
                                if(q4=="f"||q4=="F"){job_exam_score+=20;}
                                if(q5=="Germany"||q5=="GERMANY"){job_exam_score+=20;}
                                show_nobody_no_score=false;
                                if(job_exam_score>=60){nobody_educational="自考本科生";}
                            }
                            else if(random_num==2){
                                system("cls");
                                cout<<gang<<gang<<gang<<"考试中"<<gang<<gang<<gang<<endl;
                                string choice;
                                string q1,q2,q3,q4,q5;
                                cout<<"(第一题) 1314-794=?\n:";
                                cin>>q1;
                                cout<<"(第二题) 补全该单词 Com?uter\n:";
                                cin>>q2;
                                cout<<"(第三题) 64÷64=?\n:";
                                cin>>q3;
                                cout<<"(第四题) 补全英语单词 a,b,c,d,?,f,g,h\n:";
                                cin>>q4;
                                cout<<"(第五题) 学生的英语单词是?\n:";
                                cin>>q5;
                                if(q1=="520"){job_exam_score+=20;}
                                if(q2=="p"||q2=="Computer"||q2=="P"||q2=="computer"){job_exam_score+=20;}
                                if(q3=="1"){job_exam_score+=20;}
                                if(q4=="e"||q4=="E"){job_exam_score+=20;}
                                if(q5=="STUDENT"||q5=="student"){job_exam_score+=20;}
                                show_nobody_no_score=false;
                                if(job_exam_score>=60){nobody_educational="自考本科生";}
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
                        cout<<gang<<gang<<gang<<"考 研"<<gang<<gang<<gang<<endl;
                        cout<<"\n";
                        cout<<"您的总资金为: "<<nobody_money<<" $"<<endl;
                        cout<<"考试费用为 700 $"<<endl;
                        if(show_nobody_no_score==false){cout<<"您的分数为: "<<job_exam_score<<endl;}
                        if(show_have_money_to_exam==false){cout<<"您没有金钱去考试"<<endl;}
                        if(show_low_educational==true){cout<<"您的学历为: "<<nobody_educational<<"您无法考研究生"<<endl;}
                        cout<<"您的学历为: "<<nobody_educational<<endl;
                        cout<<"\n[输入1] 开始考试\n"
                            <<"[输入0] 退出考场\n:";
                        cin>>choice;
                        if(choice=="0"){break;}
                        else if(choice=="1"){
                            if(nobody_educational=="函授大专"){show_low_educational=true;continue;}
                            if(nobody_money<700){show_have_money_to_exam=false;continue;}
                            system("cls");
                            srand(time(nullptr));
                            int random_num = rand()%3;
                            if(random_num==0){
                                string q1,q2,q3,q4,q5;
                                cout<<"(第一题) 夏天 的英文怎么拼写？"<<endl;
                                cin>>q1;
                                cout<<"(第二题) 美国独立日是哪一年？"<<endl;
                                cin>>q2;
                                cout<<"(第三题) 世界上最大的洲是什么？"<<endl;
                                cin>>q3;
                                cout<<"(第四题) 氧气的元素符号为？"<<endl;
                                cin>>q4;
                                cout<<"(第五题) 10 % 3 = ?"<<endl;
                                cin>>q5;
                                if(q1=="summer"||q1=="SUMMER"){nobody_yanjiusheng_exam+=20;}
                                if(q2=="1776"){nobody_yanjiusheng_exam+=20;}
                                if(q3=="Asia"||q3=="亚洲"||q3=="ASIA"){nobody_yanjiusheng_exam+=20;}
                                if(q4=="O"||q4=="o"){nobody_yanjiusheng_exam+=20;}
                                if(q5=="1"){nobody_yanjiusheng_exam+=20;}
                                if(nobody_yanjiusheng_exam>=80){nobody_educational="研究生";}
                            }
                            if(random_num==1){
                                string q1,q2,q3,q4,q5;
                                cout<<"(第一题) 印度 的英文怎么拼写？"<<endl;
                                cin>>q1;
                                cout<<"(第二题) 选择适当的介词填入下面的句子：\"She is sitting ___ the desk.\""<<endl;
                                cin>>q2;
                                cout<<"(第三题) 谢谢你 的英文怎么拼写？"<<endl;
                                cin>>q3;
                                cout<<"(第四题) 选择正确的单词拼写：\"house\", \"hause\", \"howse\", \"haus\""<<endl;
                                cin>>q4;
                                cout<<"(第五题) 写出 \"school\" 的复数形式。"<<endl;
                                cin>>q5;
                                if(q1=="India"||q1=="india"||q1=="INDIA"){nobody_yanjiusheng_exam+=20;}
                                if(q2=="at"){nobody_yanjiusheng_exam+=20;}
                                if(q3=="Thank you"||q3=="thank you"||q3=="THANK YOU"||q3=="Thank You"){nobody_yanjiusheng_exam+=20;}
                                if(q4=="house"||q4=="HOUSE"||q4=="House"){nobody_yanjiusheng_exam+=20;}
                                if(q5=="schools"||q5=="SCHOOLS"||q5=="Schools"){nobody_yanjiusheng_exam+=20;}
                                if(nobody_yanjiusheng_exam>=80){nobody_educational="研究生";}
                            }
                            if(random_num==2){
                                string q1,q2,q3,q4,q5;
                                cout<<"(第一题) 2 + 3 = ?"<<endl;
                                cin>>q1;
                                cout<<"(第二题) 12 ÷ 2 = ?"<<endl;
                                cin>>q2;
                                cout<<"(第三题) 8? = ?"<<endl;
                                cin>>q3;
                                cout<<"(第四题) 10 % 3 = ?"<<endl;
                                cin>>q4;
                                cout<<"(第五题) 16 ÷ (4 × 2) = ?"<<endl;
                                cin>>q5;
                                if(q1=="5"){nobody_yanjiusheng_exam+=20;}
                                if(q2=="6"){nobody_yanjiusheng_exam+=20;}
                                if(q3=="64"){nobody_yanjiusheng_exam+=20;}
                                if(q4=="1"){nobody_yanjiusheng_exam+=20;}
                                if(q5=="2"){nobody_yanjiusheng_exam+=20;}
                                if(nobody_yanjiusheng_exam>=80){nobody_educational="研究生";}
                            }
                        }
                    }
                }
                else if(choice=="3"){
                    string choice;
                    while(true){
                        system("cls");
                        cout<<gang<<gang<<gang<<"学历购买"<<gang<<gang<<gang<<endl;
                        cout<<"\n";
                        cout<<"您的总资金为: "<<nobody_money<<" $"<<endl;
                        cout<<"您的学历为: "<<nobody_educational<<endl;
                        cout<<"\n[输入1] 购买 自考本科 费用 2000 $\n"
                            <<"[输入2] 购买 研究生 费用 5999 $\n"
                            <<"[输入0] 退出\n:";
                        cin>>choice;
                        if(choice=="0"){break;}
                        else if(choice=="1"){
                            if(nobody_money<2000){break;}
                            else{nobody_educational="自考本科";nobody_money-=2000;}
                        }
                        else if(choice=="2"){
                            if(nobody_money<5999){break;}
                            else{nobody_educational="研究生";nobody_money-=5999;}
                        }
                    }
                }
            }
        }
        void nobody_find_job_choice_1(){
            if(nobody_educational=="函授大专"||nobody_educational=="自考本科"||nobody_educational=="研究生"){job="工地搬运者";nobody_salary=410;have_job=true;nobody_work_day_count=0;show_no_find_job=false;}
            else{show_no_find_job=true;}
        }
        void nobody_find_job_choice_2(){
            if(nobody_educational=="函授大专"||nobody_educational=="自考本科"||nobody_educational=="研究生"){job="马路清洁者";nobody_salary=360;have_job=true;nobody_work_day_count=0;show_no_find_job=false;}
            else{show_no_find_job=true;}
        }
        void nobody_find_job_choice_3(){
            if(nobody_educational=="研究生"||nobody_educational=="自考本科"){job="小学教师";nobody_salary=624.4;have_job=true;nobody_work_day_count=0;show_no_find_job=false;}
            else{show_no_find_job=true;}
        }
        void nobody_find_job_choice_4(){
            if(nobody_educational=="研究生"){job="士兵";nobody_salary=1064.91;have_job=true;nobody_work_day_count=0;show_no_find_job=false;}
            else{show_no_find_job=true;}
        }
        void nobody_find_job_choice_5(){
            if(nobody_educational=="函授大专"||nobody_educational=="自考本科"||nobody_educational=="研究生"){job="青龙帮";nobody_salary=100;have_job=true;nobody_work_day_count=0;show_no_find_job=false;}
            else{show_no_find_job=true;}
        }
        void nobody_find_job_choice_6(){
            if(nobody_educational=="研究生"){job="黑水雇佣兵";nobody_salary=100000;have_job=true;nobody_work_day_count=0;show_no_find_job=false;}
            else{show_no_find_job=true;}
        }
        void nobody_find_job_choice_7(){
            if(nobody_educational=="函授大专"||nobody_educational=="自考本科"||nobody_educational=="研究生"){job="外卖骑手";nobody_salary=630;have_job=true;nobody_work_day_count=0;show_no_find_job=false;}
            else{show_no_find_job=true;}
        }
        void nobody_find_job_choice_8(){
            if(nobody_educational=="自考本科"||nobody_educational=="研究生"){job="赛车手";nobody_salary=1039.7;have_job=true;nobody_work_day_count=0;show_no_find_job=false;}
            else{show_no_find_job=true;}
        }
        void nobody_find_job(){
            string choice;
            while(true){
                system("cls");
                cout<<gang<<gang<<gang<<"招聘广场"<<gang<<gang<<gang<<endl;
                cout<<"\n";
                cout<<"您的学历为: "<<nobody_educational<<endl;
                if(show_nobody_no_score==true){cout<<"请前去考试。\n";}
                cout<<"您的工作为: "<<job<<endl;
                if(show_no_find_job==true){cout<<"应聘失败"<<endl;}
                cout<<"\n[输入1] 应聘 工地搬运者\n"
                    <<"[输入2] 应聘 马路清洁者\n"
                    <<"[输入3] 应聘 小学教师\n"
                    <<"[输入4] 成为 士兵\n"
                    <<"[输入5] 应聘 青龙帮\n"
                    <<"[输入6] 应聘 黑水雇佣兵\n"
                    <<"[输入7] 应聘 外卖骑手\n"
                    <<"[输入8] 应聘 赛车手\n"
                    <<"[输入0] 离开招聘\n:";
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
                if(job=="工地搬运者"){
                    nobody_work_judge();
                    if(nobody_work_day_count==12){nobody_salary+=100;}
                    if(nobody_work_day_count==36){nobody_salary+=1256.88;}
                    srand(time(nullptr));
                    int random_num = rand()%5;
                    string random_event[] = {"你在工地上认识了一个新朋友","这月今天工作很努力，老板给你发奖金 150 $","从现在开始你决定戒烟","今晚老板请客","昨晚约了个高中生打炮 花费 400 $"};
                    string event=random_event[random_num];
                    while(true){
                        system("cls");
                        string choice;
                        cout<<gang<<gang<<gang<<"本月事件"<<gang<<gang<<gang<<endl;
                        cout<<"\n";
                        cout<<event<<endl;
                        if(event=="这月今天工作很努力，老板给你发奖金 150 $"){nobody_money+=150;}
                        else if(event=="今晚老板请客"){nobody_money+=20;}
                        else if(event=="昨晚约了个高中生打炮 花费 400 $"){nobody_money-=400;}
                        cout<<"\n[输入任意键] 结束这个月\n:";
                        cin>>choice;
                        break;
                    }
                }
                else if(job=="马路清洁者"){
                    nobody_work_judge();
                    if(nobody_work_day_count==12){nobody_salary+=90;}
                    else if(nobody_work_day_count==14){nobody_salary+=90;}
                    else if(nobody_work_day_count==16){nobody_salary+=90;}
                    else if(nobody_work_day_count==18){nobody_salary+=90;}
                    else if(nobody_work_day_count==20){nobody_salary+=90;}
                    srand(time(nullptr));
                    int random_num = rand()%6;
                    string random_event[] = {"今天在马路上捡到了 100 $","早上因为迟到而被领导扣工资 20 $","你在马路上捡到了一个 Chanel 包包，你将他卖了，赚取 1444 $","秋天到了，路上好多树叶呀","早上扫起来的树叶堆被小屁孩踩乱了","扫地的钳子坏了，重新买了一个"};
                    string event=random_event[random_num];
                    while(true){
                        system("cls");
                        string choice;
                        cout<<gang<<gang<<gang<<"本月事件"<<gang<<gang<<gang<<endl;
                        cout<<"\n";
                        cout<<event<<endl;
                        if(event=="今天在马路上捡到了 100 $"){nobody_money+=100;}
                        else if(event=="你在马路上捡到了一个 Chanel 包包，你将他卖了，赚取 1444 $"){nobody_money+=1444;}
                        else if(event=="早上因为迟到而被领导扣工资 20 $"){nobody_money-=20;}
                        else if(event=="扫地的钳子坏了，重新买了一个"){nobody_money-=5;}
                        cout<<"\n[输入任意键] 结束这个月\n:";
                        cin>>choice;
                        break;
                    }
                }
                else if(job=="小学教师"){
                    nobody_work_judge();
                    if(nobody_work_day_count==12){nobody_salary+=1000;}
                    else if(nobody_work_day_count==45){nobody_salary+=5000;}
                    else if(nobody_work_day_count==100){nobody_money+=40000;}
                    srand(time(nullptr));
                    int random_num = rand()%6;
                    string random_event[] = {"今天你没收了小学生的黄金卡片，你将其卖了，赚取 10 $","你今天在学校里吃完饭","今天收黑班费，赚取 175 $","听说我们班的班花与别的班的差生谈恋爱了","今天和体育老师换了一节课","听说当老师退休金很高"};
                    string event=random_event[random_num];
                    while(true){
                        system("cls");
                        string choice;
                        cout<<gang<<gang<<gang<<"本月事件"<<gang<<gang<<gang<<endl;
                        cout<<"\n";
                        cout<<event<<endl;
                        if(event=="今天你没收了小学生的黄金卡片，你将其卖了，赚取 10 $"){nobody_money+=10;}
                        else if(event=="你今天在学校里吃完饭"){nobody_money+=15;}
                        else if(event=="今天收黑班费，赚取 175 $"){nobody_money+=175;}
                        cout<<"\n[输入任意键] 结束这个月\n:";
                        cin>>choice;
                        break;
                    }
                }
                else if(job=="士兵"){
                    nobody_work_judge();
                    if(nobody_work_day_count==12){nobody_salary+=600;}
                    else if(nobody_work_day_count==22){nobody_salary+=650;}
                    else if(nobody_work_day_count==26){nobody_salary+=750;}
                    else if(nobody_work_day_count==100){nobody_salary+=6000;}
                    srand(time(nullptr));
                    int random_num = rand()%1;
                    string random_event[] = {"您正在服从兵役中......"};
                    string event=random_event[random_num];
                    while(true){
                        system("cls");
                        string choice;
                        cout<<gang<<gang<<gang<<"本月事件"<<gang<<gang<<gang<<endl;
                        cout<<"\n";
                        cout<<event<<endl;
                        if(event=="您正在服从兵役中......"){nobody_money+=1064.91;}
                        Sleep(2000);
                        break;
                    }
                }
                else if(job=="青龙帮"){
                    nobody_work_judge();
                    if(nobody_work_day_count % 12 == 0){nobody_salary+=250;}
                    srand(time(nullptr));
                    int random_num = rand()%11;
                    string random_event[] = {"今日收保护费未达标,老大要你下跪谢罪","今日老大开心，赏了你2000 $","听说老大的老婆和毒液帮的小混混搞上了","昨日毒液帮的小混混被我们青龙帮的弟兄打的他连妈都不认识","今日干了一票大的，老大赏了你14530.9 $","老大看你表现的很好，给你加工资 24662 $","老大贩毒被条子抓到了，你便宜了那小子 10000 $","你被条子抓了，老大没有帮你，你的黑钱全被没收","你成为了老大的走私主管，工资增加 10000 $","今日你的小弟被独龙帮的小混混抓走了，那傻逼要你交出 100000 $ 换回你的小弟","以前技校里的同学今天找你借钱，你二话不说把他的腰子割了，换了 10000 $"};
                    string event=random_event[random_num];
                    while(true){
                        system("cls");
                        string choice;
                        cout<<gang<<gang<<gang<<"本月事件"<<gang<<gang<<gang<<endl;
                        cout<<"\n";
                        cout<<event<<endl;
                        if(event=="今日老大开心，赏了你 2000 $"){nobody_money+= 2000;}
                        else if(event=="今日干了一票大的，老大赏了你 14530.9 $"){nobody_money+= 14530.9;}
                        else if(event=="老大看你表现的很好，给你加工资 24662 $"){nobody_salary+= 24662;}
                        else if(event=="老大贩毒被条子抓到了，你便宜了那小子 10000 $"){nobody_money-= 10000;}
                        else if(event=="你被条子抓了，老大没有帮你，你的黑钱全被没收"){nobody_money-= nobody_money;}
                        else if(event=="你成为了老大的走私主管，工资增加 10000 $"){nobody_salary+= 10000;}
                        else if(event=="今日你的小弟被独龙帮的小混混抓走了，那傻逼要你交出 100000 $ 换回你的小弟"){nobody_money-= 100000;}
                        else if(event=="以前技校里的同学今天找你借钱，你二话不说把他的腰子割了，换了 10000 $"){nobody_money+= 10000;}
                        cout<<"\n[输入任意键] 结束这个月\n:";
                        cin>>choice;
                        break;
                    }
                }
                else if(job=="黑水雇佣兵"){
                    nobody_work_judge();
                    if(nobody_work_day_count % 12 == 0){nobody_salary+=250;}
                    srand(time(nullptr));
                    int random_num = rand()%6;
                    string random_event[] = {"你被派遣到了俄乌战场，你在战场上使用手榴弹一下炸死5人，战友们给你取了个外号叫 炸弹人","你在俄乌战场上被敌人射穿膝盖，需要医疗费 20000 $ 治疗你的膝盖","你在训练的时候擦枪走火，你被罚了 10000 $","你被派遣到了巴以战场，你被恐怖分子绑架充当人质，拿刀威胁你交出 500000 $","你被派遣到了巴以战场，你在战场上搜刮尸体，然后再卖给犹太人赚取了 990250.69 $","你的战友在巴以战场被恐怖分子射杀"};
                    string event=random_event[random_num];
                    while(true){
                        system("cls");
                        string choice;
                        cout<<gang<<gang<<gang<<"本月事件"<<gang<<gang<<gang<<endl;
                        cout<<"\n";
                        cout<<event<<endl;
                        if(event=="你在俄乌战场上被敌人射穿膝盖，需要医疗费 20000 $ 治疗你的膝盖"){nobody_money-= 20000;}
                        else if(event=="你在训练的时候擦枪走火，你被罚了 10000 $"){nobody_money-= 10000;}
                        else if(event=="你被派遣到了巴以战场，你被恐怖分子绑架充当人质，拿刀威胁你交出 500000 $"){nobody_money-= 500000;}
                        else if(event=="你被派遣到了巴以战场，你在战场上搜刮尸体，然后再卖给犹太人赚取了 990250.69 $"){nobody_money+= 990250.69;}
                        cout<<"\n[输入任意键] 结束这个月\n:";
                        cin>>choice;
                        break;
                    }
                }
                else if(job=="外卖骑手"){
                    nobody_work_judge();
                    if(nobody_work_day_count==6){nobody_salary+=40.66;}
                    if(nobody_work_day_count==12){nobody_salary+=100;}
                    if(nobody_work_day_count==36){nobody_salary+=1956.12;}
                    srand(time(nullptr));
                    int random_num = rand()%6;
                    string random_event[] = {"今天感冒了，买药花费 20 $","这月同行内卷，什么单都没抢到","今天堵车,送外卖超时了，老板扣钱 18 $","送外卖时，一个不注意，外卖被偷了，老板扣钱 17 $","这月很无聊","送外卖好累，但是顾客给了五星好评，老板发奖金 100 $"};
                    string event=random_event[random_num];
                    while(true){
                        system("cls");
                        string choice;
                        cout<<gang<<gang<<gang<<"本月事件"<<gang<<gang<<gang<<endl;
                        cout<<"\n";
                        cout<<event<<endl;
                        if(event=="今天感冒了，买药花费 20 $"){nobody_money-=20;}
                        else if(event=="这月同行内卷，什么单都没抢到"){nobody_money-=10;}
                        else if(event=="今天堵车,送外卖超时了，老板扣钱 18 $"){nobody_money-=18;}
                        else if(event=="送外卖时，一个不注意，外卖被偷了，老板扣钱 17 $"){nobody_money-=17;}
                        else if(event=="送外卖好累，但是顾客给了五星好评，老板发奖金 100 $"){nobody_money+=100;}
                        cout<<"\n[输入任意键] 结束这个月\n:";
                        cin>>choice;
                        break;
                    }
                }
                else if(job=="赛车手"){
                    nobody_work_judge();
                    if(nobody_work_day_count==12){nobody_salary+=1000;}
                    if(nobody_work_day_count==24){nobody_salary+=1000;}
                    if(nobody_work_day_count==36){nobody_salary+=1000;}
                    srand(time(nullptr));
                    int random_num = rand()%5;
                    string random_event[] = {"昨天那个没长眼睛的傻逼，撞了你的车，修车花费 2000 $","比赛胜利！开香槟，派对，旅游花费 6000 $ 但是获得奖金 40000 $ , 工资增长 2000 $","你冒险的开车风格让你成为你圈子里的明星，且老板给你拉来了更多的赞助，工资增加 5000 $","比赛受伤，治疗花费 10000 $","你因为犯规而被罚下,你这月没有工资"};
                    string event=random_event[random_num];
                    while(true){
                        system("cls");
                        string choice;
                        cout<<gang<<gang<<gang<<"本月事件"<<gang<<gang<<gang<<endl;
                        cout<<"\n";
                        cout<<event<<endl;
                        if(event=="昨天那个没长眼睛的傻逼，撞了你的车，修车花费 2000 $"){nobody_money-=2000;}
                        else if(event=="比赛胜利！开香槟，派对，旅游花费 6000 $ 但是获得奖金 40000 $ , 工资增长 2000 $"){nobody_money-=6000;nobody_money+=40000;nobody_salary+=2000;}
                        else if(event=="你冒险的开车风格让你成为你圈子里的明星，且老板给你拉来了更多的赞助，工资增加 5000 $"){nobody_salary+=5000;}
                        else if(event=="比赛受伤，治疗花费 10000 $"){nobody_money-=10000;}
                        else if(event=="你因为犯规而被罚下,你这月没有工资"){nobody_money-=nobody_salary;}
                        cout<<"\n[输入任意键] 结束这个月\n:";
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
                cout<<gang<<gang<<gang<<"工作区"<<gang<<gang<<gang<<endl;
                cout<<"\n";
                if(have_job==false){cout<<"您还没有工作,请您前去应聘工作"<<endl;}
                cout<<"您的工作为: "<<job<<" 您已工作 "<<nobody_work_day_count<<" 个月"<<endl;
                cout<<"您的工资为: "<<nobody_salary<<" $"<<endl; 
                cout<<"您的总资金为: "<<nobody_money<<" $"<<endl;
                cout<<"您本月的开销总共: "<<nobody_pay<<" $"<<endl;
                cout<<"\n[输入1] 前去工作\n"
                    <<"[输入0] 退出工作\n:";
                cin>>choice;
                if(choice=="0"){break;}
                else if(choice=="1"){nobody_work();}
            }
        }
        void nobody_pay_page(){
            string choice;
            while(true){
                system("cls");
                cout<<gang<<gang<<gang<<"开销单"<<gang<<gang<<gang<<endl;
                cout<<"\n";
                cout<<"您的总资金为: "<<nobody_money<<" $\n";
                cout<<"您的工资为: "<<nobody_salary<<" $\n";
                cout<<"收租所获:\n";
                cout<<"     钻石公寓: "<<nobody_house_rent_diamond_apartment<<" $\n"
                    <<"     狗不理公寓: "<<nobody_house_rent_poor_apartment<<" $\n"
                    <<"     加州大楼: "<<nobody_house_rent_rich_apartment<<" $";
                cout<<"\n您每月开销为:\n"
                    <<"     房租 -"<<nobody_rent<<" $\n"
                    <<"     水电费 -20 $\n"
                    <<"     伙食费 -100 $\n"
                    <<"     >> 共 "<<nobody_pay<<" $\n";
                cout<<"\n每月净赚 "<<nobody_salary-nobody_pay+nobody_house_rent_diamond_apartment+nobody_house_rent_poor_apartment+nobody_house_rent_rich_apartment<<" $"<<endl;
                cout<<"\n[输入0] 退出\n:";
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
                cout<<"\n[输入1] 吃饭\n"
                    <<"[输入2] 睡觉\n"
                    <<"[输入3] 看电视\n"
                    <<"[输入0] 离开房间\n:";
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
                if(nobody_have_rent==false && nobody_have_house==false){cout<<"\n你取消了房租，如果你没有购买房子那你就只能四处流浪啦~"<<endl;}
                else if(nobody_have_rent==true){cout<<"\n你租了一个房子"<<endl;}
                cout<<"您拥有 "<<nobody_house_count<<" 套房产"<<endl;
                cout<<"\n[输入1] 进入房间\n"
                    <<"[输入2] 取消房租\n"
                    <<"[输入3] 租个房子\n"
                    <<"[输入0] 从家离开\n:";
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
                cout<<gang<<gang<<gang<<"Sharkcup Bank 存款机"<<gang<<gang<<gang<<endl;
                cout<<"\n您的总资金为: "<<nobody_money<<" $"<<endl;
                cout<<"请输入你要存款的金额:\n";
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
                cout<<gang<<gang<<gang<<"Sharkcup Bank 取款机"<<gang<<gang<<gang<<endl;
                cout<<"\n您的总资金为: "<<nobody_money<<" $"<<endl;
                cout<<"您的银行存款为: "<<nobody_deposit<<" $"<<endl;
                cout<<"请输入你要取款的金额:\n";
                cin>>nobody_bank_withdraw;
                if(nobody_bank_withdraw>nobody_deposit){break;}
                nobody_deposit-=nobody_bank_withdraw;
                nobody_money+=nobody_bank_withdraw;
                cout<<"取款完成,您已取款 "<<nobody_bank_withdraw<<" $";
                Sleep(1800);
                break;
            }
        }
        void nobody_bank_credit(){
            string choice;
            while(true){
                system("cls");
                cout<<gang<<gang<<gang<<"Sharkcup Bank 贷款处"<<gang<<gang<<gang<<endl;
                cout<<"\n您的总资金为: "<<nobody_money<<" $"<<endl;
                cout<<"您已贷款: "<<nobody_credit<<" $"<<endl;
                cout<<"[输入1] 开始 贷款\n"
                    <<"[输入2] 进行 还款\n"
                    <<"[输入0] 退出贷款处\n:";
                cin>>choice;
                if(choice=="0"){break;}
                else if(choice=="1"){
                    float nobody_credit_temp;
                    cout<<"请输入贷款金额\n:";
                    cin>>nobody_credit_temp;
                    if(nobody_credit_temp>=10000000 || nobody_credit_temp<0 || nobody_credit_temp== -0){cout<<"您无法贷款" <<nobody_credit_temp <<" $"<<endl;Sleep(1000);continue;}
                    nobody_credit=nobody_credit_temp;
                    nobody_money+=nobody_credit;
                    nobody_have_credit=true;
                    break;
                    }
                else if(choice=="2"){
                    string choice;
                    cout<<"[输入1] 一键还款\n"
                        <<"[输入0] 返回\n:";
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
                cout<<"您的总资金为: "<<nobody_money<<" $"<<endl;
                cout<<"您的银行存款为: "<<nobody_deposit<<" $"<<endl;
                cout<<"您已贷款: "<<nobody_credit<<" $"<<endl;
                cout<<"\n[输入1] 使用 存款\n"
                    <<"[输入2] 使用 取款\n"
                    <<"[输入3] 使用 贷款\n"
                    <<"[输入0] 离开 银行\n:";
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
                cout<<gang<<gang<<gang<<"售卖房产"<<gang<<gang<<gang<<endl;
                cout<<"\n";
                cout<<"您的总资金为: "<<nobody_money<<" $"<<endl;
                cout<<"您已拥有 "<<nobody_house_count<<" 套房产"<<endl;
                if(show_nobody_no_have_house==true){cout<<"您无法售卖你的房产,因为你没有房产"<<endl;}
                if(nobody_house_diamond_apartment==0&&nobody_house_poor_apartment==0&&nobody_house_rich_apartment==0){nobody_have_house=false;}
                cout<<"\n[输入1] 售卖 钻石公寓 目前您拥有:"<<nobody_house_diamond_apartment<<" 套\n"
                    <<"[输入2] 售卖 狗不理公寓 目前您拥有:"<<nobody_house_poor_apartment<<" 套\n"
                    <<"[输入3] 售卖 加州大楼 目前您拥有:"<<nobody_house_rich_apartment<<" 套\n"
                    <<"[输入0] 退出\n:";
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
                cout<<gang<<gang<<gang<<"租出房产"<<gang<<gang<<gang<<endl;
                cout<<"\n";
                cout<<"您的总资金为: "<<nobody_money<<" $"<<endl;
                cout<<"您已拥有 "<<nobody_house_count<<" 套房产"<<endl;
                if(show_nobody_no_have_house==true){cout<<"您无法售卖你的房产,因为你没有房产"<<endl;}
                if(nobody_house_diamond_apartment==0&&nobody_house_poor_apartment==0&&nobody_house_rich_apartment==0){nobody_have_house=false;}
                cout<<"\n[输入1] 租出 钻石公寓  目前您拥有:"<<nobody_house_diamond_apartment<<" 套\n"
                    <<"[输入2] 租出 狗不理公寓  目前您拥有:"<<nobody_house_poor_apartment<<" 套\n"
                    <<"[输入3] 租出 加州大楼  目前您拥有:"<<nobody_house_rich_apartment<<" 套\n"
                    <<"[输入0] 退出\n:";
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
                cout<<gang<<gang<<gang<<"查看房产"<<gang<<gang<<gang<<endl;
                cout<<"\n";
                cout<<"您的总资金为: "<<nobody_money<<" $"<<endl;
                cout<<"您已拥有 "<<nobody_house_count<<" 套房产"<<endl;
                cout<<"\n[输入1] 售卖 房产\n"
                    <<"[输入2] 租出 房产\n"
                    <<"[输入3] 购买 钻石公寓 40000 $\n"
                    <<"[输入4] 购买 狗不住公寓 10000 $\n"
                    <<"[输入5] 购买 加州大楼 784499.44\n"
                    <<"[输入0] 退出\n:";
                cin>>choice;
                if(choice=="0"){break;}
                else if(choice=="1"){nobody_sell_house();}
                else if(choice=="2"){nobody_rent_house();}
                else if(choice=="3"){
                    if(nobody_money>=40000){
                        nobody_money-=40000;
                        nobody_house_name="钻石公寓";
                        nobody_have_house=true;
                        nobody_house_count++;
                        nobody_house_diamond_apartment+=1;
                    }
                    else{continue;}
                }
                else if(choice=="4"){
                    if(nobody_money>=10000){
                        nobody_money-=10000;
                        nobody_house_name="狗不住公寓";
                        nobody_have_house=true;
                        nobody_house_count++;
                        nobody_house_poor_apartment+=1;
                    }
                    else{continue;}
                }
                else if(choice=="5"){
                    if(nobody_money>=784499.44){
                        nobody_money-=784499.44;
                        nobody_house_name="加州大楼";
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
                cout<<gang<<gang<<gang<<"大多数"<<gang<<gang<<gang<<endl;
                cout<<"\n";
                cout<<"您的总资金为: "<<nobody_money<<" $"<<endl;
                cout<<"您的工作为: "<<job<<endl;
                cout<<"您的工资为: "<<nobody_salary<<" $\n";
                cout<<"您的学历为："<<nobody_educational<<endl;
                cout<<"\n[输入1] 应聘 工作\n"
                    <<"[输入2] 前去 工作\n"
                    <<"[输入3] 查看 开销\n"
                    <<"[输入4] 提升 学历\n"
                    <<"[输入5] 进入 家中\n"
                    <<"[输入6] 前去 银行\n"
                    <<"[输入7] 查看 房产\n"
                    <<"[输入0] 退出\n:";
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
            // nobody_main_page(); //test用完删除
            system("cls");
            string next;
            cout<<gang<<gang<<gang<<"剧情"<<gang<<gang<<gang<<endl;
            cout<<"\n";
            cout<<"陌生人 ： 嘿！小子！你想要在我这干活，那你就必须交保护费！\n输入任意键已继续";
            cin>>next;
            system("cls");
            cout<<"你 ： 可是...... 可是......我没有钱\n输入任意键已继续";
            cin>>next;
            system("cls");
            cout<<"陌生人 ： 他妈的！ 要想在我这干活，就得先交保护费！这他妈的是这儿的规矩！逼养的！兄弟们打！\n输入任意键已继续";
            cin>>next;
            system("cls");
            cout<<"你 ： 啊！ 啊！ 别打了！\n输入任意键已继续";
            cin>>next;
            system("cls");
            cout<<"陌生人 ： 这是什么？ 你不是说你没有钱吗？ 这是他妈的什么？\n输入任意键已继续";
            cin>>next;
            system("cls");
            cout<<"你 ： 别！这是我攒下来给妹妹治病的钱\n输入任意键已继续";
            cin>>next;
            system("cls");
            cout<<"陌生人 ： 唉！ 去你妈的！ 干活先交钱，你给老子记死了，赶紧滚！\n输入任意键已继续";
            cin>>next;
            system("cls");
            cout<<"总资金减 2000 $\n输入任意键已继续";
            cin>>next;
            system("cls");
            nobody_story_showed=true;
            nobody_main_page();

        }
        void nobody_story(){
            string choice;
            while(true){
                system("cls");
                cout<<gang<<gang<<gang<<"大多数"<<gang<<gang<<gang<<endl;
                cout<<"\n";
                cout<<"剧情:\n"
                    <<"这是一个现实世界的平行宇宙。在这里，故事的主角不是生活在钢筋混凝土砌成的丛林，而是隐藏在这片阴影之下，更具有烟火气的市井和生活区。\n"
                    <<"游戏中的“你”是个平凡到不能再平凡的小人物。“你”所做的一切可能正是别人亲身体验过的人生。你可曾真正地了解过游戏中的“你”，而你是否能帮助“你”走出窘境，迎来新生？\n"
                    <<"\n[输入1] 进入游戏\n"
                    <<"[输入2] 删除存档\n"
                    <<"[输入0] 退出游戏\n";
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