#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 20
int main() {
    char type[MAX_LENGTH];
    float price, fitting, total, discount, gst, net;
    printf("Enter the type of car (Hatchback, Sedan, SUV, MUV):\n");
    scanf("%s", type);
    printf("Enter the price of the car:\n");
    scanf("%f", &price);
    printf("Enter the extra fitting price of the car:\n");
    scanf("%f", &fitting);
    total = price + fitting;
    if (strcmp(type, "Hatchback") == 0) {
        discount = total * 0.03; 
    } else if (strcmp(type, "Sedan") == 0) {
        discount = total * 0.05; 
    } else if (strcmp(type, "SUV") == 0) {
        discount = total * 0.10; 
    } else if (strcmp(type, "MUV") == 0) {
        discount = total * 0.15; 
    } else {
        printf("Invalid Type\n"); 
        return 0;
    }
    gst = (total - discount) * 0.12; // 12% GST
    net = total - discount + gst;
    printf("Net amount to be paid: %.2f\n", net);
    return 0;}
