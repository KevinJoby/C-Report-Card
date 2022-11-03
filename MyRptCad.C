 #include <stdio.h>
 #include <conio.h>
 void main()
 {
 int a,b,c,d,e,f,g,m;
clrscr();
printf("Enter the mark of Social Science: ");
scanf("%d",&d);
printf("Enter the mark of Mathemetics: ");
scanf("%d",&a);
printf("Enter the mark of Malayalam: ");
scanf("%d",&b);
printf("Enter the mark of English: ");
scanf("%d",&g);
printf("Enter the mark of Science: ");
scanf("%d",&c);
printf("Enter the mark of Hindi: ");
scanf("%d",&f);
printf("Enter the mark of I.T.: ");
scanf("%d",&e);
clrscr();
m=a+b+c+d+e+f+g;
if(m<=280)
{
printf("\t\t\t\tMY REPORT CARD");
if(m>254.8)
{
printf("\n\n\t\tCongragulation!!\n\n\t\tYou got an A+");
}
else
{
printf("\n\n\t\tOops\n\n\t\tYou didn't get an A+.");
}
printf("\n\n\t\tYou got a total of %d marks out of 280.",m);
}
else
{
printf("There is an error");
}
getch();
}