#include <stdio.h>

void analyzeData(int *arr, int n, int *max, int *min, float *avg) 
{
    int sum = 0;
    *max = *min = arr[0];

     int i;
    for (i = 0; i < n; i++) 
	{
        if (arr[i] > *max)
            *max = arr[i];
        if (arr[i] < *min)
            *min = arr[i];
        sum += arr[i];
    }
    *avg = (float)sum / n;
}
int main() 
{
	printf("OPERATIONS ON ARRAY USING POINTERS\n");
	printf("__________________________________\n");
    int data[] = {40, 20, 50, 70, 80};
    int max, min;
    float avg;

    analyzeData(data, 5, &max, &min, &avg);

    printf("\nMaximum = %d\n", max);
    printf("\nMinimum = %d\n", min);
    printf("\nAverage = %.2f\n", avg);

    return 0;
}

