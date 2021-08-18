#include"List.h"
bool visit(List& L)
{
    if(L.length<=0){
        cout<<"The data in the table is empty!\n";
        return false;
    }

    cout<<endl;
    cout<<"学号\t"<<"姓名\t"<<"性别\t"<<"省份\t"<<"生日\t\t"<<"成绩\t"<<endl;
    for(int i=0;i<L.length;i++){
        cout<<L.data[i].schnum<<"\t";
        cout<<L.data[i].name<<"\t";
        cout<<L.data[i].gender<<"\t";
        cout<<L.data[i].province<<"\t";
        cout<<L.data[i].birthday<<"\t";
        cout<<L.data[i].grade<<"\t";
        cout<<endl;
    }
    return true;
}