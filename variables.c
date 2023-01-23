#include <stdio.h>
#include <math.h>

int main () {

    char name[] = "Peter";
    int age =  20;
    float cgpa = 3.9;

    printf("The tall guy's name is %s\n", name);
    printf(" %s is %d years of age and he is a studemnt with the cgpa  %f\n", name, age, cgpa);
    cgpa = 4.3;
    printf("In %s's years pf study his cgpa increased to %.1f\n", name, cgpa);
    age = 30;
    printf("Because of %s his age was mistakened to %d.\n", name, age);
    printf("But %s always got angry whenever people told him looked like %d\n", name, age);
    cgpa = 4.6;
    printf("In %s's 3rd year his cgpa became %.1f\n", name, cgpa);
    cgpa = 4.0;
    printf("But in %s's final year, his cgpa became %.1f\n", name, cgpa);
    age = 24;
    printf("When %s graduated, he was %d\n", name, age);
    age = 25;
    printf("People thought %s's age was %d\n", name, age);
    return 0;

}
