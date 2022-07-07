//Program to print the cubes of first N natural numbers

#include<stdio.h>
#include<conio.h>
int main()
{
    int i,N;
    printf("Enter the number\n");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
        printf("%d\n",i*i*i);
    getch();
}