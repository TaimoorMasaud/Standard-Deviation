#include<stdio.h>
#include<math.h>
int main()
{
    char ch='Y';
    int number,largest,smallest,average=0,N=1,sum_squares=0;
    float standard_deviation;
    printf("\nEnter a number :");
    scanf("%d",&number);
    largest=number,smallest=number;
    sum_squares=sum_squares+number*number;
    average=number;
     while (ch=='y'||ch=='Y')
    {
        printf("\nEnter another number :");
        scanf("%d",&number);
        if (number>largest)
        {
            largest=number;
        }
        else if (number<smallest)
        {
            smallest=number;
        }
        average=average+number;
        sum_squares=sum_squares+number*number;
        N++;

        printf("\nDo you want to enter another value Y/N? ");
        scanf(" %c",&ch);

    }
    average=average/N;
    standard_deviation=sqrt((sum_squares/N)-(average*average));

    printf("\nSmallest=%d \nLargest=%d \nAverage=%d",smallest,largest,average);
    printf("\nRange of values is from %d to %d ",smallest,largest);
    printf("\nThe standard deviation is %.2f",standard_deviation);
}
