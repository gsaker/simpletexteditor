#include "main.h"

char writefile(char text [MAXCHAR],char path [MAXCHAR])
{
   fp = fopen(path, "w+");
   fputs(text, fp);
   fclose(fp);
   system("clear");
   return (0);
}
char readfile(char finalpath [MAXCHAR])
{

     fp = fopen(finalpath, "r");
     mchar(79,"█");
     printf("File Says:\n");
     mchar(79,"█");
   while ((c = getc(fp)) != EOF) 
   {
        putchar(c);
   }
   
   if (readwrite==1){
       printf("\n");
   mchar(79,"█");
   printf("\nPress Enter to Exit\n");
    fclose(fp);
    getchar();
   }
   else {
       printf("\n");
       mchar(79,"█");
       fclose(fp);
   }

   
   
return 0;
}
char appendfile(char text [MAXCHAR],char path [MAXCHAR])
{
   fp = fopen(path, "a+");
   printf("\n");
   fputs(text, fp);
   fclose(fp);
   system("clear");
   return (0);
}

char mchar (int number,char character[])
{
    
    for (i = 0;i <= number; i++)
    {
        printf("%s",character);
    }
    return (0);
}

