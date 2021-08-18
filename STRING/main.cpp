#include"STR.h"
int main()
{
    string ques[MAX];
    double ans[MAX];

    int choice;
    string s="doubleMe(20)";
    //translate(s);
    //ques[0]="add(87,5)";

    while(1){
        Menu();
        cin>>choice;

        switch(choice)
        {
            case 0:
            exit(0);

            case 1:
            create();
            break;

            case 2:
            if(!read(ques))
            cout<<"false!\n";
            break;

            case 3:
            compute(ques,ans);
            break;


            case 4:
            display();
            break;
        }
    }



    


    
    system("pause");
    return 0;
}