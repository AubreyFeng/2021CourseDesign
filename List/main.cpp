#include"List.h"
int main()
{
    List L;
    while(1){
        Menu();
        char choice;
        cout<<"ÇëÊäÈëÃüÁî£¨ÊäÈëHÏÔÊ¾°ïÖúÐÅÏ¢£©£º";
        cin>>choice;
        switch(choice)
        {
            case '0':exit(0);

            case 'H':
            case 'h':Help();
            break;

            case '1':create(L);
            break;

            case '2':read(L);
            break;

            case '3':visit(L);
            break;

            case '4':Sort(L);
            break;

            case '5':Select(L);
            break;

            case '6':Where(L);
            break;
            
        }

    }

    system("pause");
    return 0;
    
}