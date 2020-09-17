#include "main.h"

void getinfo()
{
    memset(finalpath,0,strlen(finalpath));
    
    printf ("Read (1) or New?(2) or Append (3)\n");
    mchar(79,"█");
    printf("\n");
    scanf ("%i",&readwrite);
    system("clear");
    
    
    // Read
    
    if (readwrite==1)
    {
        ifagain = 1;
        mchar(79,"█");
        printf("Type Path to File To Read (including a / at the end eg: /Users/user/Desktop/)\n");
        mchar(79,"█");
        printf("\n");
        scanf ("%s",path);
        strcpy(inputc,path);
    
        system("clear");
        mchar(79,"█");
        printf("Type Name of File To Read? (Including Extension)\n");
        mchar(79,"█");
        printf("\n");
        scanf("%s",name);
        strcat(finalpath,path);
        strcat(finalpath,name);
        getchar();
        system("clear");
    }


    // New


    else if (readwrite==2)
    {
        mchar(79,"█");
        printf("Type Path to New File (including a / at the end eg: /Users/user/Desktop/)\n");
        mchar(79,"█");
        printf("\n");
        scanf ("%s",path);
        system("clear");
        mchar(79,"█");
        printf("Type Name of File To Create With No Spaces (Including Extension)\n");
        mchar(79,"█");
        printf("Commands:\n");
        printf("Help : /help\n");
        printf("Quit The Utility : /exit\n");
        printf("Go Back One Stage : /back\n");
        printf("Go back to the menu : /menu\n");
        mchar(79,"█"); 
        printf("\n");
        scanf("%s",name);
        strcat(finalpath,path);
        strcat(finalpath,name);
        system("clear");
        mchar(79,"█");
        printf("Type Text To Write To New File\n");
        mchar(79,"█");
        printf("Commands:\n");
        printf("Help : /help\n");
        printf("Quit The Utility : /exit\n");
        printf("Go Back One Stage : /back\n");
        printf("Go back to the menu : /menu\n");
        mchar(79,"█");
        printf("\n");
        scanf("%s",text);
        system("clear");
    }
    
    //Append
    
    
    else
    {
        ifagain = 0;
        mchar(79,"█");
        printf("Type Path to File to Append (including a / at the end eg: /Users/user/Desktop/)\n");
        mchar(79,"█");
        printf("\n");
        scanf ("%s",path);
         system("clear");
        mchar(79,"█");
        printf("Type Name of File To Append With No Spaces (Including Extension)\n");
        mchar(79,"█");
        printf("\n");
        scanf("%s",name);
        memset(finalpath,0,strlen(finalpath));
        printf("%s",finalpath);
        strcat(finalpath,path);
        strcat(finalpath,name);
        system("clear");
        system("clear");
        readfile(finalpath);
        printf("Text to append\n");
        mchar(79,"█");
        printf("\n");
        scanf(" %[^\t\n]s",text);
        mchar(79,"█");
        system("clear");

        
    }
    
    
}
/*
char check (char *inputc)
{
    if (strcmp(inputc,"/exit") != 0)
    {
        //////again();
    }
    if (strcmp(inputc,"/back") != 0)
    {
        getinfo();
    }
    if (strcmp(inputc,"/menu") != 0)
    {
        main();
    }
    return 0;
}
*/
