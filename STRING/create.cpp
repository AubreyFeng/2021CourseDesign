#include"STR.h"
void create()
{
    string q;
    fstream qu;
    qu.open("question.txt",ios::out);
    if(!qu.is_open())
    cout<<"false!\n";

    int n;
    cout<<"请输入表达式个数：";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>q;
        qu<<q<<endl;
    }
    qu.close();
}