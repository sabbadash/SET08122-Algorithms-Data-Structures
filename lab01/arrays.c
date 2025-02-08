#include <stdio.h>

int main() {
    float grades[] = {84.8, 67.0, 75.4, 68.4, 67.7, 69.4};
    int length = sizeof(grades) / sizeof(grades[0]);

    float updatedGrades[length + 3];

    for(int i = 0; i < length; i++) {
        updatedGrades[i] = grades[i];
    }

    for (int i = 0; i < length + 3; i++) {
        printf("%f\n", updatedGrades[i]);
    }
    
    return 0;
}