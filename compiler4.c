#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
	char s[100]; int i,n, flag=0;
	printf("Abhishek Bhati\n1901330100010
\n\n\nEnter the string:\n");
	scanf("%s", &s);
	n=strlen(s);
	for(i=0;i<n;i++){
		if(s[i]!='a')
		flag=1;
	}
	if(flag==0)
	printf("Yes string has all a");
	else
	printf("no string doesnt have all a");
	getch();
}

