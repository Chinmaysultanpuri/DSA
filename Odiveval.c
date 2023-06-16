#include <stdio.h>
#include <string.h>

struct food {
    char f[20];
    char c[30];
    float price;
    float dis;
};

void read(struct food k[], int n);
void display(struct food k[], int n);
void maxd(struct food k[], int n);
void gross(struct food k[], int n);
void fc(struct food k[], int n);

int main() {
    int n;
    printf("Enter number of customers: ");
    scanf("%d", &n);

    struct food k[50];

    read(k, n);
    display(k, n);
    maxd(k, n);
    gross(k, n);
    fc(k, n);

    return 0;
}

void read(struct food k[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter the details of %dth customer(Food, Customer, Price, Distance): \n", i + 1);
        scanf("%s%s%f%f", k[i].f, k[i].c, &k[i].price, &k[i].dis);
    }
}

void display(struct food k[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s %s %f %f \n", k[i].f, k[i].c, k[i].price, k[i].dis);
    }
}

void maxd(struct food k[], int n) {
    int j = 0;
    for (int i = 1; i < n; i++) {
        if (k[i].price > k[j].price) {
            j = i;
        }
    }
    printf("The details of the order with the highest price: \n");
    printf("%s %s %f %f \n", k[j].f, k[j].c, k[j].price, k[j].dis);
}

void gross(struct food k[], int n) {
    float tot = 0;
    for (int i = 0; i < n; i++) {
        tot += k[i].price;
    }
    printf("Total price = %f\n", tot);
}

void fc(struct food k[], int n) {
    char fr[30];
    int found = 0;
    printf("Enter food name: ");
    scanf("%s", fr);
    for (int i = 0; i < n; i++) {
        if (strcmp(fr, k[i].f) == 0) {
            printf("Details of the order: %s %s %f %f\n", k[i].f, k[i].c, k[i].price, k[i].dis);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Food not found.\n");
    }
}
