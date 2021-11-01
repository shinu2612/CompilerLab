#include<stdio.h>
#include<conio.h>
#include<ctype.h>

void main()
{
 char str[10];
 int i;
clrscr();
printf("Abhishek Bhati\n");
printf("1901330100010\n");

printf("Input identifier:\n");
scanf("%s",&str);

 if((isdigit(str[0]) || !str[0]== '_')|| !(isalpha(str[0])))
 {
    printf("Not valid\n");
 }
 else
 {
    printf("Valid\n");
 }
getch();
}
