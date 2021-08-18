#include<iostream>
#include<string>
#include<fstream>
#define MAXLISTSIZE 20
using namespace std;

typedef struct
{
    string schnum;//ѧ��
    string name;//����
    string gender;//�Ա�
    string province;//ʡ��
    string birthday;//����
    float grade;//�ɼ�
    bool f=1;//��where()�����б�ʶ�Ƿ��������
}Elem;

typedef struct List
{
    Elem data[MAXLISTSIZE];
    int length=0; // ��ǰ���� 
    int listsize=MAXLISTSIZE;// ��������洢����(��sizeof(Elem)Ϊ��λ)
}Node;

void Menu();
void Help();
bool create(List &L);
bool read(List& L);
bool InsertNode(List& L,Elem e);
bool visit(List& L);
bool Sort(List& L);
void sort_schnum(List& L);
void sort_name(List& L);
void sort_gender(List& L);
void sort_province(List& L);
void sort_birthday(List& L);
void sort_grade(List& L);
bool write(List& L);
bool Select(List& L);
void visit_select(List& L);
bool Where(List& L);