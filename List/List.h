#include<iostream>
#include<string>
#include<fstream>
#define MAXLISTSIZE 20
using namespace std;

typedef struct
{
    string schnum;//学号
    string name;//姓名
    string gender;//性别
    string province;//省份
    string birthday;//生日
    float grade;//成绩
    bool f=1;//在where()函数中标识是否符合条件
}Elem;

typedef struct List
{
    Elem data[MAXLISTSIZE];
    int length=0; // 当前长度 
    int listsize=MAXLISTSIZE;// 允许的最大存储容量(以sizeof(Elem)为单位)
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