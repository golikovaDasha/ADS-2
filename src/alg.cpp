// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
return pow(value, n);
}

uint64_t fact(uint16_t n) {
if (n == 0) {
  return 1;
}
while (n != 0) {
  return n*fact(n - 1);
}
}

double calcItem(double x, uint16_t n) {
if (n == 0 || x == 0) {
  return 1;
}
while ((n != 0) || (x != 0)) {
  return pown(x, n) / fact(n);
}
}

double expn(double x, uint16_t count) {
double s = 1;
for (int i = count; i > 0; i--) {
  s += pown(x, i) / fact(i);
}
return s;
}

double sinn(double x, uint16_t count) {
double s = x;
for (int i = count; i > 0; i -= 2) {
  return s+=pown(-1, i - 1) * pown(x, 2 * i - 1) / fact(2*i-1);
}
}

double cosn(double x, uint16_t count) {
double s = 1;
for (int i = count; i > 0; i -= 2) {
  return s += pown(-1, i - 1) * pown(x, 2 * i - 2) / fact(2*i-2);
  }
}
