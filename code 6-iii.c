//Program to print the first N odd natural numbers

#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,N;
    printf("Enter the number\n");
    scanf("%d",&N);
    do
    {
        printf("%d\n",2*i+1);
        i++;
    }while(i<N);
    getch();
}