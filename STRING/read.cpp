#include"STR.h"
bool read(string ques[])
{
    fstream qu;
    qu.open("question.txt",ios::in);
    if(!qu.is_open())
    return false;

    int i=0;
    while(!qu.eof()){
        qu>>ques[i];
        i++;
    }
    qu.close();
    return true;

}