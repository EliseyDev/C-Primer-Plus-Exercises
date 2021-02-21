#include <stdio.h>

#define MONTHS 12
#define YEARS 5

void print_yearly_average(int n, int m, const float rain[n][m]);

void print_monthly_average(int n, int m, const float rain[n][m]);

int main(void) {
    const float rain[YEARS][MONTHS] = {
            {4.3f, 4.3f, 4.3f, 3.0f, 2.0f, 1.2f, 0.2f, 0.2f, 0.4f, 2.4f, 3.5f, 6.6f},
            {8.5f, 8.2f, 1.2f, 1.6f, 2.4f, 0.0f, 5.2f, 0.9f, 0.3f, 0.9f, 1.4f, 7.3f},
            {9.1f, 8.5f, 6.7f, 4.3f, 2.1f, 0.8f, 0.2f, 0.2f, 1.1f, 2.3f, 6.1f, 8.4f},
            {7.2f, 9.9f, 8.4f, 3.3f, 1.2f, 0.8f, 0.4f, 0.0f, 0.6f, 1.7f, 4.3f, 6.2f},
            {7.6f, 5.6f, 3.8f, 2.8f, 3.8f, 0.2f, 0.0f, 0.0f, 0.0f, 1.3f, 2.6f, 5.2f}
    };

    print_yearly_average(YEARS, MONTHS, rain);
    print_monthly_average(YEARS, MONTHS, rain);

    return 0;
}

void print_yearly_average(int n, int m, const float rain[n][m]) {
    int year, month;
    float subtot = 0, total = 0;

    printf(" YEAR    RAINFALL  (inches)\n");

    for (year = 0; year < n; year++) {                 // for each year, sum rainfall for each month
        for (month = 0; month < m; month++) {
            subtot += rain[year][month];
        }
        printf("%5d %15.1f\n", 2010 + year, subtot);
        total += subtot;
    }

    printf("\nThe yearly average is %.1f inches.\n\n",
           total / (float) n);
}

void print_monthly_average(int n, int m, const float rain[n][m]) {
    int year, month;
    float subtot;
    printf("MONTHLY AVERAGES:\n\n");
    printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct ");
    printf(" Nov  Dec\n");

    for (month = 0; month < m; month++) {             // for each month, sum rainfall over years
        for (year = 0, subtot = 0; year < n; year++)
            subtot += rain[year][month];
        printf("%4.1f ", subtot / (float) n);
    }
    putchar('\n');
}