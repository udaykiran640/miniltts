#include"funs.h"

void display_prop()
{
    system("cls");
    rewind(fptr);
    printf("NAME\t\tContact no\tProperty type\tExtent(in sq yds)\t \bPlace\t\tCountry\n\n");

    while(fread(&u, size, 1, fptr)==1)
    {
        printf("\n%s\t\t%ld\t%s\t\t%d\t\t\t%s\t\t%s", u.name, u.cmunber, u.ptype, u.ext, u.place, u.country);
         
    }
    
}