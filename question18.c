#include <stdio.h>

struct Student {
    char name[40];
    int roll;
    float marks;
};

int main(void) {
    struct Student students[5];
    int maxIndex = 0;

    for (int i = 0; i < 5; i++) {
        printf("Enter details for student %d\n", i + 1);
        printf("Name (no spaces): ");
        scanf("%39s", students[i].name);
        printf("Roll: ");
        scanf("%d", &students[i].roll);
        printf("Marks: ");
        scanf("%f", &students[i].marks);

        if (i == 0 || students[i].marks > students[maxIndex].marks) {
            maxIndex = i;
        }
    }

    printf("\nStudent with highest marks:\n");
    printf("Name : %s\n", students[maxIndex].name);
    printf("Roll : %d\n", students[maxIndex].roll);
    printf("Marks: %.2f\n", students[maxIndex].marks);

    return 0;
}
