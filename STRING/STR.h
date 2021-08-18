#include<iostream>
#include<string>
#include<fstream>
#define MAX 20
using namespace std;

void Menu();
void create();
bool read(string ques[]);
bool compute(string ques[],double answ[]);
bool translate(string& s,double& result);
double calculate(double& m,double& n,int f);
bool display();