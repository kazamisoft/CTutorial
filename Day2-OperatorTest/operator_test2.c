// 
#include <stdio.h>
int main()
{
  int items = 50;
  float cost_per_item = 4.85;
  float total_cost;
  float total_cost1;
  float total_cost2;
  float discount = 30; // 30%
  char currency = '$';

  total_cost = items * cost_per_item;
  printf("Number of item: %d\n", items);
  printf("Total const: %.2f %c\n", total_cost, currency);
  total_cost1 = total_cost * 100 - discount / 100;
  printf("Discounted total cost: %.2f %c\n", total_cost1, currency);
  total_cost2 = items * (cost_per_item * (100 - discount) / 100);
  printf("Discounted total cost: %.2f %c\n", total_cost2, currency);

  return 0;
}
