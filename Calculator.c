#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    calc:
    printf("\nWelcome to the CALCULATOR");
    printf("\nOperations Available:");
    printf("\n1.(+)\n2.(-)\n3.(/)\n4.(*)\n5.(reminder)");

    int ch, a, b;
    printf("\nEnter the Serial number:");
    scanf("%d",&ch);

    printf("\nEnter the Numbers: ");
    scanf("%d%d",&a,&b);

    switch(ch)
 {
 case 1:
     printf("\nADDITION:%d",(a+b));
     break;

 case 2:

     printf("\nSUBTRACTION:%d",(a-b));
     break;

 case 3:

     printf("\nDIVISION:%d",(a/b));
     break;

 case 4:

     printf("\nMULTIPLICATION:%d",(a*b));
     break;

 case 5:

     printf("\nREMINDER:%d",(a%b));
     break;

 default:
    printf("\nEnter the correct operation available");
 }
 int i;
 printf("\nIF you want to continue press 1:");
 scanf("%d",&i);

 if(i==1)
 {
     goto calc;
 }
 else{
    printf("\nTHANK YOU");
 }

 return 0;

}
