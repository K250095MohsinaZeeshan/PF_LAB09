#include <stdio.h>
void inputData(int arr[], int n) {
	int i;
    for (i = 0; i < n; i++) {
        printf("On Day %d,Enter number of patients: ", i + 1);
        scanf("%d", &arr[i]);
    }
}
float averagePatients(int arr[], int n) {
    int sum = 0;
    int i;
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }
    return (float)sum / n;
}
int busiestDay(int arr[], int n) {
    int maximumValue = 0;
    int i;
    for (i = 1; i < n; i++) {
        if (arr[i] > arr[maximumValue]) {
            maximumValue = i;
        }
    }
    return maximumValue;
}
int slowestDay(int arr[], int n) {
    int minimumValue = 0;
    int i;
    for (i = 1; i < n; i++) {
        if (arr[i] < arr[minimumValue]) {
            minimumValue = i;
        }
    }
    return minimumValue;
}

int main() {
    int patients[7];
    int n = 7;
    
    printf("HOSPITAL DATA MANAGEMENT\n");
    printf("________________________\n");
    
	inputData(patients, n);

    float avg = averagePatients(patients, n);
    int busiest = busiestDay(patients, n);
    int slowest = slowestDay(patients, n);

    printf("\n> Average Patients per Day: %.2f\n", avg);
    printf("> Busiest Day: Day %d (%d patients)\n", busiest + 1, patients[busiest]);
    printf("> Slowest Day: Day %d (%d patients)\n", slowest + 1, patients[slowest]);

    return 0;
}

