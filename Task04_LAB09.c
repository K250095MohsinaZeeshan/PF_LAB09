#include <stdio.h>
void updateValue(int x) {
    x = x + 5;
}
void updateReference(int *x) {
    *x = *x + 5;
}
int main() {
	printf("BEHAVIOUR OF PASS-BY-VALUE AND PASS-BY-REFERENCE\n");
	printf("________________________________________________\n");
    int number = 80;
    printf("\nBefore update Value: %d\n", number);
    updateValue(number);
    printf("\nAfter update Value: %d (no change is shown when passed by value)\n", number);

    printf("\nBefore update Reference: %d\n", number);
    updateReference(&number);
    printf("\nAfter update Reference: %d (updated successfully when passed by reference)\n", number);

    return 0;
}

