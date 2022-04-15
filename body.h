#ifndef BODY_H
#define BODY_H

#include<iostream>

using namespace std;

int x2(int a);

int mod(int a);

void map(int *arr, unsigned size, int (*fun)(int));

int map(int* arr, unsigned size, int (*fun)(int, int));

void print(int *arr);

#endif