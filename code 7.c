//Program to print the first N odd natural numbers in reverse order

#include<stdio.h>
#include<conio.h>
int main()
{
    int i,N;
    printf("Enter the number\n");
    scanf("%d",&N);
    for(i=N-1;i>=0;i--)
        printf("%d\n",2*i+1);
    getch();
}