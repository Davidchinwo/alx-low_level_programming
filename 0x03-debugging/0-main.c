#include "main.h"

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
	int i;

	i = 0;
	positive_or_negative(i);

	return (0);
#ifndef MAIN_H
#define MAIN_H

void positive_or_negative(int i);
int largest_number(int a, int b, int c);
int convert_day(int month, int day);
void print_remaining_days(int month, int day, int year);

#endif}
