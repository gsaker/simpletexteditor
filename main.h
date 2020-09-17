//Definitions

#define MAXCHAR 1000
#define MAXCHAR 1000
#define ANSI_COLOR_RED "\x1b[31m"

//Libraries

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <sys/types.h>
#include <dirent.h>

//Variables

int c;
int i;
int readwrite;
int ifagain;
char name [MAXCHAR];
char path [MAXCHAR];
char text [MAXCHAR];
char str[MAXCHAR];
char ch;
char command [MAXCHAR];
char name [MAXCHAR];
char finalpath [MAXCHAR];
char character [MAXCHAR];
char temp [MAXCHAR];
char inputc [MAXCHAR];


//Pointers

FILE *fp;

//Functions

void getinfo ();
char readfile(char path [MAXCHAR]);
char writefile(char text [MAXCHAR],char path [MAXCHAR]);
char appendfile(char text [MAXCHAR],char path [MAXCHAR]);
void again ();
void delay(int number_of_seconds);
int main();
char mchar(int number,char character[]);
//char check (char *inputc);