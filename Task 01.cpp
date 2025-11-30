#include<stdio.h>
						
int sumOfDigits(int n){				// Recursive function 
    if (n == 0){
        return 0;
    }
    else{
        return (n % 10) + sumOfDigits(n / 10); // Add last digit and recurse on the rest
	}
}

int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int sum = sumOfDigits(number);
    printf("Sum of digits: %d\n", sum);

    return 0;
}

