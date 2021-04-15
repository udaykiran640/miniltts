#include"funs.h"
#include"stdlib.h"

void display_type_prop()
{
    size= sizeof(u);
    system("cls");
    char ruser_ptype[20];
    char another='y';

    while(another=='y')
    {
        fptr=fopen("udata.txt","rb");
        if(fptr==NULL)
        {
            printf("Trouble in opening file\n");
            exit(1);
        }
        
        printf("Enter type of property(villa | house | land)\n");
        scanf("%s", ruser_ptype);

        system("cls");
        printf("NAME\t\tContact no\tProperty type\tExtent(in sq yds)\t \bPlace\t\tCountry\n\n");

        while(fread(&u, size, 1, fptr)==1)
        {
            if(strcmp(u.ptype, ruser_ptype)==0)
            {
                printf("%s\t\t%ld\t%s\t\t%d\t\t\t%s\t\t%s\n\n",u.name, u.cnumber, u.ptype, u.ext,u.place, u.country);
            }
        }
        fclose(fptr);

        printf("Want ro view another type of property ?\n\n");
        printf("y/n");
        fflush(stdin);
        scanf("%c",&another);

    }
}