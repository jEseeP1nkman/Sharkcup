#include "head.h"

class SharkcupMouse_click_main_page{
    private:
    bool show_click_finished = false;
    public:
    void mouse_click_set(int mouseeventf_1, int mouseeventf_2) {
        system("cls");
        int min_count = 1, max_count;
        float count_sleep;
        cout << gang << "����������" << gang << endl;
        cout << "���õ������\n:";
        cin >> max_count;
        cout << "���õ�����\n:";
        cin >> count_sleep;
        while (min_count <= max_count) {
            if (min_count == max_count) { show_click_finished = true; }
            mouse_event(mouseeventf_1, 0, 0, 0, 0);
            mouse_event(mouseeventf_2, 0, 0, 0, 0);
            Sleep(count_sleep);
            min_count++;
        }
    }
    void mouse_click_main_page() {
        while (true) {
            system("cls");
            string choice, choice_1_choice;
            cout << gang << "���������" << gang << endl;
            if (show_click_finished == true) { cout << "\n�ѵ�����" << endl; }
            cout << "\n[����1] ���� ����������\n"
                << "[����0] �˳����������\n:";
            cin >> choice;
            if (choice == "0") { show_click_finished = false; system("cls"); break; }
            if (choice == "1") {
                system("cls");
                cout << gang << "����������" << gang << endl;
                cout << "\n[����1] ���� ���\n"
                    << "[����2] ���� �м�\n"
                    << "[����3] ���� �Ҽ�\n";
                cin >> choice_1_choice;
                if (choice_1_choice == "1") { mouse_click_set(MOUSEEVENTF_LEFTDOWN, MOUSEEVENTF_LEFTUP); }
                else if (choice_1_choice == "2") { mouse_click_set(MOUSEEVENTF_MIDDLEDOWN, MOUSEEVENTF_MIDDLEUP); }
                else if (choice_1_choice == "3") { mouse_click_set(MOUSEEVENTF_RIGHTDOWN, MOUSEEVENTF_RIGHTUP); }
            }
        }
    }
};

void main_mouse_click_main_page(){
    SharkcupMouse_click_main_page mouse_click_main_page;
    mouse_click_main_page.mouse_click_main_page();
}