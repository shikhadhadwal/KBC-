#include<stdio.h>
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
do{
int i,j,a[10],r[10],w,n=0,temp=0,choise;
char name[20];

printf("\n\n\n\t\t\tPROJECT: C LANGUAGE QUIZ GAME");

printf("\t\t\tWELCOME TO THE GAME\n\n\t\t\t ""C Language Quiz""\n\n\tIt contains10 QUESTIONS each carries 10 LAKHS.\nIf you select correct anwesr ,you will get money but \nif you select wrong answer,you will lost the game.\nSo,play carefully and increase your knowledge. Also enjoy the game.\n Made in INDIA.\n");

printf("\n Select Your Choise..\n");
printf("\n\t1.Play\t\t\t2.Exit");
printf("\n Enter:. ");
scanf("%d",&choise);
switch(choise)
{
case 1:

printf("\nEnter you Name:. ");
scanf("%s",name);

srand((unsigned) time(NULL));
for(i=0;i<=9;i++)
    {
     temp=rand()%10+1;
     for(j=0;j<=i-1;j++)
        {
        if(temp==r[j])
            {
            break;
            }
        }
    if(i==j)
        {
        r[i]=temp;
        }
    else
        i--;
    }

//delay(500);
//gotoxy(34, 13);
printf("Let's Play \t");
//delay(1000);
 for(i=1;i<=10;i++)
{
n=0;
switch(r[i])
{
case 1:

printf("Question %i:\n",i);
printf("Who developed C languages ?\n");
printf("\n 1.Ken Thomson\t\t2.Peter Norton\n3.Von Neuman\t\t4.Dennis Ritchie");
printf("\nEnter you Ans.:");
scanf("%d",&n);
if(n==4)
{
printf("\nYou have entered the correct answer.\t Now you have won Rs.%d00000.\t Your Next Question is ",i);
 w=i;

   }
else
 {
printf("\nYou have entered the wrong answer. \t Better Luck Next Time.\t You have earned Rs.%d00000",i-1);
w=i;
i=11;
}
break;
case 2:

printf("Question %i:\n",i);
printf("\nPointer can be used to achieve.\n");
printf("1.call by procedure\t\t2.call by name\n3.call by function\t\t4.call by reference");
printf("\nEnter you Ans.:");
scanf("%d",&n);
if(n==4)
{
printf("\nYou have entered the correct answer.\t Now you have won Rs.%d00000.\t Your Next Question is. ",i);

w=i;}
else
{
printf("\nYou have entered the wrong answer.\t Better Luck Next Time.\t You have earned Rs.%d00000.",i-1);
w=i;
i=11;
}
break;
case 3:

printf("Question %i:\n",i);
printf("\nA structure is. ");
printf("\n1.scalar data type\t\t2.Derived data type\n3.Primitive data type\t\t4.Non of these");
printf("\nEnter you Ans.:");
scanf("%d",&n);
if(n==1)
{
printf("\nYou have entered the correct answer.\t Now you have won Rs.%d00000.\t Your Next Question is.",i);
w=i;
}
else
{
printf("\nYou have entered the wrong answer.\t Better Luck Next Time.\t You have earned Rs.%d00000.",i-1);
w=i;
i=11;
}
break;
case 4:

printf("Question %i:\n",i);
printf("\nWhat is the default type of a function ?");
printf("\n1.void\t\t2.int\n3.char\t\t4.float");
printf("\nEnter you Ans.:");
scanf("%d",&n);
if(n==1)
{
printf("\nYou have entered the correct answer Now you have won Rs.%d00000 Your Next Question is ",i);
w=i;
}
else

   {
printf("\nYou have entered the wrong answer Better Luck Next Time You have earned Rs.%d00000",i-1);
w=i;
i=11;
}
break;
case 5:

printf("Question %i:\n",i);
printf("\nIs it possible to run program without main() function ?\n");
printf("1.YES\t\t2.No\n3.Both\t\t4.None of these");
printf("\nEnter you Ans.:");
scanf("%d",&n);
if(n==2)
{
printf("\nYou have entered the correct answer Now you have wonRs.%d00000Your Next Question is",i);
w=i;
}
else
{
printf("\nYou have entered the wrong answer Better Luck NextTimeYou have earned Rs.%d00000",i-1);
w=i;
i=11;
}
break;
case 6:

printf("Question %i:\n",i);
printf("\nWhat is sizeof() in C ?");
printf("\n1.Operater\t\t2.Function\n3.Macro\t\t\t4.None of these");
printf("\nEnter you Ans.:");
scanf("%d",&n);
if(n==1)
{
printf("You have entered the correct answer Now you have wonRs.%d00000Your Next Question is",i);
w=i;
}
else
{
printf("You have entered the wrong answer Better Luck Next Time.\tYou have earned Rs.%d00000",i-1);
w=i;
i=11;
}
break;
case 7:

printf("Question %i:\n",i);
printf("\nWhich is programming language more faster among  these ?");
printf("\n1.JAVA\t\t2.PHP\n3.C\t\t4.Visual basic");
printf("\nEnter you Ans.:");
scanf("%d",&n);
if(n==3)
{
printf("You have entered the correct answer Now you have wonRs.%d00000Your Next Question is",i);
w=i;
}
else
{
printf("You have entered the wrong answer Better Luck Next Time. \tYou have earned Rs.%d00000",i-1);
i=11;
w=i;
}
break;
case 8:

printf("Question %i:\n",i);
printf("\nHow many time Hello is printed ?\n\nint a = 0 ;\nwhile ( a++ < 5-++a )\nprintf(""Hello"");\n }" );
printf("\n1.5 times\t\t2.4 times\n3.2times\t\t4.1 time");
printf("\nEnter you Ans.:");
scanf("%d",&n);
if(n==4)
{
printf("You have entered the correct answer Now you have wonRs.%d00000Your Next Question is",i);
w=i;
}
else
{
printf("You have entered the wrong answer Better Luck Next Time.\tYou have earned Rs.%d00000",i-1);
w=i;
i=11;
}
break;
case 9:

printf("Question %i:\n",i);
printf("\nLibray function getch () belongs to which header flie ?");
printf("\n1.stdio.h\t\t2.conio.h\n3.stdlib.h\t\t4.stdlibio.h");
printf("\nEnter you Ans.:");
scanf("%d",&n);
if(n==2)
{
printf("You have entered the correct answer Now you have wonRs.%d00000Your Next Question is",i);
w=i;
}
else
{
printf("You have entered the wrong answer Better Luck NextTimeYou have earned Rs.%d00000",i-1);
w=i;
i=11;
}
break;
case 10:

printf("Question %i:\n",i);
printf("\nCan be declare function inside structure of C programming ?");
printf("\n1.Yes\t\t2.No\n3.Depends on compiler\t4.Yes but run time error");
printf("\nEnter you Ans.:");
scanf("%d",&n);
if(n==2)
{
printf("You have entered the correct answer Now you have wonRs.%d00000* \tYOU HAVE BECOME CROREPATI OF THIS WEEK*",i);
w=i;
}
else
{
printf("You have entered the wrong answer Better Luck Next Time.\tYou have earned Rs.%d00000",i-1);
w=i;
i=11;
}
break;
default:
break;
}
}
printf("\n\n%s You have won Rs.%d00000 ..!!!",name,(w-1));

//gotoxy(24, 10);
printf("THANK YOU FOR PLAYING THE GAME...");

break;
case 2:
exit(0);
//delay(100);
default:
break;
}
}while(1);
return 0;
}
