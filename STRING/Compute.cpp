#include"STR.h"
bool compute(string ques[],double answ[])
{
    fstream an;
    double result;
    an.open("answer.txt",ios::out);
    if(!an.is_open())
    return false;

    int i=0;
    while(!ques[i].empty()){
        an<<ques[i]<<"=";
        translate(ques[i],result);
        answ[i]=result;
        //char temp[10];
        //sprintf(temp,"%.0lf",result);
        an<<result<<endl;
        i++;
    }
    an.close();
    return true;

}


bool translate(string& s,double& result)
{
    //string s="add(22,5)";
    //cout<<s<<endl;
    int f=0,i;
    double m=0,n=0;
    if(s.find("add")==0) f=1;
    else if(s.find("sub")==0) f=2;
    else if(s.find("muti")==0) f=3;
    else if(s.find("div")==0) f=4;
    else if(s.find("doubleMe")==0) f=5;
    else return false;

    if(f>0&&f<5){
        int a=s.find_first_of("(");
        int b=s.find_first_of(",");
        int c=s.find_first_of(")");
        for(i=a+1;i<b;i++){
            m=m*10+(s[i]-'0');
        }

        for(i=b+1;i<c;i++){
            n=n*10+(s[i]-'0');
        }

    }

    else if(f==5){
        int a=s.find_first_of("(");
        int c=s.find_first_of(")");
        for(i=a+1;i<c;i++){
            m=m*10+(s[i]-'0');
        }
        n=m;
    }
    //printf("m=%lf,n=%lf\n",m,n);
    
    result=calculate(m,n,f);
    return true;

}

double calculate(double& m,double& n,int f)
{
    switch(f)
    {
        case 1:
        case 5:
        return m+n;

        case 2:
        return m-n;

        case 3:
        return m*n;

        case 4:
        return m/n;
    }
}
