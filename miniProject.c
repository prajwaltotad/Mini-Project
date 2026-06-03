#include <stdio.h>
#include <math.h>

void drawLine() {
    int length;

    printf("Enter line length: ");
    scanf("%d", &length);

    for(int i = 0; i < length; i++) {
        printf("-");
    }

    printf("\n");
}

void drawRectangle() {
    int width, height;

    printf("Enter width and height: ");
    scanf("%d%d", &width, &height);

    printf("\n");
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

void drawTriangle() {
    int rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("\n");
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}





void drawCircle() {

    int r;



    printf("Enter radius: ");

    scanf("%d", &r);



    for (int y = -r; y <= r; y++) {

        for (int x = -2 * r; x <= 2 * r; x++) {
            double distance = sqrt((x * x) / 4.0 + y * y);
            if (distance > r - 0.5 && distance < r + 0.5)

                printf("*");

            else

                printf(" ");
        }
        printf("\n");
    }
}

int main() {
    int choice;

    do {
        printf("\n===== 2D Graphics Editor =====\n");
        printf("1. Draw Line\n");
        printf("2. Draw Rectangle\n");
        printf("3. Draw Triangle\n");
        printf("4. Draw Circle\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                drawLine();
                break;

            case 2:
                drawRectangle();
                break;

            case 3:
                drawTriangle();
                break;

            case 4:
                drawCircle();
                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 5);

    return 0;
}