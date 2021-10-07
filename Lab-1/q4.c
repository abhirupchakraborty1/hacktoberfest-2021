#include<stdio.h>//Importing the header file for standard input and output operations.

void SWAP(int *x, int *y)//The swap function to swap the values which takes 2 parameters.
{
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}

int main()//The main function
{
    int a, b, c;
    printf("Enter:\na  b  c\n");
    scanf("%d%d%d",&a,&b,&c);//Accepting 3 numbers from the user.
    SWAP(&a, &b);//Swapping the values of a and b.
    SWAP(&a, &c);//Swapping the values of a and c.
    printf("Values after rotating are: \na\tb\tc \n%d\t%d\t%d\n", a, b, c);//Printing the final values after rotation.
    return 0;
}
