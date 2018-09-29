#include <stdio.h>
#include<math.h>

double perimeter(double a, double b, double c) {
    double p = (a + b + c) / 2;
    return p;
}

double area(double a, double b, double c) {
    double p = perimeter(a, b, c);
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main() {
    double a, b, c;
    printf("Please enter your number 1:");
    scanf("%lf", &a);
    printf("Please enter your number 2:");
    scanf("%lf", &b);
    printf("Please enter your number 3:");
    scanf("%lf", &c);
    double results = area(a, b, c);
    printf("Results : %lf", results);
}