
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
 char s[100],t[100];
 printf("Enter first value:\t");
 scanf("%s",&s);
 printf("Enter second value:\t");
 scanf("%s",&t);
 strcat(s,t);
 printf("String Concatenate:\t %s",s);
 strrev(s);
 printf("\nString Reverse:\t %s",s);
 strcpy(s,t);
 printf("\nString Copy:\t %s",s);
 printf("\nEnter first value:\t");
 scanf("%s",&s);
 printf("Enter second value:\t");
 scanf("%s",&t);
 int c = strcmp(s,t);
 printf("String Compare:\t %d",c);
 getch();
 return 0;
}
