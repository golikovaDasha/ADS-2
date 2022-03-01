// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
if (n == 0) {
  return 1;
}
if (n == 1) {
  return value;
} else {
  return value*pown(value, n-1);
}
}
uint64_t fact(uint16_t n) {
if (n <= 1) {
  return 1;
} else {
  return n*fact(n - 1);
}
}
double calcItem(double x, uint16_t n) {
return pown(x, n) / fact(n);
}
double expn(double x, uint16_t count) {
double s = 1;
for (int i = count; i > 0; i--) {
  s += pown(x, i) / fact(i);
}
return s;
}
double sinn(double x, uint16_t count) {
double s = 0;
for (int i = count; i > 0; i--) {
  s+=pown((-1), i - 1) * pown(x, 2 * i - 1) / fact(2*i-1);
  }
  return s;
}
double cosn(double x, uint16_t count) {
double s = 0;
for (int i = count; i > 0; i--) {
  s += pown((-1), i - 1) * pown(x, 2 * i - 2) / fact(2*i-2);
  }
  return s;
}
