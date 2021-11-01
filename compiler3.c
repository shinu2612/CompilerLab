#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
	char ch[70];
	int i, flag=0,length=0;

	printf("Abhishek bhati\n1901330100010\n\n\nEnter the string:\n");
	scanf("%s",&ch);
	while(ch[length]!='\0'){
		length++;
		for(i=0;i<length;i++)
		{
			if(ch[i]>=40 &&ch[i]<=57)
			flag=0;
			else{
				flag=1;
				break;
			}
		}
		if(flag==0)
		printf("This is a constant\n");
		else
		printf("This is not a constant\n");
		getch();
}

