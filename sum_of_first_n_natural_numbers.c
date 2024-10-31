#include <stdio.h>
int main() {
    int n,sum = 0;
    printf("Enter the value 0f number ");
    scanf("%d", &n); 
    for (int i = 1; i <= n; i++) 
        {
    printf("Enter a positive integer: ");

    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }
    printf("Sum of first %d natural numbers is %d", n, sum); 
    return 0;  
}
