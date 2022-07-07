//Program to print the first N even natural numbers in reverse order

#include<stdio.h>
#include<conio.h>
int main()
{
    int i,N;
    printf("Enter the number\n");
    scanf("%d",&N);
    i=N;
    while(i>=1)
    {
        printf("%d\n",2*i);
        i--;
    }
    getch();
}