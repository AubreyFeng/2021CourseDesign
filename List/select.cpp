#include"List.h"
typedef struct
{
    bool xh;
    bool xm;
    bool xb;
    bool sf;
    bool sr;
    bool cj;
}judge;

judge f;

bool Select(List& L)
{
    if(L.length<=0){
        cout<<"The data in the table is empty!\n";
        return false;
    }

    for(int i=0;i<L.length;i++)
        L.data[i].f=true;//��ʼ���������ݣ�Ĭ�϶����ϲ���Ҫ��

    cout<<"�Ƿ���ʾѧ��(0 for no,1 for yes):";
    cin>>f.xh;
    cout<<"�Ƿ���ʾ����(0 for no,1 for yes):";
    cin>>f.xm;
    cout<<"�Ƿ���ʾ�Ա�(0 for no,1 for yes):";
    cin>>f.xb;
    cout<<"�Ƿ���ʾʡ��(0 for no,1 for yes):";
    cin>>f.sf;
    cout<<"�Ƿ���ʾ����(0 for no,1 for yes):";
    cin>>f.sr;
    cout<<"�Ƿ���ʾ�ɼ�(0 for no,1 for yes):";
    cin>>f.cj;
    visit_select(L);
    return true;
}

void visit_select(List& L)
{
    cout<<endl;
    if(f.xh) cout<<"ѧ��\t";
    if(f.xm) cout<<"����\t";
    if(f.xb) cout<<"�Ա�\t";
    if(f.sf) cout<<"ʡ��\t";
    if(f.sr) cout<<"����\t\t";
    if(f.cj) cout<<"�ɼ�\t";
    cout<<endl;

    for(int i=0;i<L.length;i++){
        if(L.data[i].f){
            if(f.xh) cout<<L.data[i].schnum<<"\t";
            if(f.xm) cout<<L.data[i].name<<"\t";
            if(f.xb) cout<<L.data[i].gender<<"\t";
            if(f.sf) cout<<L.data[i].province<<"\t";
            if(f.sr) cout<<L.data[i].birthday<<"\t";
            if(f.cj) cout<<L.data[i].grade<<"\t";
            cout<<endl;
        }
    }
}

bool Where(List& L)
{
    if(!Select(L)) return false;
    cout<<"�������������:\n";
    bool y;
    char condition;//"<",">"��"="
    string s;
    float g;
    int i=0;
    if(f.xh){
        cout<<"�Ƿ��ѧ��ִ�в���(1 for true,0 for false):";
        cin>>y;
        if(y){
            cout<<"�����루���磺> 1001����";
            cin>>condition;
            cin>>s;
            switch(condition)
            {
                case '>':
                for(i=0;i<L.length;i++)
                    if(L.data[i].schnum<=s)
                        L.data[i].f=false;
                break;

                case '=':
                for(i=0;i<L.length;i++)
                    if(L.data[i].schnum!=s)
                        L.data[i].f=false;
                break;

                case '<':
                for(i=0;i<L.length;i++)
                    if(L.data[i].schnum>=s)
                        L.data[i].f=false;
                break;
            }
        }
    }

    if(f.xm){
        cout<<"�Ƿ������ִ�в���(1 for true,0 for false):";
        cin>>y;
        if(y){
            cout<<"�����루���磺��������";
            cin>>s;

            for(i=0;i<L.length;i++)
                if(L.data[i].name!=s)
                    L.data[i].f=false;
        }
    }

    if(f.xb){
        cout<<"�Ƿ���Ա�ִ�в���(1 for true,0 for false):";
        cin>>y;
        if(y){
            cout<<"�����루���磺�У���";
            cin>>s;

            for(i=0;i<L.length;i++)
                if(L.data[i].gender!=s)
                    L.data[i].f=false;
        }
    }

    if(f.sf){
        cout<<"�Ƿ��ʡ��ִ�в���(1 for true,0 for false):";
        cin>>y;
        if(y){
            cout<<"�����루���磺��������";
            cin>>s;

            for(i=0;i<L.length;i++)
                if(L.data[i].province!=s)
                    L.data[i].f=false;
        }
    }

    if(f.sr){
        cout<<"�Ƿ�Գ���������ִ�в���(1 for true,0 for false):";
        cin>>y;
        if(y){
            cout<<"�����루���磺<2021-01-01����";
            cin>>condition;
            cin>>s;
            switch(condition)
            {
                case '>':
                for(i=0;i<L.length;i++)
                    if(L.data[i].birthday<=s)
                        L.data[i].f=false;
                break;

                case '=':
                for(i=0;i<L.length;i++)
                    if(L.data[i].birthday!=s)
                        L.data[i].f=false;
                break;

                case '<':
                for(i=0;i<L.length;i++)
                    if(L.data[i].birthday>=s)
                        L.data[i].f=false;
                break;
            }
        }
    }

    if(f.cj){
        cout<<"�Ƿ�Գɼ�ִ�в���(1 for true,0 for false):";
        cin>>y;
        if(y){
            cout<<"�����루���磺> 60����";
            cin>>condition;
            cin>>g;
            switch(condition)
            {
                case '>':
                for(i=0;i<L.length;i++)
                    if(L.data[i].grade<=g)
                        L.data[i].f=false;
                break;

                case '=':
                for(i=0;i<L.length;i++)
                    if(L.data[i].grade!=g)
                        L.data[i].f=false;
                break;

                case '<':
                for(i=0;i<L.length;i++)
                    if(L.data[i].grade>=g)
                        L.data[i].f=false;
                break;
            }
        }
    }
    visit_select(L);
    return true;
}