#include"List.h"
bool read(List& L)
{
    fstream fp;
    fp.open("data.txt",ios::in);
    if(!fp.is_open()){
        cout<<"Failed to open file!\n";
        return false;
    }

    L.length=0;
    while(!fp.eof())
    {
        Elem e;
        fp>>e.schnum;
        if(e.schnum.empty()) break;
        fp>>e.name;
        fp>>e.gender;
        fp>>e.province;
        fp>>e.birthday;
        fp>>e.grade;

        if(!InsertNode(L,e))
            return false;

    }
    fp.close();
    return true;
    
}

bool InsertNode(List& L,Elem e)
{
    if(L.length >= L.listsize){
        cout<<"L.ength="<<L.length<<endl;
        cout<<"The data in the table is full!\n";
        return false;
    }

    L.data[L.length]=e;
    L.length++;
    return true;

}