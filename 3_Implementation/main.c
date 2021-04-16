#include"stdio.h"
#include"stdlib.h"
#include"string.h"
#include"windows.h"
#include"funs.h"


int main()
{

    int choice0,choice1;
    char m;
    int lin;

    fptr=fopen("udata.txt","rb+");
    if(fptr==NULL)
    {
        fptr=fopen("udata.txt","wb+");
        if(fptr==NULL)
        {
            printf("Trouble in opening file\n");
            exit(1);
        }
    }

    printf("\t\t\t\t\t\tReal-estate Advisor\n\n\n\n");
    printf("Are you a buyer or seller ?\n\n");
    printf("Enter b for buyer or enter s for seller\n\n");
    printf("b/s");
    scanf("%c",&m);

    if(m=='b')
    {
        system("cls");
        printf("1 Display all properties\n\n");
        printf("2 Display by type of property\n\n");
        printf("3 Display number of properties available\n\n");
        printf("4 Exit\n\n");
        printf("Enter your choice\n");
        fflush(stdin);
        scanf("%d",&choice0);

        switch(choice0)
        {
            case 1:

                display_prop();
                break;

            case 2:

                display_type_prop();
                break;

            case 3:
                lin=display_number();
                printf("There are %d number of properties available",lin);
                break;
                
            case 4:

                fclose(fptr);
                exit(0);
                break;                    

            default:

                printf("Invalid entry\n");        
            
        }

    }

    else
    {
        system("cls");
        printf("1 Add property for sale\n\n");
        printf("2 Remove property\n\n");
        printf("3 Modify property\n\n");
        printf("4 Exit\n\n");
        printf("Enter your choice\n\n");
        fflush(stdin);
        scanf("%d",&choice1);

        switch(choice1)
        {
            case 1:

                add_prop();
                break;

            case 2:

                remove_prop();
                break;

            case 3:

                modify_prop();
                break;

            case 4:

                fclose(fptr);
                exit(0);
                break;

            default:

                printf("Invalid entry");                

        }
    }

    return 0;
}