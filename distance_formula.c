#include<stdio.h>
#include<stdlib.h>

int x1,x2,y1,y2;
int d;

void main()
{
    printf("enter x an y values ");
    scanf("%d%d%d%d",&x1,&x2,&y1,&y2);

    d = sqrt(pow((x2-x1),2) +pow((x2 -x1),2));

    printf("the distance btw the lines are %f",d);
    getch();
}
