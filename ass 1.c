#include <stdio.h>
int main()
{
    //question 1
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

   if (num == 2) {  
        printf("2 is a prime number.\n");
        return 0;
    }
    if (num < 2 || num % 2 == 0) {  
        printf("%d is not a prime number.\n", num);
        return 0;
    }else{
        printf("%d is a prime number.\n", num);
    }
    

    for (int i = 3; i * i <= num; i += 2) {  
        if (num % i == 0) {
             printf("%d is not a prime number.\n", num);
            break;
        }else{
             printf("%d is a prime number.\n", num);
        }
    }

    //question 2
    int num, sum = 0, digit;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num < 0) {
        num = -num;  
    }
    while (num > 0) {
        digit = num % 10;  
        sum += digit;   
        num /= 10;      
    }

    printf("Sum of digits: %d\n", sum);

    return 0;

    //question 3
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
     if (a < 0) a = -a;
     if (b < 0) b = -b;
     while (b != 0) {
        int temp = b;
        b = a % b;  
        a = temp;
    }
    printf("GCD is: %d\n",a);

    return 0;

    //question 4
    int num, reversed = 0, digit;
    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;          
        reversed = reversed * 10 + digit; 
        num /= 10;                
    }
    printf("Reversed number: %d\n", reversed);

    return 0;
        
}