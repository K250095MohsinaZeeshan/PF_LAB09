#include <stdio.h>

void twoEqualRoadsTraffic(int traffic[], int n, int target) 
{
	int i,j;
    for (i = 0; i < n; i++)
	 {
        for (j = i + 1; j < n; j++) 
		{
            if (traffic[i] + traffic[j] == target) 
			{
                printf("\nCombined traffic is found on road %d and %d which is equal to %d.\n", i, j, target);
                return;
            }
            else
               printf("\nCombined targeted traffic not found.");
               return;
        }
    }
}
int main() {
    int n,i, target;
    
    printf("TRAFFIC SYSTEM");
    printf("\n______________\n");
    printf("\nEnter number of roads: ");
    scanf("%d", &n);

    int traffic[n];
    printf("\nEnter vehicles(count) present on %d roads:\n", n);
    for ( i = 0; i <n; i++) 
	
	{
        scanf("%d", &traffic[i]);
    }

    printf("\nEnter target for the vehicle count: ");
    scanf("%d", &target);
    
    twoEqualRoadsTraffic(traffic, n, target);

 return 0;
}

