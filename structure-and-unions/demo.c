//structure
//struct and pointers
//struct and fucntions
//union


#include <stdio.h>
#include <string.h>

// create struct with person1 variable
struct Person {
  char name[50];
  int No;
  float salary;
} p;

int main() {

  // assign value to name of person1
  strcpy(p.name, "sayali");

  // assign values to other person1 variables
  p.No = 41;
  p. salary = 10000;

  // print struct variables
  printf("Name: %s\n", p.name);
  printf("No.: %d\n", p.No);
  printf("Salary: %.2f", p.salary);

  return 0;
}