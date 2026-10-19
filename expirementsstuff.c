#include <stdio.h>

int main() {
    // float a1=32;
    // float b1=98;
    // float a2=31;
    // float b2=97;
    // float a3=30;
    // float b3=95;
    // float a4=36;
    // float b4=97;
    // float a5=36;
    // float b5=98;
    // printf(" average speed is %f",(a1+a2+a3+a4+a5)/5);
    // printf(" average accuracy is %f",(b1+b2+b3+b4+b5)/5);
    


    // Easily add more test scores inside the brackets
    float speeds[] = {32, 31, 30, 36, 36};
    float accuracies[] = {98, 97, 95, 97, 98};
    
    // Automatically calculates the number of tests
    int total_tests = sizeof(speeds) / sizeof(speeds[0]);
    
    float total_speed = 0;
    float total_accuracy = 0;
    
    // Loop through the data to sum everything up
    for(int i = 0; i < total_tests; i++) {
        total_speed += speeds[i];
        total_accuracy += accuracies[i];
    }
    
    printf("Number of tests: %d\n", total_tests);
    printf("Average speed is %f\n", total_speed / total_tests);
    printf("Average accuracy is %f\n", total_accuracy / total_tests);
    
    return 0;
}

    