#include<stdio.h>
void main()
{
char ch;
printf("enter the character\n");
scanf("%d",&ch);
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
printf("%c is a vowel\n",ch);
else
printf("%c is not a vowel\n",ch);
getch();
}
