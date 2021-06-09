#include <stdlib.h>
#include <math.h>

#define VECTOR_LENGTH 10

int main(){
    
    float vector[VECTOR_LENGTH], number, average, plus, standard_deviation, variance;

    plus = 0;

    for(int count = 0; count <= 9; count++){
        printf("Type a value: ");
        scanf("%f", &number);
        vector[count] = number;
    }

    for(int count = 0; count <= 9; count++){
        plus = plus + vector[count];
    }

    average = plus / (sizeof(vector) / sizeof(float));

    variance = 0;

    for(int count = 0; count <= 9; count++){
        variance = variance + pow(vector[count] - average, 2.00);
    }

    standard_deviation = sqrt(variance);

    printf("The variance of the array is: %.2f", variance);
    printf("\nThe standard deviation is: %.2f", standard_deviation);

    return 0;
}