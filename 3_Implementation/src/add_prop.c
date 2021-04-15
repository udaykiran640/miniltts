#include"funs.h"
//#include"stdio.h"

void add_prop()
{
    size= sizeof(u);
    system("cls");
    fseek(fptr, 0, SEEK_END);
    char another = 'y';
  
    while (another == 'y') 
    {
        printf("Enter Name :\n ");
        scanf("%s", &u.name);
  
        printf("Enter Contact number :\n ");
        scanf("%ld", &u.cnumber);
  
        printf("Enter Type(villa | house | land) : \n");
        scanf("%s", &u.ptype);
  
        printf("Enter Extent :\n ");
        scanf("%d", &u.ext);
        
        printf("Enter place or city :\n ");
        scanf("%s", &u.place);
        
        printf("Enter country :\n ");
        scanf("%s", &u.country);
  
        fwrite(&u, size, 1, fptr);
  
        printf("Want to add another property\n");
        printf("y/n\n");
        fflush(stdin);
  
        scanf("%c", &another);
    }    
}