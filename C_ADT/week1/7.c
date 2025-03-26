#include <stdio.h>

struct date {
    int year;
    int month;
    int day;
};

void readDate(struct date *);
void printDate(struct date);
void advanceDay(struct date *);

void readDate(struct date *today) {
    scanf("%d", &(*today).year);
    scanf("%d", &(*today).month);
    scanf("%d", &(*today).day);
}

void printDate(struct date today) {
    printf("%02d/%02d/%d", today.month, today.day, today.year);
}

void advanceDay(struct date *today) {
    int daysInMonth[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    today->day++;
    if (today->day > daysInMonth[today->month]) {
        today->day = 1;
        today->month++;
        if (today->month > 12) {
            today->month = 1;
            today->year++;
        }
    }
}

int main(void) {
    struct date today;
    readDate(&today);
    advanceDay(&today);  // Advance to the next day
    printDate(today);
    return 0;
}
