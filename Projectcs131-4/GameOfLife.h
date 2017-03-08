#pragma once
#ifndef THEGAMEOFLIFE_H
#define THEGAMEOFLIFE_H
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#pragma warning (disable: 4996)

#define HEIGHT 20
#define WIDTH 40
#define LIVING 1
#define DEATH 0
#define ZERO 0
#define ONE 1
#define CURRENT 0
#define NEXT 1
#define GEN 2
typedef int Grid[GEN][HEIGHT][WIDTH];
int readInFile(Grid tableFile);
#endif