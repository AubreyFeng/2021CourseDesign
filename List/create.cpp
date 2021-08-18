#include"List.h"
bool create(List& L)
{
    int n;
    cout<<"请输入数据组数：";
    cin>>n;
    for(int i=0;i<n;i++){
        Elem e;
        printf("请输入第%d组信息：\n",i+1);
        cout<<"请输入学号：";
        cin>>e.schnum;
        cout<<"请输入姓名：";
        cin>>e.name;
        cout<<"请输入性别(男 or 女)：";
        cin>>e.gender;
        cout<<"请输入省份：";
        cin>>e.province;
        cout<<"请输入生日：";
        cin>>e.birthday;
        cout<<"请输入成绩：";
        cin>>e.grade;
        L.data[i]=e;
        L.length++;
    }
    if(!write(L)){
        cout<<"Create is false!\n";
        return false;
    }

    return true;
}

bool write(List& L)
{
    if(L.length<=0)
        return false;

    fstream fp;
    fp.open("data.txt",ios::out);
    if(!fp.is_open())
        return false;
    
    for(int i=0;i<L.length;i++){
        fp<<L.data[i].schnum<<"\t";
        fp<<L.data[i].name<<"\t";
        fp<<L.data[i].gender<<"\t";
        fp<<L.data[i].province<<"\t";
        fp<<L.data[i].birthday<<"\t";
        fp<<L.data[i].grade;
        fp<<endl;
    }
    fp.close();
    return true;
}