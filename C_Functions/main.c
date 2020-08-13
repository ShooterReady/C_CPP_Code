#include <stdio.h>

// average function using ints
int int_average(int a, int b) {
    return (a + b) / 2;
}

//double avarage
double dub_average(double a, double b) {
    return (a + b) / 2;
}

//count function
int count_up(int val)
{
    for(int i = 0; i < val;i++)
    {
        printf("%d\n",i);
    }
    printf("\n");
}

// loop through array
/*
 * In C, array parameters are treated as pointers (See this for details).
 * So the expression sizeof(arr)/sizeof(arr[0]) becomes sizeof(int *)/sizeof(int)
 */
void loop_arr(int array [] , int size_of_arr)
{

    for (int i = 0; i < size_of_arr ; i++)
    {
        printf("The entry in the array is: %d\n",array[i]);
    }
}
int main() {
    int my_array [] = {1,2,3,4,5,6,7,8,9};
    double val3, val4;
    int val1, val2, val5,arr_size;
    printf("Enter an integer:\n");
    scanf("%d", &val1);
    printf("Enter a second integer:\n");
    scanf("%d", &val2);
    printf("The average of %d and %d are: %d\n", val1, val2, int_average(val1, val2));
    printf("Enter a double:\n");
    scanf("%lf",&val3);
    printf("Enter a second double:\n");
    scanf("%lf",&val4);
    printf("The average of %lf and %lf is: %lf\n\n" , val3,val4,dub_average(val3,val4));
    printf("Enter a number for the counter:\n");
    scanf("%d",&val5);
    count_up(val5);
    // loop through array
    arr_size = sizeof(my_array) / sizeof(my_array[0]);
    loop_arr(my_array,arr_size);

    return 0;
}
