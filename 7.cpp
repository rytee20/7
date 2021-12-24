#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <sstream>
#include <stdlib.h>
#include <Windows.h>
#include<iomanip>
#include <string>
#include <fstream>
#include <map>
using namespace std;
int main() {
    map <string, int> months = {
        {"������",1},
        {"�������",2},
        {"�����",3},
        {"������",4},
        {"���",5},
        {"����",6},
        {"����",7},
        {"�������",8},
        {"��������",9},
        {"�������",10},
        {"������",11},
        {"�������",12}
    };
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char buff[80];
    int m = 0, n;
    struct date
    {
        int day;
        char* month;
        int year;
    };
    struct prepod {
        char* lastname;
        char* firstname;
        char* cathedra;
        char* subject;
        date itb;
    };
    cout << "������� ���������� ��������������: ";
    cin >> n;
    struct prepod* p = new struct prepod[n];
    cout << "������� ������������� 1" << endl;
    cout << "�������: ";
    gets_s(buff);
    gets_s(buff);
    p[0].lastname = new char[strlen(buff) + 1];
    strcpy(p[0].lastname, buff);
    cout << "���: ";
    gets_s(buff);
    p[0].firstname = new char[strlen(buff) + 1];
    strcpy(p[0].firstname, buff);
    cout << "�������: ";
    gets_s(buff);
    p[0].cathedra = new char[strlen(buff) + 1];
    strcpy(p[0].cathedra, buff);
    cout << "�������: ";
    gets_s(buff);
    p[0].subject = new char[strlen(buff) + 1];
    strcpy(p[0].subject, buff);
    cout << "���� ���: " << endl;
    cin >> p[0].itb.day;
    cout << "����� ���: " << endl;
    gets_s(buff);
    gets_s(buff);
    p[0].itb.month = new char[strlen(buff) + 1];
    strcpy(p[0].itb.month, buff);
    cout << "��� ���: " << endl;
    cin >> p[0].itb.year;
    for (int i = 1; i < n; i++) {
        cout << "������� ������������� " << i + 1 << endl;
        cout << "�������: ";
        gets_s(buff);
        gets_s(buff);
        p[i].lastname = new char[strlen(buff) + 1];
        strcpy(p[i].lastname, buff);
        cout << "���: ";
        gets_s(buff);
        p[i].firstname = new char[strlen(buff) + 1];
        strcpy(p[i].firstname, buff);
        cout << "�������: ";
        gets_s(buff);
        p[i].cathedra = new char[strlen(buff) + 1];
        strcpy(p[i].cathedra, buff);
        cout << "�������: ";
        gets_s(buff);
        p[i].subject = new char[strlen(buff) + 1];
        strcpy(p[i].subject, buff);
        cout << "���� ���: " << endl;
        cin >> p[i].itb.day;
        cout << "����� ���(� ����������� ������): " << endl;
        gets_s(buff);
        gets_s(buff);
        p[i].itb.month = new char[strlen(buff) + 1];
        strcpy(p[i].itb.month, buff);
        cout << "��� ���: " << endl;
        cin >> p[i].itb.year;
    }
    /*for (int i = 0; i < n; i++) {
        cout << endl << endl << p[i].lastname << endl << p[i].firstname << endl << p[i].cathedra << endl << p[i].subject << endl;
    }*/
    cout << endl << "�������� ������ �������������                                      1" << endl;
    cout << "����������� ���������� � ������������� � ��������� ����            2" << endl;
    cout << "����� ��� ��������, ������� ����� ������ �������������             3" << endl;
    cout << "����� ���� �������������� �������� �������                         4" << endl;
    cout << "����� � ������� �������� �������                                   5" << endl;
    cout << "������ ������������� � �������� �������                            6" << endl;
    cout << "����� ��������������, � ������� � ���� ��� ������ ����� 15 ������� 7" << endl;
    cout << "������������� �� ������� � ���������� ������                       8" << endl;
    cout << "��������� ������ � �����                                           9" << endl;
    cout << "��������� ���������� ���������                                     0" << endl;
    cin >> m;
    while (m < 0 && m>9) {
        cout << "������. ��������� ����: ";
        cin >> m;
    }
    cout << endl;
    while (m != 0) {
        if (m == 1) {
            n = n + 1;
            cout << "������� ������������� " << n << endl;
            cout << "�������: ";
            gets_s(buff);
            gets_s(buff);
            p[n - 1].lastname = new char[strlen(buff) + 1];
            strcpy(p[n - 1].lastname, buff);
            cout << "���: ";
            gets_s(buff);
            p[n - 1].firstname = new char[strlen(buff) + 1];
            strcpy(p[n - 1].firstname, buff);
            cout << "�������: ";
            gets_s(buff);
            p[n - 1].cathedra = new char[strlen(buff) + 1];
            strcpy(p[n - 1].cathedra, buff);
            cout << "�������: ";
            gets_s(buff);
            p[n - 1].subject = new char[strlen(buff) + 1];
            strcpy(p[n - 1].subject, buff);
            cout << "���� ���: " << endl;
            cin >> p[n-1].itb.day;
            cout << "����� ���(� ����������� ������): " << endl;
            gets_s(buff);
            gets_s(buff);
            p[n-1].itb.month = new char[strlen(buff) + 1];
            strcpy(p[n-1].itb.month, buff);
            cout << "��� ���: " << endl;
            cin >> p[n-1].itb.year;
            /*for (int i = 0; i < n; i++) {
                cout << endl << endl << p[i].lastname << endl << p[i].firstname << endl << p[i].cathedra << endl << p[i].subject << endl;
            }
            cout << endl;*/
        }
        else
            if (m == 2) {
                int k = 0, k1 = 0;
                char* ln, * fn;
                cout << "������� ������� �������������: ";
                gets_s(buff);
                gets_s(buff);
                ln = new char[strlen(buff) + 1];
                strcpy(ln, buff);
                cout << "������� ��� �������������: ";
                gets_s(buff);
                fn = new char[strlen(buff) + 1];
                strcpy(fn, buff);
                cout << "����������: " << endl;
                for (int i = 0; i < n; i++)
                    if (strcmp(ln, p[i].lastname) == 0 && strcmp(fn, p[i].firstname) == 0) k++;
                if (k == 0) cout << "��� ������ �������������" << endl;
                else {
                    cout << setw(10) << "�������" << setw(10) << "���" << setw(10) << "�������" << setw(10) << "�������" << setw(10) << "���� ���" << endl;
                    for (int i = 0; i < n; i++) {
                        if (strcmp(ln, p[i].lastname) == 0 && strcmp(fn, p[i].firstname) == 0) {
                            k1++;
                            if (k1 == 1) cout << setw(10) << p[i].lastname << setw(10) << p[i].firstname << setw(10) << p[n - 1].cathedra << setw(10) << p[i].subject << setw(10) << p[i].itb.day << " " << p[i].itb.month << " " << p[i].itb.year << endl;
                            else cout << setw(40) << p[i].subject;
                        }
                    }
                }
                cout << endl;
            }
            else
                if (m == 3) {
                    int count = 0;
                    char* ln, * fn;
                    cout << "������� ������� �������������: ";
                    gets_s(buff);
                    gets_s(buff);
                    ln = new char[strlen(buff) + 1];
                    strcpy(ln, buff);
                    cout << "������� ��� �������������: ";
                    gets_s(buff);
                    fn = new char[strlen(buff) + 1];
                    strcpy(fn, buff);
                    cout << "��������:" << endl;
                    for (int i = 0; i < n; i++)
                        if (strcmp(ln, p[i].lastname) == 0 && strcmp(fn, p[i].firstname) == 0) {
                            cout << p[i].subject << endl;
                            count++;
                        }
                    if (count == 0) cout << "��� ������ �������������";
                }
                else
                    if (m == 4) {
                        string* Names;
                        Names = new string[n];
                        int count = 0;
                        char* c;
                        cout << "������� �������: ";
                        gets_s(buff);
                        gets_s(buff);
                        c = new char[strlen(buff) + 1];
                        strcpy(c, buff);
                        for (int i = 0; i < n; i++)
                            if (strcmp(c, p[i].cathedra) == 0) {
                                Names[count] = string() + p[i].lastname + ' ' + p[i].firstname;
                                count++;
                            }
                        if (count == 0) cout << "��� �������������� ���� �������";
                        else {
                            for (int i = 0; i < count - 1; i++) {
                                for (int j = i + 1; j < count; j++)
                                    if (Names[i] > Names[j]) {
                                        swap(Names[i], Names[j]);
                                    }
                            }
                            for (int i = 0; i < count - 1; i++) {
                                if (Names[i] == Names[i + 1]) {
                                    swap(Names[i + 1], Names[count - 1]);
                                    count--;
                                }
                            }
                            cout << "������������� �������� �������: " << endl;
                            for (int i = 0; i < count; i++) cout << Names[i] << endl;
                        }
                    }
                    else if (m == 6) {
                        int N;
                        cout << "������� �������: ";
                        cin >> N;
                        n++;
                        for (int i = n-2; i >= N-1; i--) {
                            swap(p[i], p[i + 1]);
                        }
                        cout << "������� ������������� " << N << endl;
                        cout << "�������: ";
                        gets_s(buff);
                        gets_s(buff);
                        p[N-1].lastname = new char[strlen(buff) + 1];
                        strcpy(p[N - 1].lastname, buff);
                        cout << "���: ";
                        gets_s(buff);
                        p[N - 1].firstname = new char[strlen(buff) + 1];
                        strcpy(p[N - 1].firstname, buff);
                        cout << "�������: ";
                        gets_s(buff);
                        p[N - 1].cathedra = new char[strlen(buff) + 1];
                        strcpy(p[N - 1].cathedra, buff);
                        cout << "�������: ";
                        gets_s(buff);
                        p[N - 1].subject = new char[strlen(buff) + 1];
                        strcpy(p[N-1].subject, buff);
                        cout << "���� ���: " << endl;
                        cin >> p[N-1].itb.day;
                        cout << "����� ���(� ����������� ������): " << endl;
                        gets_s(buff);
                        p[N-1].itb.month = new char[strlen(buff) + 1];
                        strcpy(p[N-1].itb.month, buff);
                        cout << "��� ���: " << endl;
                        cin >> p[N-1].itb.year;
                        /*for (int i = 0; i < n; i++) {
                        cout << endl << endl << p[i].lastname << endl << p[i].firstname << endl << p[i].cathedra << endl << p[i].subject << endl;
                        }
                        cout << endl;*/
                    }
                    else if (m == 5) {
                        char* s;
                        cout << "������� �������: ";
                        gets_s(buff);
                        gets_s(buff);
                        s = new char[strlen(buff) + 1];
                        strcpy(s, buff);
                        for (int i = 0; i < n; i++)
                            if (strcmp(s, p[i].subject) == 0) {
                                for (int j = i; j < n - 1; j++) {
                                    swap(p[i], p[i + 1]);
                                }
                                n--;
                                i = 0;
                            }
                        /*for (int i = 0; i < n; i++) {
                        cout << endl << endl << p[i].lastname << endl << p[i].firstname << endl << p[i].cathedra << endl << p[i].subject << endl;
                        }
                        cout << endl;*/
                    }
                    else if (m == 7) {
                        prepod* start{p};
                        time_t timer = time(0);
                        struct tm* u;
                        u = localtime(&timer);
                        cout << "�������������: " << endl;
                        for (int i = 0; i < n; i++) {
                            *start = p[i];
                            if (u->tm_year * 12 + u->tm_mon + 1 - (start->itb.year - 1900) * 12 - months[start->itb.month] > 15) {
                                cout << p[i].lastname << " " << p[i].firstname << endl;
                            }
                        }
                    }
                    else if (m==8) {
                         for (int i = 0; i < n - 1; i++) {
                             for (int j = i + 1; j < n; j++)
                                 if (p[i].lastname > p[j].lastname) {
                                     swap(p[i], p[j]);
                                 }
                         }
                    }
                    else if (m == 9) {
                        ofstream File;
                        File.open("prepod.txt");
                        File << setw(10) << "�������" << setw(10) << "���" << setw(10) << "�������" << setw(10) << "�������" << endl;
                        for (int i = 0; i < n; i++) {
                            File << setw(10) << p[i].lastname << setw(10) << p[i].firstname << setw(10) << p[i].cathedra << setw(10) << p[i].subject << endl;
                        }
                        File.close();
                    }
        cout << endl << "�������� ������ �������������                                      1" << endl;
        cout << "����������� ���������� � ������������� � ��������� ����            2" << endl;
        cout << "����� ��� ��������, ������� ����� ������ �������������             3" << endl;
        cout << "����� ���� �������������� �������� �������                         4" << endl;
        cout << "����� � ������� �������� �������                                   5" << endl;
        cout << "������ ������������� � �������� �������                            6" << endl;
        cout << "����� ��������������, � ������� � ���� ��� ������ ����� 15 ������� 7" << endl;
        cout << "������������� �� ������� � ���������� ������                       8" << endl;
        cout << "�������� ������ � ����                                             9" << endl;
        cout << "��������� ���������� ���������                                     0" << endl;
        cin >> m;
        while (m < 0 && m>9) {
            cout << "������. ��������� ����: ";
            cin >> m;
        }
    }
}