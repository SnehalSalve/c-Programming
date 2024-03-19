#include <stdio.h>
union Job {
   float salary;
   int workerNo;
} p;

int main() {
    p.salary = 35.5;

   // when j.workerNo is assigned a value,
   // j.salary will no longer hold 12.3
  // p.workerNo = 101;

   printf("Salary = %.1f\n", p.salary);
   printf("Number of workers = %d", p.workerNo);
   return 0;
}