#include <stdio.h>

int main() {
   //a student must have marks greater than 40 to pass the exam then check if the marks are greater than or equal to 75 for distinction
   int marks;
   printf("Enter your marks: ");
   scanf("%d", &marks);
   if (marks > 40) {
       printf(" passed 😃.\n");
       if (marks >= 75) {
           printf(" distinction.\n");
       }else{
              printf(" no distinction.\n");
       }
   } else {
       printf("failed😭\n");
   }
   return 0;
}