#include"List.h"
bool Sort(List& L)
{
    if(L.length<=0){
        cout<<"The data in the table is empty!\n";
        return false;
    }

    cout<<endl;
    cout<<"\t _______________________"<<endl;
    cout<<"\t|        子菜单         |"<<endl;
    cout<<"\t|     1.按学号排序      |"<<endl;
    cout<<"\t|     2.按姓名排序      |"<<endl;
    cout<<"\t|     3.按性别排序      |"<<endl;
    cout<<"\t|     4.按省份排序      |"<<endl;
    cout<<"\t|     5.按生日排序      |"<<endl;
    cout<<"\t|     6.按成绩排序      |"<<endl;
    cout<<"\t|_______________________|"<<endl;
    cout<<"请输入：";
    int choice;
    cin>>choice;
    switch(choice)
    {
        case 1:sort_schnum(L);
        break;

        case 2:sort_name(L);
        break;

        case 3:sort_gender(L);
        break;

        case 4:sort_province(L);
        break;

        case 5:sort_birthday(L);
        break;

        case 6:sort_grade(L);
        break;
    }
    visit(L);

    string s;
    cout<<"是否存档(yes or no)：";
    cin>>s;
    if(s=="yes"){
        write(L);
        cout<<"存档成功！\n";
    }

    return true;
}

void swap(Elem& a,Elem& b)
{
    Elem t;
    t=a;
    a=b;
    b=t;
}

void sort_schnum(List& L)
{
    for(int i=0;i<L.length-1;i++)
        for(int j=0;j<L.length-i-1;j++)
            if(L.data[j].schnum>L.data[j+1].schnum)
                swap(L.data[j],L.data[j+1]);
}

void sort_name(List& L)
{
    for(int i=0;i<L.length-1;i++)
        for(int j=0;j<L.length-i-1;j++)
            if(L.data[j].name>L.data[j+1].name)
                swap(L.data[j],L.data[j+1]);
}

void sort_gender(List& L)
{
    for(int i=0;i<L.length-1;i++)
        for(int j=0;j<L.length-i-1;j++)
            if(L.data[j].gender>L.data[j+1].gender)
                swap(L.data[j],L.data[j+1]);
}

void sort_province(List& L)
{
    for(int i=0;i<L.length-1;i++)
        for(int j=0;j<L.length-i-1;j++)
            if(L.data[j].province>L.data[j+1].province)
                swap(L.data[j],L.data[j+1]);
}

void sort_birthday(List& L)
{
    for(int i=0;i<L.length-1;i++)
        for(int j=0;j<L.length-i-1;j++)
            if(L.data[j].birthday>L.data[j+1].birthday)
                swap(L.data[j],L.data[j+1]);
}

void sort_grade(List& L)
{
    for(int i=0;i<L.length-1;i++)
        for(int j=0;j<L.length-i-1;j++)
            if(L.data[j].grade<L.data[j+1].grade)
                swap(L.data[j],L.data[j+1]);
}