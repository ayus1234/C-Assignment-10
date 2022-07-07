//Program to print the first N even natural numbers

#include<stdio.h>
#include<conio.h>
int main()
{
    int i,N;
    printf("Enter the number\n");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
        printf("%d\n",2*i);
    getch();
}