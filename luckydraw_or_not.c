//Given a string of numbers, write a program to find the Lucky Winner in the QBurst Lucky Draw contest. The person is lucky if he gets the lucky number, i.e., if the sum of the last two digits of the number is 3 or 8, print “Lucky Draw Winner”, else print “not a Lucky Draw Winner”.


#include <stdio.h>
#include <string.h>

int main() {
    char numbers[100];
    printf("Enter a string of numbers: ");
    scanf("%s", numbers);

    int length = strlen(numbers);
    int i;
    int lastDigit;
    int secondLastDigit;
    for (i = 0; i < length; i++) {
        // Convert the last two characters to integers
         lastDigit = numbers[i] - '0';
         secondLastDigit = numbers[i - 1] - '0';
    }
        // Check if the sum of the last two digits is 3 or 8
        if ((lastDigit + secondLastDigit) == 3 || (lastDigit + secondLastDigit) == 8) {
            printf("Lucky Draw Winner\n");
        }
        else {
            printf("Not a Lucky Draw Winner\n");
        }
    return 0;
}
