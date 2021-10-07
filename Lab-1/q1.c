#include<stdio.h>//Importing the standard input output header file.

int main()//main function.
{
    int n, i, s, l;
    printf("Enter number of elements\n");
    scanf("%d",&n);//Accepting the limit of the array from user.
    int a[n];
    printf("Array:\n");
    for(i=0;i<n;i++)
    {
        a[i]=rand();//Accepting random input.
        printf("%d\t",a[i]);//Printing the array element.
    }

    printf("\n");

    s=l=a[0];//Intialising the smallest and largest value storing variable with the 1st element of the array.
    for(i=0;i<n;i++)
    {
        if(a[i] < s)//if the current element of the array is less than the presently calculated smallest value.
        {
            s=a[i];
        }
        else if(a[i] > l)//if the current element of the array is greater than the presently calculated smallest value.
        {
            l=a[i];
        }
    }

    printf("Smallest number = %d \nLargest number = %d\n", s, l);//Printing the smallest and largest elements.

    return 0;
}
