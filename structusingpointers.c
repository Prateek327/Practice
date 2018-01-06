#include <stdio.h>
 struct person
{
   int age;
   float weight;
   char c[50];
};

int main()
{
    struct person *personPtr, person1;
    personPtr = &person1;            // Referencing pointer to memory address of person1

    printf("Enter integer: ");
    scanf("%d",&personPtr->age);

    printf("Enter number: ");
    scanf("%f",&personPtr->weight);

    printf("enter name:");
    scanf("%s",personPtr->c);

    printf("Displaying: ");
    printf("%d%f%s",(*personPtr).age,(*personPtr).weight,personPtr->c);

    return 0;
}
