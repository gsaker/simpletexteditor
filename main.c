#include "main.h"

int main() { 
    system("clear");
    printf ("\033[8;24;80t");
    mchar(79,"█");
   printf("Welcome to George Saker's Text Editor\n");
   mchar(79,"█");
   printf("Type Commands at the bottom\n");
   mchar(79,"█");
   printf("Commands:\n");
   printf("Help : /help\n");
   printf("Quit The Utility : /exit\n");
   printf("Go Back One Stage : /back\n");
   printf("Go Back here : /menu\n");
   mchar(79,"█");
   

   getinfo();
   if (readwrite==1)
   {
       readfile(finalpath);
   }
   else if (readwrite==2)
   {
       writefile(text,finalpath);
   }
   else
   {
       appendfile(text,finalpath);
   }
  
   
   end: ;
   system("clear");
}

