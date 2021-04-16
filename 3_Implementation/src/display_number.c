#include"funs.h"

int display_number()
{
    int lines=0;
    char c;

    fptr=fopen("udata.txt","r");
    if(fptr==NULL)
    {
        printf("Trouble in opening file");
        return -1;
    }

    while ((c=fgetc(fptr))!=EOF)
    {
        if(c=='n')
        lines++;
    }
    return (lines-1);
    fclose(fptr);
    
    

}