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
        printf("Type Path to File To Read\n");
        mchar(79,"█");
        printf("Commands:\n");
        printf("Help : /help\n");
        printf("Quit The Utility : /exit\n");
        printf("Go Back One Stage : /back\n");
        printf("Go Back here : /menu\n");
        printf("Select Desktop Path : /desktop\n");
        printf("Select Documents Path : /documents\n");
        printf("Select Downloads Folder : /downloads\n");
        printf("Select Home Folder : /homefolder\n");
        mchar(79,"█");
        printf("\n");
        scanf ("%s",path);
        strcpy(inputc,path);
        //check (inputc);
        if (!strcmp(path,"/desktop")||!strcmp(path,"/Desktop"))
        {
            strcpy(path, "/Users/georgesaker/Desktop/");
        }
         else if (!strcmp(path,"/downloads")||!strcmp(path,"/Downloads"))
        {
            strcpy(path, "/Users/georgesaker/Downloads/");;
        }
         else if (!strcmp(path,"/documents")||!strcmp(path,"/Documents"))
        {
            strcpy(path, "/Users/georgesaker/Documents/");
        }
         else if (!strcmp(path,"/homefolder")||!strcmp(path,"/Documents"))
        {
            strcpy(path, "/Users/georgesaker/");
        }
        system("clear");
        mchar(79,"█");
        printf("Type Name of File To Read? (Including Extension)\n");
        mchar(79,"█");
        printf("Commands:\n");
        printf("Help : /help\n");
        printf("Quit The Utility : /exit\n");
        printf("Go Back One Stage : /back\n");
        printf("Go Back to the menu : /menu\n");
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
        printf("Type Path to New File\n");
        mchar(79,"█");
        printf("Commands:\n");
        printf("Help : /help\n");
        printf("Quit The Utility : /exit\n");
        printf("Go Back One Stage : /back\n");
        printf("Go Back here : /menu\n");
        printf("Select Desktop Path : /desktop\n");
        printf("Select Documents Path : /documents\n");
        printf("Select Downloads Folder : /downloads\n");
        printf("Select Home Folder : /homefolder\n");
        mchar(79,"█");
        printf("\n");
        scanf ("%s",path);
        if (!strcmp(path,"/desktop")||!strcmp(path,"/Desktop"))
        {
            strcpy(path, "/Users/georgesaker/Desktop/");;
        }
         else if (!strcmp(path,"/downloads")||!strcmp(path,"/Downloads"))
        {
            strcpy(path, "/Users/georgesaker/Downloads/");;
        }
         else if (!strcmp(path,"/documents")||!strcmp(path,"/Documents"))
        {
            strcpy(path, "/Users/georgesaker/Documents/");
        }
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
        printf("Type Path to File to Append\n");
        mchar(79,"█");
        printf("Commands:\n");
        printf("Help : /help\n");
        printf("Quit The Utility : /exit\n");
        printf("Go Back One Stage : /back\n");
        printf("Go Back here : /menu\n");
        printf("Select Desktop Path : /desktop\n");
        printf("Select Documents Path : /documents\n");
        printf("Select Downloads Folder : /downloads\n");
        printf("Select Home Folder : /homefolder\n");
        mchar(79,"█");
        printf("\n");
        scanf ("%s",path);
        
        if (!strcmp(path,"/desktop")||!strcmp(path,"/Desktop"))
        {
            strcpy(path, "/Users/georgesaker/Desktop/");;
        }
         else if (!strcmp(path,"/downloads")||!strcmp(path,"/Downloads"))
        {
            strcpy(path, "/Users/georgesaker/Downloads/");;
        }
         else if (!strcmp(path,"/documents")||!strcmp(path,"/Documents"))
        {
            strcpy(path, "/Users/georgesaker/Documents/");
        }

         system("clear");
        mchar(79,"█");
        printf("Type Name of File To Append With No Spaces (Including Extension)\n");
        mchar(79,"█");
        printf("Commands:\n");
        printf("Help : /help\n");
        printf("Quit The Utility : /exit\n");
        printf("Go Back One Stage : /back\n");
        printf("Go back to the menu : /menu\n");
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
