#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main(){
char str1[20],str2[20];
int ch,i,j;
do
{
printf("\t MENU");
printf("\n__________\n");
printf("\n1: Find Length of stirng");
printf("\n2: Find Reverse of string");
printf("\n3: Concatenate stirng");
printf("\n4: Copy string");
printf("\n5: Compare string");
printf("\n6: Exit");
printf("\n__________\n");

printf("\n Enter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("Enter string:");
scanf("%s",&str1);
i=strien(str1);
printf("Length of a string: %d\n\n",str1);
break;

case 2:
printf("Enetr stringt:");
scanf("%s",&str1);
strrev(str1);
printf("Reverse of string:%s\n\n",str1);
break;

case 3:
printf("Enter Frist string:");
scanf("%s",&str1);
printf("Enter Second string:");
scanf("%s",&str2);
strcat(str1,str2);
printf(" string after concatenation:%s\n\n",str1,str2);
break;

case 4:
printf("Enter Frist string:");
scanf("%s",&str1);
printf("Enter Second string:");
scanf("%s",&str2);
printf("\n string before copied:\n string=\"%s\",string2=\"%s\"\n",str1,str2);
strcpy(str1,str2);
printf("__________\n");
printf("\"We are coping string1 to string2\"\n");
printf("__________\n");
printf("string after copied: \n string1=\"%s\", string2=\"%s\"\n\n",str1,str2);
break;

case 5:
printf("Enter Frist string:");
scanf("%s",&str1);
printf("Enter Second string:");
scanf("%s",&str2);
j=strcmp(str1,str2);
if(j==0);
{
printf(" string are same\n\n");
}
else
{
printf(" string are not same\n\n");
}
break;

case 6:
exit(0);
break;
default:
printf(" inavlid inpout. please entr valid input.\n\n");
}
} while(ch!=6);
getch();
return 0;
}




