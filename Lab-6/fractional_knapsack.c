#include<stdio.h>//Including the standard input and output library 
#include<stdlib.h>//Including the stdlib library 

void fractional_knapsack(int value[], int weight[], int n, int limit, int *knapsack)//the fractional knapsack function
{
    int ratio[n], i, j, select, selected = 0;
    for(i=0; i<n; i++)
    {
        ratio[i] = value[i]/weight[i];//Calculating the value by weight ratio
    }

    while(limit > 0 && selected < n)//Running the loop till limit is greater than 0 and selected is less tha n
    {
        select = 0;
        for(i=1; i<n; i++)
        {
            if(ratio[i] > ratio[select])
            {
                select = i;
            }
        }
        if(weight[select] >= limit)
        {
            knapsack[select] = limit;
        }
        else
        {
            knapsack[select] = weight[select];
        }
        limit -= weight[select];
        ratio[select] = -1;

        selected++;
    }
}

int main()
{
    int i, n, limit;
    printf("Enter number of items : ");
    scanf("%d", &n);//Accepting the number of items from the user
    printf("Enter size of knapsack : ");
    scanf("%d", &limit);//Accepting the size of knapsack from the user
    int value[n], weight[n], knapsack[n];

    printf("Enter values :\n");
    //Accepting the values from the user
    for(i=0; i<n; i++)
    {
        scanf("%d", &value[i]);

        knapsack[i] = 0;
    }

    printf("Enter weights :\n");
    //Accepting the weights from the user
    for(i=0; i<n; i++)
    {
        scanf("%d", &weight[i]);
    }

    fractional_knapsack(value, weight, n, limit, &knapsack[0]);//calling the fractional_knapsack function

    printf("Knapsack : \n");
    //printing the knapsack
    for(i=0; i<n; i++)
    {
        printf("%d\t",knapsack[i]);
    }

    return 0;
}
