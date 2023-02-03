#include <stdio.h>

#define MAX_SIZE 100
int arr[MAX_SIZE];
int size = 0;
void insert(int element) {
    if (size == MAX_SIZE) {
        printf("Array is full, insertion not possible\n");
    } else {
        arr[size] = element;
        size++;
    }
}
void delete(int index) {
    if (index >= size || index < 0) {
        printf("Invalid index, deletion not possible\n");
    } else {
        for (int i = index; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;
    }
}
void display() {
    printf("The elements in the array are: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    insert(10);
    insert(20);
    insert(30);
    display();
    delete(1);
    display();
    return 0;
}