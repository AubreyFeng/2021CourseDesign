#include"List.h"
bool create(List& L)
{
    int n;
    cout<<"����������������";
    cin>>n;
    for(int i=0;i<n;i++){
        Elem e;
        printf("�������%d����Ϣ��\n",i+1);
        cout<<"������ѧ�ţ�";
        cin>>e.schnum;
        cout<<"������������";
        cin>>e.name;
        cout<<"�������Ա�(�� or Ů)��";
        cin>>e.gender;
        cout<<"������ʡ�ݣ�";
        cin>>e.province;
        cout<<"���������գ�";
        cin>>e.birthday;
        cout<<"������ɼ���";
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