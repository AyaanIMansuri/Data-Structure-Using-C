#include <stdio.h>

void sort(int list[], int k);
int Binary_search(int list[], int m, int y);

int main() {
    int a[20], n, x, i;
    printf("\nHow many numbers to enter in the list: ");
    scanf("%d", &n);
    
    printf("Enter the numbers in the list: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    printf("\nEnter the number to be searched in the list: ");
    scanf("%d", &x);
    
    sort(a, n);
    Binary_search(a, n, x);
    
    return 0;
}

void sort(int list[], int k) {   
    for (int i = 0; i < k - 1; i++) {
        for (int j = i + 1; j < k; j++) {
            if (list[i] > list[j]) {
                int temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
    }
}

int Binary_search(int list[], int m, int y) {
    int low, high, mid;
    low = 0;
    high = m - 1;
    
    while (low <= high) {
        mid = (low + high) / 2;
        
        if (y < list[mid]) {
            high = mid - 1;
        } else if (y > list[mid]) {
            low = mid + 1;
        } else {
            printf("\nSearch is successful");
            printf("\nSearch value: %d at location: %d\n", y, mid + 1);
            return 0; // Successful search
        }
    }
    
    printf("\nSearch unsuccessful\n");
    return -1; // Unsuccessful search
}