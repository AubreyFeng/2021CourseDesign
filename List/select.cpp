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
        L.data[i].f=true;//初始化所有数据，默认都符合查找要求

    cout<<"是否显示学号(0 for no,1 for yes):";
    cin>>f.xh;
    cout<<"是否显示姓名(0 for no,1 for yes):";
    cin>>f.xm;
    cout<<"是否显示性别(0 for no,1 for yes):";
    cin>>f.xb;
    cout<<"是否显示省份(0 for no,1 for yes):";
    cin>>f.sf;
    cout<<"是否显示生日(0 for no,1 for yes):";
    cin>>f.sr;
    cout<<"是否显示成绩(0 for no,1 for yes):";
    cin>>f.cj;
    visit_select(L);
    return true;
}

void visit_select(List& L)
{
    cout<<endl;
    if(f.xh) cout<<"学号\t";
    if(f.xm) cout<<"姓名\t";
    if(f.xb) cout<<"性别\t";
    if(f.sf) cout<<"省份\t";
    if(f.sr) cout<<"生日\t\t";
    if(f.cj) cout<<"成绩\t";
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
    cout<<"请输入查找条件:\n";
    bool y;
    char condition;//"<",">"或"="
    string s;
    float g;
    int i=0;
    if(f.xh){
        cout<<"是否对学号执行操作(1 for true,0 for false):";
        cin>>y;
        if(y){
            cout<<"请输入（例如：> 1001）：";
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
        cout<<"是否对姓名执行操作(1 for true,0 for false):";
        cin>>y;
        if(y){
            cout<<"请输入（例如：张三）：";
            cin>>s;

            for(i=0;i<L.length;i++)
                if(L.data[i].name!=s)
                    L.data[i].f=false;
        }
    }

    if(f.xb){
        cout<<"是否对性别执行操作(1 for true,0 for false):";
        cin>>y;
        if(y){
            cout<<"请输入（例如：男）：";
            cin>>s;

            for(i=0;i<L.length;i++)
                if(L.data[i].gender!=s)
                    L.data[i].f=false;
        }
    }

    if(f.sf){
        cout<<"是否对省份执行操作(1 for true,0 for false):";
        cin>>y;
        if(y){
            cout<<"请输入（例如：湖北）：";
            cin>>s;

            for(i=0;i<L.length;i++)
                if(L.data[i].province!=s)
                    L.data[i].f=false;
        }
    }

    if(f.sr){
        cout<<"是否对出生年月日执行操作(1 for true,0 for false):";
        cin>>y;
        if(y){
            cout<<"请输入（例如：<2021-01-01）：";
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
        cout<<"是否对成绩执行操作(1 for true,0 for false):";
        cin>>y;
        if(y){
            cout<<"请输入（例如：> 60）：";
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