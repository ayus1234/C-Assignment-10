//Program to print the first N even natural numbers in reverse order

#include<stdio.h>
#include<conio.h>
int main()
{
    int i,N;
    printf("Enter the number\n");
    scanf("%d",&N);
    for(i=N;i>=1;i--)
        printf("%d\n",2*i);
    getch();
}