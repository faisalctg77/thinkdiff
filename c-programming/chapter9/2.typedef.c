/*
 * author: Mahmud Ahsan
 * https://github.com/mahmudahsan
 * blog: http://thinkdiff.net
 * http://banglaprogramming.com
 * License: MIT License
 */
 
/* 
 * Structure
 * typedef 
 * alias of a type
 */

#include <stdio.h>

typedef struct date{
    int day;
    int month;
    int year;
} Date;

void printDate(Date _date);

int main(){
    Date today;
    today.day = 2;
    today.month = 3;
    today.year = 2018;

    printDate(today);

    return 0;
}

void printDate(Date _date){
    printf("Day: %d | Month: %d | Year: %d\n", _date.day, _date.month, _date.year);
}