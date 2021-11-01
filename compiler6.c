#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main()
{
 int blank_char, new_line,i;
 char a[50];
clrscr();
blank_char = 0;
new_line = 0;
printf("Abhishek Bhati\n");
printf("1901330100010\n");

printf("Enter a string: \n");
scanf("%s",&a);

 for(i=0;i<strlen(a);i++){
 if(a[i]==' '){
blank_char++;
 }
 if(a[i]=='\n'){
new_line++;
 }
 }
printf("blank=%d,newline=%d\n",blank_char,new_line);
getch();return 0;
 }
